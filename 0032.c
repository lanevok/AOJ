#include<stdio.h>

int main(){
  int x1,x2,x3;
  int c=0,h=0;

  while(scanf("%d,%d,%d",&x1,&x2,&x3)!=EOF){
    if(x1*x1+x2*x2==x3*x3)
      c++;
    if(x1==x2)
      h++;
  }
  printf("%d\n%d\n",c,h);
  return 0;
}
