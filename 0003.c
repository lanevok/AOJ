#include<stdio.h>

int main(void){
  int i,n,x=-1,y=-1,z=-1;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d %d",&x,&y,&z);
    if(z*z==x*x+y*y||y*y==x*x+z*z||x*x==y*y+z*z)
      printf("YES\n");
    else
      printf("NO\n");
  }
  return(0);
}
