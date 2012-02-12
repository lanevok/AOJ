//AOJ0015:Wrong Answer

#include<stdio.h>
#include<string.h>

int up=0;

int calculate(int x, int y){
  int temp;

  temp=up+x+y;
  up=temp/10;
  return temp%10;
}

int main(){
  char a[81],b[81];
  int c[80],d[80];
  int e[80];
  int i,j,n;
  int a_len,b_len,max_len;
  int of_flag=0,st_flag=0,st_flag2=0;
  int s,t,u;
  
  scanf("%d",&n);
  for(j=0;j<n;j++){
    scanf("%s",a);
    scanf("%s",b);
    
    a_len=strlen(a);
    b_len=strlen(b);

    up=0;
    of_flag=0;

    if(a_len>80||b_len>80){
      printf("overflow\n");
      of_flag=1;
    }
    
    for(i=0;i<a_len;i++){
      c[80-a_len+i]=a[i]-'0';
    }
    for(i=0;i<80-a_len;i++){
      c[i]=0;
    }
    for(i=0;i<b_len;i++){
      d[80-b_len+i]=b[i]-'0';
    }
    for(i=0;i<80-b_len;i++){
      d[i]=0;
    }
    for(i=0;i<80;i++){
      e[i]=0;
    }

    if(a_len>b_len){
      max_len=a_len;
    }
    else{
      max_len=b_len;
    }

    if(of_flag!=1){
      st_flag=0;

      if(max_len==80){
	u=0;
      }
      else{
	u=79-max_len;
      }

      for(i=79;i>=u;i--){
	e[i]=calculate(c[i],d[i]);
	if(i==0 && up!=0){
	  printf("overflow\n");
	  st_flag2=1;
	  break;
	}
      }

      if(st_flag2!=1){
	s=0;
	while(e[s]==0){
	  s++;
	  if(s==79){
	    break;
	  }
	}
	for(t=s;t<80;t++){
	  printf("%d",e[t]);
	}
	printf("\n");
      }
      st_flag2=0;

    }
  }
  return(0);
}
