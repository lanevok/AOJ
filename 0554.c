#include<stdio.h>

int main(){
  int m,c,i=4,s=0;
  
  while(i--){
    scanf("%d",&c);
    s+=c;
  }
  m=s/60;
  c=s-(m*60);
  printf("%d\n%d\n",m,c);
  return 0;
}
