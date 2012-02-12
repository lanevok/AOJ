#include<stdio.h>
#include<math.h>

int main(){
  int t[99];
  int r[99];
  int sum=0;
  int i=0;
  double n=0;

  while(scanf("%d,%d",&t[i],&r[i])!=EOF){
    sum=sum+t[i]*r[i];
    n=n+r[i++];
  }
  printf("%d\n%.0f\n",sum,round(n/i));
  return 0;
}
