#include<stdio.h>
#include<string.h>

int main(){
  char b[1001];
  int s,i,n;
  
  while(1){
    s=0;
    for(i=0;i<1001;i++){
      b[i]=0;
    }
    scanf("%s",b);
    if(b[0]=='0'){
      break;
    }
    n=strlen(b);
    for(i=0;i<n;i++){
      s=s+(b[i]-'0');
    }
    printf("%d\n",s);
  }
  return 0;
}
