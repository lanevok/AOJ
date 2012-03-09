#include<stdio.h>

int a[10];
int len,i;

int lsb(int num){
  return num%10;
}

int mix(){

  if(len==1)
    return 0;
  
  for(i=0;i<len-1;i++)
    a[i]=lsb(a[i]+a[i+1]);
  
  len--;
  return 1;
}

int main(){
  int c,f;
  
  for(;;){
    for(i=0;i<10;i++){
      for(;;){
	c=getchar();
	if(c==EOF)
	  return 0;
	else if(c>='0'&&c<='9')
	  break;
      }
      a[i]=c-'0';
    }
    
    len=10;
    f=1;
    while(f)
      f=mix();
    
    printf("%d\n",a[0]);
  }
}
