pkg load symbolic
syms x x1 x2 x3 x4 x5 f(x) h
p = f(x1)*((x-x2)*(x-x3)*(x-x4)*(x-x5))...
         /((x1-x2)*(x1-x3)*(x1-x4)*(x1-x5)) ...
  + f(x2)*((x-x1)*(x-x3)*(x-x4)*(x-x5))...
         /((x2-x1)*(x2-x3)*(x2-x4)*(x2-x5)) ...
  + f(x3)*((x-x1)*(x-x2)*(x-x4)*(x-x5))...
         /((x3-x1)*(x3-x2)*(x3-x4)*(x3-x5)) ...
  + f(x4)*((x-x1)*(x-x2)*(x-x3)*(x-x5))...
         /((x4-x1)*(x4-x2)*(x4-x3)*(x4-x5)) ...
  + f(x5)*((x-x1)*(x-x2)*(x-x3)*(x-x4))...
         /((x5-x1)*(x5-x2)*(x5-x3)*(x5-x4));
         
dp = diff(p,x);

dfc = simplify(subs(dp,{x1,x2,x3,x4,x5},{x-2*h,x-h,x,x+h,x+2*h}));
latex(dfc)
