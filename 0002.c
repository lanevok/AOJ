#include<stdio.h>

int main(void){
  int a,b,x,y;
  while(scanf("%d%d",&a,&b)!=EOF){
    x=a+b;
    y=0;
    while(1){
      if(x==0)
	break;
      x=x/10;
      y++;
    }
    printf("%d\n",y);
  }
  return(0);
}
