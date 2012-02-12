#include<stdio.h>

int f(unsigned long long int s){
  unsigned long long int r;
  
  if(s==0){
    return 1;
  }
  else{
    r=s*f(s-1);
    return r;
  }
}

int main(){
  int n;
  unsigned long long int r;
  
  scanf("%d",&n);
  r=f(n);
  printf("%lld\n",r);
  return 0;
}
