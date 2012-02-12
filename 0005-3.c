#include<stdio.h>

int main(void){
  double x,y;
  int x2,y2;
  int i=2;
  double a,c;
  int b,d;
  double max,min;
  int result,flag;
  
  while(scanf("%lf%lf",&x,&y)!=EOF){
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
    x2=x;
    y2=y;
    printf("%d %d\n",result,x2/result*y2);
  }
  return(0);
}
