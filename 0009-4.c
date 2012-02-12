#include<stdio.h>

int main(void){
  int n;
  int i,j;
  int cnt1=0,cnt2=0;
  int pl[50000];
  int pll;

  pl[0]=2;
  pl[1]=3;

  while(scanf("%d",&n)!=EOF){
    pll=2;
    for(i=5;i<n;i=i+2){
      for(j=0;j<pll;j++){
	if(i%pl[j]==0){
	  cnt1++;
	  break;
	}
      }
      if(cnt1==0){
	//	printf(">>>>>cnt:%d\n",i);
	pl[pll]=i;
	pll++;
	cnt2++;
      }
      cnt1=0;
    }
    printf("%d\n",cnt2+2);
    cnt2=0;
  }
  return(0);
}

// 50000 - 2.66
