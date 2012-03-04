#include<stdio.h>

int main(){
  int n,x;  //input
  int i,j,k;  //loop
  int c;

  while(1){
    scanf("%d%d",&n,&x);
    if(n==0&&x==0){
      break;
    }
    c=0;
    
    for(i=1;i<=n;i++){
      for(j=i+1;j<=n;j++){
	for(k=j+1;k<=n;k++){
	  if(i+j+k==x){
	    c++;
	  }
	}
      }
    }
    printf("%d\n",c);
  }
  return 0;
}

