#include<stdio.h>

int main(void){
  int n,max,min,tmp,i,j;
  int s[5];

  for(;;){
    scanf("%d",&n);
    if(n==0)
      break;

    max=0;
    min=500;
    for(i=0;i<n;i++){
      tmp=0;
      for(j=0;j<5;j++){
	scanf("%d",&s[j]);
	tmp+=s[j];
      }
      if(tmp>max)
	max=tmp;
      if(tmp<min)
	min=tmp;
    }
    printf("%d %d\n",max,min);
  }
  return 0;
}
