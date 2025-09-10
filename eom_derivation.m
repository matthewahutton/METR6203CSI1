clearvars

% digits(6)
% sympref('FloatingPointOutput',true); 

METR7203_PendulumPlant
syms theta dtheta ddtheta phi dphi ddphi 

syms t r R l L M m g J Jxx Jyy Jzz I Ixx Iyy Izz c1 c2

%% Commented out section used for checking equations of motion

% J = diag([Jxx Jyy Jzz])% J - inertia of the table
% I = diag([Ixx Iyy Izz])%  I - inertia of the pendulum

J = diag([0 J J]);      % J is J_bar in the plant function
I = diag([0 Iyy I]);  %  Iyy - Jy in plant function, I is Jz_bar in plant function
M =0;                   % M is absorbed by J1_bar to give an equiv table inertia

  
%% These variables are taken from the plant script provided. 
R = Rh
l = lcg;
r = 0; %reduced into J1_bar
M = 0; %reduced into J1_bar
g = grav;
c1 = 1; %friction of base
c2 = 0; %friction of pivot

J = J1_bar% J - inertia of the table
Iyy = Jy 
I = Jz_bar%  I - inertia of the pendulum

rotationalMatrix1 = [
    cos(theta) sin(theta) 0; 
    -sin(theta) cos(theta) 0;
    0 0 1];

rotationalMatrix2Prime = [
    cos(phi) sin(phi) 0;
    -sin(phi) cos(phi) 0;
    0 0 1];

frameMap = [
    0 0 1;
    0 -1 0;
    1 0 0];

rotationalMatrix2 = rotationalMatrix2Prime*frameMap;

% Included for testing
% rotationalMatrix2 = [
%     0 -sin(phi) cos(phi); 
%     0 -cos(phi) -sin(phi); 
%     1 0 0];


thetaDot = [0 0 dtheta];
phiDot = rotationalMatrix2*thetaDot.' + [0 0 dphi].'

u = rotationalMatrix2*cross(thetaDot, [R 0 0]).' %v2

vLinTable = cross(thetaDot, [r 0 0]); %v1c
vPend = u + cross(phiDot, [l 0 0]).'; %v2c


% Potential Energy of the table


T1 = 0.5*(vLinTable*M*vLinTable.' + thetaDot*J*thetaDot.');

T2_prime = 0.5*(vPend.'*m*vPend + phiDot.'*I*phiDot); %rotational and linear kinetic energy of pendulum assembly
T2 = T2_prime;
V = m*l*g*(1-cos(phi));

L = T1 + T2 - V;
vars = [theta dtheta ddtheta phi dphi ddphi];

syms T
eom = lagrange(L, vars) + [-T+c1*dtheta c2*dphi]; % Normal eoms, 1x2 array 

% T2 = 0.5*(vPend.'*m*vPend + phiDot.'*I*phiDot);
% T2 = 0.5000*I*dphi^2 + 0.5000*m*(dphi*l - R*dtheta*cos(phi))^2 + 0.5000*Iyy*dtheta^2 + 0.5000*R^2*dtheta^2*m*sin(phi)^2 + 0.5000*dtheta^2*l^2*m*sin(phi)^2;

% T2_prime = T2 however sin^2+cos^2 = 1 identity is applied
% as Matlab was have issues simplifying it. 
% This was causing problems with lagrange function. 
% T2 = (0.5000*m*l^2 + 0.5000*Izz)*dphi^2 + R*l*m*cos(phi)*dphi*dtheta + (0.5000*m*R^2 + 0.5000*m*l^2*sin(phi)^2 + 0.5000*Ixx*cos(phi)^2 + 0.5000*Iyy*sin(phi)^2)*dtheta^2 



% Full matrix calc eoms
tableEnergy = 0.5*(diag(vLinTable)^2*M + diag(thetaDot)^2*J);
V2 = diag([0 0 m*l*g*(1-cos(phi))]);
pendEnergy = 0.5*(diag(phiDot)^2*I + diag(vPend)^2*m)-V2 % Considering only the rotational potential energy for the purpose of controlling phi 


L2 = tableEnergy+pendEnergy;

% dpendEnergy = diff(pendEnergy, phi)*dphi + diff(pendEnergy, dphi)*ddphi + diff(pendEnergy, dtheta)*ddtheta;
dpendEnergy1 = diff(pendEnergy(1,1), phi)*dphi + diff(pendEnergy(1,1), dphi)*ddphi + diff(pendEnergy(1,1), dtheta)*ddtheta
dpendEnergy2 = diff(pendEnergy(2,2), phi)*dphi + diff(pendEnergy(2,2), dphi)*ddphi + diff(pendEnergy(2,2), dtheta)*ddtheta
dpendEnergy3 = diff(pendEnergy(3,3), phi)*dphi + diff(pendEnergy(3,3), dphi)*ddphi + diff(pendEnergy(3,3), dtheta)*ddtheta



eomFull1 = lagrange(L2(1,1), vars) %+ [-T+c1*dtheta c2*dphi]; % Normal eoms, 1x2 array 
eomFull2 = lagrange(L2(2,2), vars)
eomFull3 = lagrange(L2(3,3), vars)


dd_theta = solve(eom(1), ddtheta)
torque = solve(subs(eom(2), ddtheta, dd_theta), T) %Torque request

% dd_phi = solve(eom(2), ddphi);
dd_phi = solve(subs(eom(2), ddtheta, dd_theta), ddphi)
% 




%% Inertia Pendulum

%% Inertia of Table