#include<stdio.h>

int main(void){
  int x,y;
  int a,i;
  int max,min;
  int result,flag;
  
  while(scanf("%d%d",&x,&y)!=EOF){
    flag=0;
    if(x>y){
      max=x;
      min=y;
    }
    else{
      max=y;
      min=x;
    }
    for(i=1;i<=max;i++){
      if(max%i==0){
	a=max/i;
	if(min%a==0){
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
    printf("%d\n",result);
  }
  return(0);
}
