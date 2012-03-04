#include<stdio.h>
int main(){
  int a[1000];
  int i,j,t,c,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++){
    t=i;
    for(j=i+1;j<n;j++){
      if(a[t]>a[j]){
	t=j;
      }
    }
    c=a[i];
    a[i]=a[t];
    a[t]=c;
  }
  for(i=0;i<n-1;i++)
    printf("%d ",a[i]);
  printf("%d\n",a[n-1]);
  return 0;
}
