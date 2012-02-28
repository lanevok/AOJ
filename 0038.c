#include<stdio.h>

int main(void){
  int a[14];
  int b[5];
  int i;

  while(scanf("%d,%d,%d,%d,%d",b[0],b[1],b[2],b[3],b[4])!=EOF){
    for(i=0;i<14;i++)
      a[i]=0;
    for(i=0;i<5;i++)
      a[b[i]]++;
    
    for(i=0;i<14;i++){
      if(a[i]>=4){
	puts("four card");
	return 0;
      }
    }
    for(i=0;i<14;i++){
      if(a[i]>=3){
	for(j=0;j<14;j++){
	  if(i!=j&&a[i]>=2){
	    puts("full house");
	    return 0;
	  }
	}
      }
    }
    for(i=0;i<14;i++){
      if(a[i]&&a[i+1]&&
