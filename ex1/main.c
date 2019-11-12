#include "myMath.h"
#include <stdio.h>

int main() {
  double x;
  printf("Please insert a real number: ");
  scanf("%lf",&x);
  int x_floor = x;
  float ans1 = sub(add(Exp(x_floor),Pow(x,3)),2);
  float ans2 = add(mul(x, 3),mul(Pow(x,2), 2));
  float ans3 = sub(div(mul(Pow(x,3),4),5),mul(x,2));

  printf("The value of f(x) = e^x+x^3-2 at the point %f is: %.4f\n",x ,ans1);
  printf("The value of f(x) = 3x+2x^2 at the point %f is: %.4f\n",x ,ans2);
  printf("The value of f(x) = (4x^3)/5-2x at the point %f is: %.4f\n",x ,ans3);
  
	return 0;
}
