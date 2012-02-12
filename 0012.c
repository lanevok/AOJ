#include<stdio.h>
#include<math.h>

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

double surface(double a,double b,double c){
  double s;

  s=(a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c);
  s=sqrt(s);
  s=s/4;
  return(s);
}

int main(void){
  double x1,y1,x2,y2,x3,y3,xp,yp;
  double len_12,len_13,len_23,len_1p,len_2p,len_3p;
  double s1,s2,s3,sc;
  double s;
  
  while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)!=EOF){
    len_12=length(x1,y1,x2,y2);
    len_13=length(x1,y1,x3,y3);
    len_23=length(x2,y2,x3,y3);
    len_1p=length(x1,y1,xp,yp);
    len_2p=length(x2,y2,xp,yp);
    len_3p=length(x3,y3,xp,yp);
    s=surface(len_12,len_13,len_23);
    s1=surface(len_12,len_1p,len_2p);
    s2=surface(len_13,len_1p,len_3p);
    s3=surface(len_23,len_2p,len_3p);
    sc=s1+s2+s3;
    if((s-sc)*(s-sc)<0.00001){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return(0);
}
