M = csvread('valores.csv',1,0);

subplot(211)
plot(M(:,1), M(:,2), 'r')
legend('Suscetiveis vs Tempo')
xlabel('Tempo')
ylabel('N? de individuos')

subplot(212)
plot(M(:,1), M(:,3), 'b')
legend('Infetados vs Tempo')
xlabel('Tempo')
ylabel('N? de individuos')