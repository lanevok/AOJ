#include<stdio.h>
#include<string.h>

int main(){
  int s,i,n;
  
  while(1){
    char b[1005]={};

    s=0;
    scanf("%s",b);
    if(b[0]=='0')
      break;

    n=strlen(b);
    for(i=0;i<n;i++)
      s+=b[i]-'0';

    printf("%d\n",s);
  }
  return 0;
}
