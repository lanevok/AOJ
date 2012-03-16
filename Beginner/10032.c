#include<stdio.h>
#include<string.h>

int main(){
  char ope[10];
  int z=0;
  int s[1000];

  for(;;){
    scanf("%s",ope);

    if(strcmp(ope,"quit")==0)
      return 0;

    else if(strcmp(ope,"push")==0){
      getchar();         // space through
      s[z++]=getchar();
    }

    else if(strcmp(ope,"pop")==0)
      printf("%c\n",s[--z]);
  }
}
