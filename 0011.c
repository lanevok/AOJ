#include<stdio.h>

int main(){
  int x[31];
  int w,n,a,b,temp,i;
  
  scanf("%d",&w);
  for(i=1;i<=w;i++){
    x[i]=i;
  }
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d,%d",&a,&b);
    temp=x[a];
    x[a]=x[b];
    x[b]=temp;
  }
  for(i=1;i<=w;i++){
    printf("%d\n",x[i]);
  }
  return 0;
}
