#include<stdio.h>
#include<math.h>

int main(){
  double a,b,c,s,l,h;

  scanf("%lf%lf%lf",&a,&b,&c);

  s=a*b*sin(c/180.0*M_PI)/2.0;
  l=sqrt(a*a+b*b-2.0*a*b*cos(c/180.0*M_PI))+a+b;
  h=2.0*s/a;

  printf("%f\n%f\n%f\n",s,l,h);
  return 0;
}
