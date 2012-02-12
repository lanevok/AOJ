#include<stdio.h>

typedef struct {
  double x;
  double y;
} p;

// 直線ABと線分CDの交差判定
// 返り値が正ならば交差していない
double convex(p a, p b, p c, p d){ 
  return ((a.x-b.x)*(c.y-a.y)+(a.y-b.y)*(a.x-c.x))*((a.x-b.x)*(d.y-a.y)+(a.y-b.y)*(a.x-d.x));
}

int main(void){
  p a,b,c,d;
  
  while(scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",
	      &a.x,&a.y,&b.x,&b.y,&c.x,&c.y,&d.x,&d.y)!=EOF){
    
    // どちらかが交差していない場合は凹四角形
    if(convex(a,c,b,d)>0||convex(b,d,a,c)>0)
      puts("NO");
    else
      puts("YES");
  }
  return 0;
}
