#include<stdio.h>

int main(){
  int y[7];
  int i,n,d;

  for(;;){
    scanf("%d",&n);
    if(n==0)
      break;
    for(i=0;i<7;i++)
      y[i]=0;

    for(i=0;i<n;i++){
      scanf("%d",&d);
      
      d=d/10;
      if(d>=7)
	y[6]++;
      else
	y[d]++;
    }
    for(i=0;i<7;i++)
      printf("%d\n",y[i]);
  }
  return 0;
}
