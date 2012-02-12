#include<stdio.h>

int main(void){
  int x, y;
  double a, d;
  int b, c=0, e=0;
  int i=2;
  int gcd, lcm;
  
  while(scanf("%d%d", &x, &y)!=EOF){
    while(1){
      if(x>y){
	a=x/i;
      }
      else{
	a=y/i;
      }
      b=(int)a;
      if(a-b==0){
	d=x/b;
	e=(int)d;
	if(d-e==0){
	  printf("lcm=%d\n",b);
	}
      }
      i++;
    }
  }
  return(0);
}
