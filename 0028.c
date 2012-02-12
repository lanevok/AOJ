#include<stdio.h>

int main(){
  int a[100]={};
  int x,i=0;
  int s=0;

  while(scanf("%d",&x)!=EOF){
    for(i=0;i<x;i++);
    a[i]++;
  }
  for(i=0;i<100;i++){
    if(s<a[i])
      s=a[i];
  }
  for(i=0;i<100;i++){
    if(s==a[i])
      printf("%d\n",i);
  }
  return 0;
}
