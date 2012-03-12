#include<stdio.h>
#include<math.h>
int main(){
  double a,b,c;
  double s,l,h;
  scanf("%lf%lf%lf",&a,&b,&c);
  s=a*b*sin(c/180.0*M_PI)/2.0;
  l=a*a+b*b-2.0*a*b*cos(c/180.0*M_PI);
  l=sqrt(l)+a+b;
  h=2.0*s/a;
  printf("%lf\n%lf\n%lf\n",s,l,h);
  return 0;
}
