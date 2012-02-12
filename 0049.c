#include<stdio.h>
#include<string.h>

int main(){
  char a[]={"A"};
  char b[]={"B"};
  char o[]={"O"};
  char type[3];
  int ax=0,bx=0,ox=0,abx=0,n;

  while(scanf("%d,%s",&n,type)!=EOF){
    if(strcmp(type,a)==0)
      ax++;
    else if(strcmp(type,b)==0)
      bx++;
    else if(strcmp(type,o)==0)
      ox++;
    else
      abx++;
  }
  printf("%d\n%d\n%d\n%d\n",ax,bx,abx,ox);
  return 0;
}
