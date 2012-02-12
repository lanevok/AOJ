#include<stdio.h>

int leap(int year){
  int result=0;  //leap=1

  if(year%4==0){
    result=1;
    if(year%100==0){
      result=0;
      if(year%400==0)
	result=1;
    }
  }
  if(result)
    printf("%d\n",year);

  return result;
}

int main(void){
  int a,b,i,f,t,k=0;

  while(scanf("%d%d",&a,&b)!=EOF){
    if(a==0&&b==0)
      break;
    if(k)
      puts("");

    f=1;
    for(i=a;i<=b;i++){
      t=leap(i);
      if(t==1)
	f=0;
    }
    if(f)
      puts("NA");
    k=1;
  }
  return 0;
}
