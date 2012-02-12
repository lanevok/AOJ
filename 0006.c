#include<stdio.h>

int main(void){
  char str[21];
  char rev[21];
  int i,cnt=0;

  scanf("%s",str);
  while(str[cnt]){
    cnt++;
  }
  for(i=0;i<cnt;i++){
    rev[i]=str[cnt-i-1];
  }
  rev[cnt]='\0';
  printf("%s",rev);
  puts("");
  return(0);
}
