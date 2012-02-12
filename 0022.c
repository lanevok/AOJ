#include<stdio.h>

int main(){
  int i,n,m,c,j;
  int a[5002];
  
  for(;;){
    scanf("%d",&n);
    if(n==0){
      break;
    }
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    m=-100001;
    for(i=0;i<n;i++){
      c=0;
      for(j=i;j<n;j++){
	c=c+a[j];
	if(c>m){
	  m=c;
	}
      }
    }
    printf("%d\n",m);
  }
  return 0;
}
