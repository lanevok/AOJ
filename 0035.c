#include<stdio.h>

typedef struct {
  double x;
  double y;
} p;

// ’¼üAB‚Æü•ªCD‚ÌŒð·”»’è
// •Ô‚è’l‚ª³‚È‚ç‚ÎŒð·‚µ‚Ä‚¢‚È‚¢
double convex(p a, p b, p c, p d){ 
  return ((a.x-b.x)*(c.y-a.y)+(a.y-b.y)*(a.x-c.x))*((a.x-b.x)*(d.y-a.y)+(a.y-b.y)*(a.x-d.x));
}

int main(void){
  p a,b,c,d;
  
  while(scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",
	      &a.x,&a.y,&b.x,&b.y,&c.x,&c.y,&d.x,&d.y)!=EOF){
    
    // ‚Ç‚¿‚ç‚©‚ªŒð·‚µ‚Ä‚¢‚È‚¢ê‡‚Í‰šŽlŠpŒ`
    if(convex(a,c,b,d)>0||convex(b,d,a,c)>0)
      puts("NO");
    else
      puts("YES");
  }
  return 0;
}
