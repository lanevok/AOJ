#include<stdio.h>

int main(){
  double v,t,y,n;
  int ans;

  while(scanf("%lf",&v)!=EOF){
    t=v/9.8;
    t=t*t;
    y=4.9*t;
    n=y/5+1;
    n++;
    ans=n;
    printf("%d\n",ans);
  }
  return 0;
}
