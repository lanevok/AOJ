#include<stdio.h>
int main(){
  int a[3];
  int i,j,t,c;
  scanf("%d%d%d",&a[0],&a[1],&a[2]);
  for(i=0;i<3;i++){
    t=i;
    for(j=i+1;j<3;j++){
      if(a[t]>a[j]){
	t=j;
      }
    }
    c=a[i];
    a[i]=a[t];
    a[t]=c;
  }
  printf("%d %d %d\n",a[0],a[1],a[2]);
  return 0;
}
