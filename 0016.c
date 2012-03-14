#include<stdio.h>
#include<math.h>

int main(){
  double x=0,y=0;
  int w,a,v=0;

  for(;;){
    scanf("%d,%d",&w,&a);
    if(w==0&&a==0)
      break;
    x+=w*sin(v/180.0*M_PI);
    y+=w*cos(v/180.0*M_PI);
    v+=a;
  }
  printf("%d\n%d\n",(int)x,(int)y);
  return 0;
}
