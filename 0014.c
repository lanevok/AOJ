#include<stdio.h>

int main(){
  int d,s,i,j,y,y2;
  
  while(scanf("%d",&d)!=EOF){
    j=600/d;
    s=0;
    y=0;
    for(i=0;i<j-1;i++){
      y=y+d;
      y2=y*y;
      s=s+d*y2;
    }
    printf("%d\n",s);
  }
  return(0);
}
