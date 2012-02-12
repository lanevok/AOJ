#include<stdio.h>

int main(void){
  int n;
  int i,j;
  int cnt1=0,cnt2=0;

  while(scanf("%d",&n)!=EOF){
    for(i=2;i<n;i=i+2){
      for(j=3;j<i;j=j+2){
	//	printf("i=%d j=%d\n",i,j);
	if(i%j==0){
	  cnt1++;
	  break;
	}
      }
      if(cnt1==0){
	//	printf(">>>>>cnt:%d\n",i);
	cnt2++;
      }
      cnt1=0;
      if(i==2){
	i--;
      }
    }
    printf("%d\n",cnt2);
    cnt2=0;
  }
  return(0);
}

// 500000 - 15.44
