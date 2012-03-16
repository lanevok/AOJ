#include<stdio.h>
#include<string.h>

int main(){
  char ope[10];
  int y;
  int s[101][1000];
  int d[1000]={};

  for(;;){
    scanf("%s",ope);

    if(strcmp(ope,"quit")==0)
      return 0;

    else if(strcmp(ope,"push")==0){
      scanf("%d",&y);
      getchar();         // space through
      s[y][d[y]++]=getchar();
    }

    else if(strcmp(ope,"pop")==0){
      scanf("%d",&y);
      printf("%c\n",s[y][--d[y]]);
    }

    else if(strcmp(ope,"move")==0){
      int a,b;
      scanf("%d%d",&a,&b);
      s[b][d[b]++]=s[a][--d[a]];
    }
  }
}
