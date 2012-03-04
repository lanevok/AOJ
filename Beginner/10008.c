#include<stdio.h>
int main(){
  double a1,b1;
  int a2,b2;
  scanf("%lf%lf",&a1,&b1);
  a2=a1;b2=b1;
  printf("%d ",a2/b2);
  printf("%d ",a2%b2);
  printf("%.5f\n",a1/b1);
  return 0;
}
