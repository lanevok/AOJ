#include<stdio.h>

int main(void){
  int i;
  int best[3]={0,0,0};
  int data[10];
  for(i=0;i<10;i++){
    scanf("%d",&data[i]);
  }
  for(i=0;i<10;i++){
    if(best[0]<=data[i]){
      best[2]=best[1];
      best[1]=best[0];
      best[0]=data[i];
    }
    else if(best[1]<=data[i]){
      best[2]=best[1];
      best[1]=data[i];
    }
    else if(best[2]<=data[i]){
      best[2]=data[i];
    }
  }
  printf("%d\n%d\n%d\n",best[0],best[1],best[2]);
  return(0);
}
  
