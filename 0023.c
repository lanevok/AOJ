#include<stdio.h>
#include<math.h>

int main(void){
  double xa,ya,ra,xb,yb,rb;
  double x,y,d,ab_d;
  int n,i;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&ra,&xb,&yb,&rb);
    x=xb-xa;
    y=yb-ya;
    d=x*x+y*y;
    d=sqrt(d);
    
    //    printf("%f\n",d);

    if(d>ra+rb)
      puts("0");
    else if(d==ra+rb)
      puts("1");
    ab_d=ra-rb;
    if(ab_d<0)
      ab_d=-ab_d;
    //    printf("%f\n",ab_d);
    if(ab_d<d && d<ra+rb)
      puts("1");
    else if(d==ab_d)
      puts("1");
    else if(d<ab_d){
      if(ra>rb)
	puts("2");
      else
	puts("-2");
    }
  }
  return 0;
}
