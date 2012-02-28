#include<stdio.h>

int main(void){
  int x, y, c, max, min;
  int a, b, r1,r2;
  int result;

  while(scanf("%d%d",&x,&y)!=EOF){
    if(x>y){
      max=x;
      min=y;
    }
    else{
      max=y;
      min=x;
    }
    a=max;
    b=min;
    while(1){
      r1=a/b;
      r2=a%b;
      if(r2==0){
	result=b;
	break;
      }
      a=b;
      b=r2;
    }
    printf("%d %d\n",result,max/result*min);
  }
  return(0);
}
