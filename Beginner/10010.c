#include<stdio.h>

int main(){
  int a,b,r;
  char c;

  while(1){
    scanf("%d %c %d",&a,&c,&b);

    if(c=='+')
      r=a+b;
    else if(c=='-')
      r=a-b;
    else if(c=='*')
      r=a*b;
    else if(c=='/')
      r=a/b;
    else
      return 0;
      
    printf("%d\n",r);
  }
}