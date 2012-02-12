#include<stdio.h>

int main(){
  int a[4],b[4];
  int i,j,h,v;

  while(scanf("%d",&a[0])!=EOF){
    for(i=1;i<4;i++)
      scanf("%d",&a[i]);
    for(i=0;i<4;i++)
      scanf("%d",&b[i]);
    h=0; v=0;
    for(i=0;i<4;i++){
      if(a[i]==b[i])
	h++;
    }
    for(i=0;i<4;i++){
      for(j=0;j<4;j++){
	if(a[i]==b[j])
	  v++;
      }
    }
    v=v-h;
    printf("%d %d\n",h,v);
  }
  return 0;
}
