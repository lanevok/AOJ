#include<stdio.h>
#include<stdlib.h>

int t[11];
int cnt;
int n,s;

int sum(int k){
  int i,s=0;

  for(i=0;i<k;i++)
    s+=t[i];
  return s;
}

void backtrack(int i,int k){

  if(i==10){
    if(k==n){
      if(s==sum(k))
	cnt++;
    }
    return;
  }
  else{
    backtrack(i+1,k);
    t[k]=i;
    backtrack(i+1,k+1);
  }
}

int main(void){
  
  for(;;){
    scanf("%d%d",&n,&s);
    if(n==0&&s==0)
      break;
    
    if(s<0||45<s||n<1)
      puts("0");
    else{
      cnt=0;
      backtrack(0,0);
      printf("%d\n",cnt);
    }    
  }
  return 0;
}
