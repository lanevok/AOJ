#include<stdio.h>
#include<math.h>

int main(void){
  //  int x2,h2;
  double x,h;
  double s;
  double h2;

  while(1){
    scanf("%lf%lf",&x,&h);
    if(x==0&&h==0)
      break;

    //    x=x2;
    //    h=h2;
    s=0;
    s+=x*x;
    h2=(double)sqrt((x/2)*(x/2)+(h*h));
    s+=2*x*h2;
    printf("%.6f\n",s);
  }
  return 0;
}
