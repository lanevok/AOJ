#include<stdio.h>

int main(){
  double b[11];
  double a,s;
  int i;

  while(scanf("%lf",&a)!=EOF){
    b[1]=a;
    b[2]=b[1]*2.0;
    for(i=3;i<=9;i=i+2){
      b[i]=b[i-1]/3.0;
      b[i+1]=b[i]*2.0;
    }
    s=0.0;
    for(i=1;i<=10;i++)
      s+=b[i];
    printf("%f\n",s);
  }
  return 0;
}
