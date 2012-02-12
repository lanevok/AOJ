#include<stdio.h>
#include<stdlib.h>

int cnt;
int g_sum;

void solve(int n, int s, int t){
  int i;
  
  //  printf("Called:(%d,%d,%d)\n",n,s,t);
  
  if(s>10)
    s=10;

  if(t>g_sum)
    return;

  if(n==0){
    if(g_sum==t)
      cnt++;
    return;
  }
  else{
    for(i=s-1;i>=n-1;i--){
      t+=i;
      solve(n-1,i,t);
      t-=i;
    }
  }
} 

int main(void){
  int n,s;
  
  for(;;){
    cnt=0;
    scanf("%d%d",&n,&s);
    if(n==0&&s==0)
      break;
    
    g_sum=s;

    if(s<0)
      puts("0");

    else if(n<=0)
      puts("0");

    else if(n==1){
      if(s<10)
	puts("1");
      else
	puts("0");
    }
    else if(n>=2&&s==0)
      puts("0");
    else{
      solve(n,s,0);
      if(n==2)
	cnt++;
      printf("%d\n",cnt);
    }
  }
  return 0;
}
