#include<stdio.h>

int main(){
  int a[100];
  int i,j,t,c,n;

  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=n-1;0<i;i--)
    printf("%d ",a[i]);
  printf("%d\n",a[0]);

  return 0;
}
