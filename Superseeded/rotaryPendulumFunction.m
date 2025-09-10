function rotaryPendulum = rotpend(t, psi)

% psi = phi
% dpsi = theta

psi_dot = [
    psi(2);
    -(0.4182*sin(phi) + (0.0158*cos(phi)*(- 1.4028e+22*sin(phi)*dphi^2 + 4.3718e+22*dtheta*cos(phi)*sin(phi)*dphi + 8.8946e+23*dtheta))/(2.1859e+22*cos(phi)^2 - 1.7720e+23) - 0.0246*dtheta^2*cos(phi)*sin(phi))/((2.2124e+20*cos(phi)^2)/(2.1859e+22*cos(phi)^2 - 1.7720e+23) + 0.0246)
    
];

end