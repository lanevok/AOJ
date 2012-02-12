#include<stdio.h>

int main(void){
  double a,b,c,d,e,f;
  double x,y;

  while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
    if(d==0){
      y=(c*d-a*f)/(b*d-a*e);
      x=(c-(b*y))/a;
    }
    else{
      y=(a*f-c*d)/(a*e-b*d);
      x=(f-(e*y))/d;
    }
    if(x==-0)
      x=0;
    printf("%.3f %.3f\n",x,y);
  }
  return(0);
}
