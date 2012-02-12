#include<stdio.h>

int main(){
  int n;
  unsigned long long int r=1;
  
  scanf("%d",&n);
  while(n){
    r=r*n;
    n--;
  }
  printf("%lld\n",r);
  return 0;
}
