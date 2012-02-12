#include<stdio.h>

int main(){
  int a[5];
  int n,i,j;
  
  while(scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4])!=EOF){
    n=0;
    for(i=0;i<5;i++){
      for(j=i+1;j<5;j++){
	if(a[i]=a[j])
	  n++;
      }
    }
    
  }
  return 0;
}
