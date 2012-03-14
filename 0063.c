#include<stdio.h>
#include<string.h>

int main(){
  int i,j,len;
  int cnt=0;
  char a[105];

  while(scanf("%s",a)!=EOF){
    len=strlen(a)-1;
    j=len;
    for(i=0;i<=len;i++){
      if(i>=j){
	cnt++;
	break;
      }
      if(a[i]!=a[j])
	break;
      j--;
    }
  }
  printf("%d\n",cnt);
  return 0;
}
