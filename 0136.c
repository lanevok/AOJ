#include<stdio.h>

int main(){
  int n,i,j;
  float x;
  int h[6]={};
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%f",&x);
    
    if(x<165)
      h[0]++;
    else if(x<170)
      h[1]++;
    else if(x<175)
      h[2]++;
    else if(x<180)
      h[3]++;
    else if(x<185)
      h[4]++;
    else
      h[5]++;
  }
  
  //output
  for(i=1;i<=6;i++){
    printf("%d:",i);
    for(j=0;j<h[i-1];j++)
      printf("*");
    puts("");
  }
  return 0;
}
