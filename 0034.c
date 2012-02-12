#include<stdio.h>

int main(void){
  int a[11];
  int v1,v2;
  int x,i;
  double t,y;

  while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
	      a+1,a+2,a+3,a+4,a+5,
	      a+6,a+7,a+8,a+9,a+10,
	      &v1,&v2)!=EOF){
    x=0;
    for(i=1;i<11;i++)
      x+=a[i];
    v2=v1+v2;
    //    printf("%d %d %d\n",x,v2,v1);
    t=(double)x/v2;
    y=t*v1;
    //    printf("%f %f\n",t,y);
    for(i=1;i<11;i++){
      y-=a[i];
      if(y<=0)
	break;
    }
    printf("%d\n",i);
  }
  return 0;
}
