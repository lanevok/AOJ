#include<stdio.h>
#include<string.h>
#include<ctype.h>

char s[10000];

void alpha(){
  int i,len=strlen(s);

  for(i=0;i<len;i++)
    s[i]=tolower(s[i]);
}

int main(){
  char t[10000];
  int cnt=0;

  scanf("%s",t);
  for(;;){
    scanf("%s",s);

    if(strcmp(s,"END_OF_TEXT")==0)
      break;

    alpha();
    if(strcmp(s,t)==0)
      cnt++;
  }
  printf("%d\n",cnt);

  return 0;
}
