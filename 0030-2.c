#include<stdio.h>
#include<stdlib.h>

int t[11];
int cnt;
int n,s;
//int flg=0;

int sum(int k){
  int i,s=0;

  for(i=0;i<k;i++)
    s+=t[i];
  return s;
}

void backtrack(int i,int k){
  //  flg++;
  //  if(flg>20)
  //   exit(1);
  //  printf("Call:[%d,%d]\n",i,k);
  if(i==10){
    if(k==n){
      if(s==sum(k))
	cnt++;
    }
    //    puts("return");
    return;
  }
  else{
    backtrack(i+1,k);
    t[k]=i;
    backtrack(i+1,k+1);
  }
  //  puts("fall");
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
