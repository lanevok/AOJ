#include<stdio.h>

int main(){
  int a,b;
  char c;

  while(1){
    scanf("%d %c %d",&a,&c,&b);

    if(c=='?')
      return 0;

    else if(c=='+')
      printf("%d\n",a+b);
    else if(c=='-')
      printf("%d\n",a-b);
    else if(c=='*')
      printf("%d\n",a*b);
    else if(c=='/')
      printf("%d\n",a/b);
  }
}
