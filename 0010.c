#include<stdio.h>
#include<math.h>

double xp,yp;

double length(double x1,double y1,double x2,double y2){
  double a,b,c;
  
  if(x2>x1){
    a=x2-x1;
  }
  else{
    a=x1-x2;
  }
  if(y2>y1){
    b=y2-y1;
  }
  else{
    b=y1-y2;
  }
  c=a*a+b*b;
  c=sqrt(c);
  return(c);
}

double radius(double a,double b,double c){
  double r,temp;
  double numerator,denominator;
  numerator=a*b*c;
  //  printf("num:%.4f\n",numerator);
  temp=(a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c);
  //  printf("temp:%.4f\n",temp);
  denominator=sqrt(temp);
  //  printf("den:%.4f\n",denominator);
  r=numerator/denominator;
  return(r);
}

coordinates(double x1,double y1,double x2,double y2,double x3,double y3){
  double x,y;
  double a1,b1,c1,a2,b2,c2;
  
  a1=2*(x2-x1);
  b1=2*(y2-y1);
  c1=(x1*x1)-(x2*x2)+(y1*y1)-(y2*y2);
  a2=2*(x3-x1);
  b2=2*(y3-y1);
  c2=(x1*x1)-(x3*x3)+(y1*y1)-(y3*y3);
 
  xp=((b1*c2)-(b2*c1))/((a1*b2)-(a2*b1));
  yp=((c1*a2)-(c2*a1))/((a1*b2)-(a2*b1));
}

int main(void){
  double x1,y1,x2,y2,x3,y3;
  double r;
  double a,b,c;
  int n,i;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    //   printf("input : %.4f %.4f %.4f %.4f %.4f %.4f\n",x1,y1,x2,y2,x3,y3);
    a=length(x1,y1,x2,y2);
    b=length(x1,y1,x3,y3);
    c=length(x2,y2,x3,y3);
    //    printf("length : %.4f %.4f %.4f\n",a,b,c);
    r=radius(a,b,c);
    //    printf("r : %.3f\n",r);  //result
    coordinates(x1,y1,x2,y2,x3,y3);
    //    printf("x=%.3f y=%.3f\n",xp,yp);    
    printf("%.3f %.3f %.3f\n",xp,yp,r);
  }
  return(0);
}
  
