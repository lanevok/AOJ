#include<stdio.h>

int main(void){
  double min=0,max=0;
  double tmp;

  if(scanf("%lf",&tmp)!=EOF){
    min=tmp;
    max=tmp;
  }
  else{
    puts("0.0");
    return 0;
  }
  while(scanf("%lf",&tmp)!=EOF){
    if(min>tmp)
      min=tmp;
    if(max<tmp)
      max=tmp;
  }
  printf("%.1f",max-min);
  return 0;
}
