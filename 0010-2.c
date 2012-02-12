#include<stdio.h>
#include<math.h>


//global variable (output)
double xp,yp;


//length (2points)
double length(double x1,double y1,double x2,double y2){
  double a,b,c;
  
  if(x2>x1){  //x (max-min)
    a=x2-x1;
  }
  else{
    a=x1-x2;
  }
  if(y2>y1){  //y (max-min)
    b=y2-y1;
  }
  else{
    b=y1-y2;
  }
  c=a*a+b*b;  //pythagorean theorem
  c=sqrt(c);  //square root (math.h)
  return(c);
}


//radius (3lines)
//r = abc / sqrt{(a+b+c)(-a+b+c)(a-b+c)(a+b-c)}
double radius(double a,double b,double c){
  double r,temp;
  double numerator,denominator;

  numerator=a*b*c;
  temp=(a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c);
  denominator=sqrt(temp);
  r=numerator/denominator;
  return(r);
}


//center coordinates (3points)
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


//main
int main(){
  double x1,y1,x2,y2,x3,y3;  //input
  double r;                  //radius
  double a,b,c;              //triangle line length
  int n,i;

  scanf("%d",&n);       //data set
  for(i=0;i<n;i++){
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);  //input scan
    a=length(x1,y1,x2,y2);                //length (1 to 2)
    b=length(x1,y1,x3,y3);                //length (1 to 3)
    c=length(x2,y2,x3,y3);                //length (2 to 3)
    r=radius(a,b,c);                      //radius (3lines)
    coordinates(x1,y1,x2,y2,x3,y3);       //center coordinates (3points)
    printf("%.3f %.3f %.3f\n",xp,yp,r);   //result output
  }
  return(0);
}
