#include<stdio.h>
int main(void){
  int a,b,c,d,n,r;
  while(scanf("%d",&n)!=EOF){
    r=0;
    for(a=0;a<10;a++){
      for(b=0;b<10;b++){
	for(c=0;c<10;c++){
	  for(d=0;d<10;d++){
	    if(a+b+c+d==n)
	      r++;
	  }
	}
      }
    }
    printf("%d\n",r);
  }
  return(0);
}
