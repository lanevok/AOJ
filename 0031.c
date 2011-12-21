//Presentation Error

#include<stdio.h>

int main(){
  int O[10]={512,256,128,64,32,16,8,4,2,1};
  int g,i,m;
  int flg[10];
  
  while(scanf("%d",&g)!=EOF){
    for(i=0;i<10;i++)
      flg[i]=0;
    m=g;
    for(i=0;i<10;i++){
      if(!m)
	break;
      else{
	if(O[i]<=m){
	  flg[i]++;
	  m=m-O[i];
	}
      }
    }
    for(i=9;i>=0;i--){
      if(flg[i])
	printf("%d ",O[i]);
    }
    printf("\n");
  }
  return 0;
}
