#include<stdio.h>

int main(void){
  int ice[10];
  int n,i,d;

  for(;;){
    scanf("%d",&n);
    if(n==0)
      break;
    
    // Init
    for(i=0;i<10;i++)
      ice[i]=0;

    // Counting
    for(i=0;i<n;i++){
      scanf("%d",&d);
      ice[d]++;
    }

    // Output
    for(i=0;i<10;i++){
      if(ice[i]==0)
	puts("-");
      else{
	int t=ice[i];
	int j;

	for(j=0;j<t;j++)
	  printf("*");
	puts("");
      }
    }
  }
  return 0;
}
