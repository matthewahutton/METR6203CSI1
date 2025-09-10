%% Derivation of equations of motion
%
%

%% Defining position of mass
clearvars
clear

syms theta dtheta ddtheta phi dphi ddphi r l 

% e1 = [cos(theta); sin(theta); 0];
% e2 = [-sin(theta); cos(theta); 0];
% e3 = [0; 0; 1];

% e1 = [cos(theta) sin(theta) 0];
% e2 = [-sin(theta) cos(theta) 0];
% e3 = [0 0 1];


transform  = [cos(theta) sin(theta) 0; -sin(theta) cos(theta) 0; 0 0 1]



% pos_m = [sum(r*e1), sum(l * sin(phi)* e2), sum(l * cos(phi) * e3)]
% pos_m = [r*e1; l * sin(phi)* e2; l * cos(phi) * e3]
diagonal = diag([r, l*sin(phi), l*cos(phi)])
pos = diagonal*transform




% Calculate the velocity of the mass
velocity_m = diff(pos, theta) * dtheta + diff(pos, phi) * dphi;
% velocity_m_squared = norm(velocity_m)

x_vel = diff(pos(1), theta)*dtheta + diff(pos(1), phi)*dphi
y_vel = diff(pos(2), theta)*dtheta + diff(pos(2), phi)*dphi
z_vel = diff(pos(3), theta)*dtheta + diff(pos(3), phi)*dphi

v_squared = x_vel^2 + y_vel^2 + z_vel^2

%% Energy calcs
syms m M j J g
% 
E_pendulum_translation = 0.5*v_squared^2*m
E_pendulum_rotation = 0.5 * j * dphi^2
E_table_rotational = 0.5*(J + (1-cos(phi) * m * r^2)) * dtheta^2
% 
% 
T = E_pendulum_translation + E_pendulum_rotation + E_table_rotational
% T = E_pendulum_translation +  E_table_rotational;
% 
V = m * l * g * cos(phi-1);
% 
L = T - V
% 
% vars = [theta dtheta ddtheta phi dphi ddphi];
vars1 = [theta dtheta ddtheta ];
vars2 = [phi dphi ddphi];

% simplify(lagrange(L, vars))
L1 = lagrange(L, vars1) 
L2 = lagrange(L, vars2) 
% %% Defining inertias
% 
% % Jt = (M+m)*Lt^2;
% % J_p = m*L^2;
% % 
% % L = 0.5*(Jt*dphi^2 + J_p*dtheta^2) - m*l*g*(1-cos(theta));
% % vars = [phi dphi ddphi theta dtheta ddtheta];
% % 
% % lagrange(L, vars)
% % 

