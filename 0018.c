#include<stdio.h>
int main(){
  int a[5];
  int i,j,t,c;
  scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
  for(i=0;i<5;i++){
    t=i;
    for(j=i+1;j<5;j++){
      if(a[t]>a[j]){
	t=j;
      }
    }
    c=a[i];
    a[i]=a[t];
    a[t]=c;
  }
  printf("%d %d %d %d %d\n",a[4],a[3],a[2],a[1],a[0]);
  return 0;
}
