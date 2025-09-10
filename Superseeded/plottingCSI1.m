clf
figure(1)
[t1, theta1] = ode45('rotaryPendulumFunction', [0 10], [-pi, 0]);
yyaxis left

plot(t1, theta1(:,1));
yyaxis right
plot(t1, theta1(:,2));

grid on;
legend(["$\theta$", "$\dot{\theta}$"], Interpreter="latex", FontSize=15);
xlabel("Time, $t$", Interpreter="latex", FontSize=20);

% phase portrait
figure(4);
hold on;
grid on;
phaseplot('swingup', [-2*pi 2*pi 20], [-9 9, 20], 0.02);

% phaseplot('swingup', 'auto', 0.06);
% plot(theta1(:,1), theta1(:,2), 'r','LineWidth',2);
plot(0, 0,      'k:x','LineWidth',2.5,'MarkerSize',15)
plot(pi, 0,     'k:x','LineWidth',2.5,'MarkerSize',15)
plot(-pi, 0,    'k:x','LineWidth',2.5,'MarkerSize',15)

% with streamlines

% figure(5);
% hold on;
% grid on;
% phaseplot('swingup', [-2*pi 2*pi 20], [-4 4, 10],0.02, ...
%     boxgrid([-2*pi 2*pi 10], [-4 4,  5]), 0.5);
% quiver(X, Y, )                                                                        

%% Finding Eigenvalues at equilibria
syms the dthe the0 dthe0
model = swingup(0, [the, dthe])
ddthe = [model]
lin_model = jacobian(ddthe, [the, dthe])

vpa(eig(subs(lin_model, [the, dthe], [0, 0])))
vpa(eig(subs(lin_model, [the, dthe], [pi, 0])))