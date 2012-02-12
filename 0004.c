#include<stdio.h>

int main(void){
  double a,b,c,d,e,f;
  double x,y,z,x2,y2;
  double i,j,m;
  
  while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
    if(a!=0&&b!=0&&c!=0&&d!=0&&e!=0&&f!=0){
      x=0;
      y=0;
      z=0;
      i=0;
      j=0;
      m=0;
      printf("%f %f %f %f %f %f %f %f %f %f %f %f %f %f\n",a,b,c,d,f,e,x,y,z,x2,y2,i,j,m);
      m=a*d;
      if(i=m/a<0)
	i=0;
      else
	i=m/a;
      j=m/d;
      a=a*i;
      b=b*i;
      c=c*i;
      d=d*j;
      e=e*j;
      f=f*j;
      printf("%f %f %f %f %f %f %f %f %f %f %f %f %f %f\n",a,b,c,d,f,e,x,y,z,x2,y2,i,j,m);
      if(b>e){
	y=b-e;
	z=c-f;
      }
      else{
	y=e-b;
	z=f-c;
      }
      y=z/y;
      x=c-b*y;
      x=x/a;
      if(x==-0.0)
	x2=0;
      else
	x2=x;
      if(x==-0.0)
	y2=0;
      else
	y2=y;
      printf("%.3f %.3f\n",x2,y2);
    }
    else if(

    return(0);
  }
