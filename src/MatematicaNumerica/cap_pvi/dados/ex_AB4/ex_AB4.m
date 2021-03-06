f = @(t,y) y+sin(t);

h=1e-1;
n=round(1/h+1);
t=zeros(n,1);
y=zeros(n,1);

#c.i.
t(1)=0;
y(1)=0.5;

#inicializacao
for i=1:3
  t(i+1)=t(i)+h;
  k1=h*f(t(i),y(i));
  k2=h*f(t(i)+h/2,y(i)+k1/2);
  k3=h*f(t(i)+h/2,y(i)+k2/2);
  k4=h*f(t(i)+h,y(i)+k3);
  y(i+1)=y(i)+(k1+2*k2+2*k3+k4)/6;
endfor

#iteracoes
for i=4:n-1
  t(i+1) = t(i)+h;
  y(i+1)=y(i) + ...
        h/24*(55*f(t(i),y(i)) ...
        -59*f(t(i-1),y(i-1)) ...
        +37*f(t(i-2),y(i-2)) ...
        -9*f(t(i-3),y(i-3)));
endfor

ya = @(t) exp(t)-sin(t)/2-cos(t)/2;
printf("%f %1.5E %1.1E\n",t(n),y(n),abs(y(n)-ya(1)))
