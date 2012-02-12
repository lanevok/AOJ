#include<stdio.h>

int main(){
  int a[11][11]={};
  int i,j,n,s,t;

  for(;;){
    scanf("%d",&n);
    if(!n)
      break;
    t=0;

    for(i=0;i<n;i++){
      s=0;
      for(j=0;j<n;j++){
	scanf("%d",&a[i][j]);
	s+=a[i][j];
      }
      a[i][n]=s;
      t+=s;
    }
    a[n][n]=t;
    for(j=0;j<n;j++){
      s=0;
      for(i=0;i<n;i++){
	s+=a[i][j];
      }
      a[n][j]=s;
    }
    for(i=0;i<=n;i++){
      for(j=0;j<=n;j++){
	printf("%5d",a[i][j]);
      }
      puts("");
    }
  }
  return 0;
}

    
