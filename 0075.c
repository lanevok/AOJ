#include<stdio.h>
int main(a){
  double t,s;
  while(scanf("%d,%lf,%lf",&a,&t,&s)!=EOF){    
    if(t/(s*s)>=25.0)
      printf("%d\n",a);
  }
  return 0;
}
