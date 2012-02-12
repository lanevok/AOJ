#include<stdio.h>

int main(void){
  double x,y;
  int x2,y2;
  int x3,y3;
  int i=2;
  double a,c;
  int b,d;
  double max,min;
  int result,flag;
  
  while(scanf("%d%d",&x3,&y3)!=EOF){
    x=x3;
    y=y3;
    flag=0;
    if(x>y){
      max=x;
      min=y;
    }
    else{
      max=y;
      min=x;
    }
    for(i=1;i<=min;i++){
      a=max/i;
      b=a;
      if(b-a==0){
	c=min/a;
	d=c;
	if(d-c==0 && a==b){
	  result=a;
	  flag++;
	  break;
	}
	else{
	  if(a*min==max && i!=1){
	    if(a<min)
	      result=a;
	    else
	      result=min;
	    flag++;
	  }
	}
      }
    }
    if(flag==0)
      result=1;
    printf("%d %d\n",result,x3/result*y3);
  }
  return(0);
}
