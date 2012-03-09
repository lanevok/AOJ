#include<stdio.h>
#include<string.h>

void five(int h, int a){  // h=height , a=number
  
  if( (h==1&&a<=4) || (h==2&&a>=5) )
    printf("*");
  else
    printf(" ");
}

void ball(int h, int a){
  
  if(a==h-1||a==h+4)
    printf(" ");
  else
    printf("*");
}

int main(void){
  char num1[7];
  int num2[5];
  int i,j,f=0,len;
  
  while(scanf("%s",num1)!=EOF){  // scan
    len=strlen(num1);  // length

    for(i=0;i<5-len;i++)  // left zero
      num2[i]=0;
    j=0;
    for(i=5-len;i<5;i++)  // char->int copy
      num2[i]=num1[j++]-'0';

    if(f)
      puts("");  // data set \n

    for(j=1;j<=2;j++){  // j=1,2
      for(i=0;i<5;i++){
	five(j,num2[i]);
      }
      puts("");
    }
    
    puts("=====");
    
    for(j=1;j<=5;j++){  // j=1,2, ... ,5
      for(i=0;i<5;i++){
	ball(j,num2[i]);
      }
      puts("");
    }

    f=1;
  }
  return 0;
}
