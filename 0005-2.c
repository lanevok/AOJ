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
      //      printf("for: %.3f %.3f %d\n",a,max,i);
      a=max/i;
      b=a;
      //      printf("ch1: %.3f %d\n",a,b);
      if(b-a==0){
	//       	printf("ch1.5: %.3f %d %.3f %d %.3f\n",a,b,c,d,min);
	//	if(min>a){
	  c=min/a;
	  //	}
	//	else{
	//	  c=a/min;
	//	}
	d=c;
	//	printf("ch2: %.3f %d %.3f %d\n",a,b,c,d);
	if(d-c==0 && a==b){
	  //	  printf("ch3: %.3f %d %.3f %d\n",a,b,c,d);
	  result=a;
	  printf("%d\n",result);
	  flag++;
	  break;
	}
	else{
	  //	  printf("sp:\n");
	  if(a*min==max && i!=1){
	    if(a<min){
	      result=a;
	    }
	    else{
	      result=min;
	    }
	    printf("sp:%d\n",result);
	    flag++;
	  }
	}
	//	printf("a");
      }
      //      printf("b");
    }
    //    printf("c");
    if(flag==0){
      result=1;
      printf("%d\n",result);
    }
    x2=x;
    y2=y;
    printf("x=%d y=%d result=%d\n",x2,y2,result);
    printf("lcm:%d\n",x2*y2/result);
    printf("next...\n");
  }
 
  return(0);
}
