#include<stdio.h>

int main(){
  int a[31]={};
  int i,x;

  for(i=0;i<28;i++){
    scanf("%d",&x);
    a[x]++;
  }
  for(i=1;i<31;i++){
    if(!a[i])
      printf("%d\n",i);
  }
  return 0;
}
