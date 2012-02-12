#include<stdio.h>

int main(){
  int n,i;
  double x1,y1,x2,y2,x3,y3,x4,y4;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    x2=x2-x1;
    y2=y2-y1;
    x4=x4-x3;
    y4=y4-y3;
    if(x2==0||x4==0){
      if(x2==0&&x4==0){
	printf("YES\n");
      }
      else{
	printf("NO\n");
      }
    }
    else{
      if(y2/x2==y4/x4){
	printf("YES\n");
      }
      else{
	printf("NO\n");
      }
    }
  }
  return 0;
}
