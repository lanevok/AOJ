#include<stdio.h>
#include<string.h>

int a,b,o,ab;

int main(){
  int n;
  char t;

  while(scanf("%d,%s",&n,t)!=EOF){
    if(strcmp(t,"A")==0)
      a++;
    else if(strcmp(t,"B")==0)
      b++;
    else if(strcmp(t,"O")==0)
      o++;
    else if(strcmp(t,"AB")==0)
      ab++;
  }
  printf("%d\n%d\n%d\n%d\n",a,b,ab,o);
  return 0;
}
