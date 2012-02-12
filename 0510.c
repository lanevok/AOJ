#include<stdio.h>

int main(){
  int a[4],b[4];
  int s=0,t=0;
  int i;

  for(i=0;i<4;i++){
    scanf("%d",&a[i]);
    s+=a[i];
  }
  for(i=0;i<4;i++){
    scanf("%d",&b[i]);
    t+=b[i];
  }
  if(s>t)
    printf("%d\n",s);
  else
    printf("%d\n",t);
  return 0;
}
