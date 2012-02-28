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
  char a[1000],b[1000];
  int c[1000],d[1000];
  int e[1000];
  char f[1000];
  int i,j,n;
  int a_len,b_len,max_len;
  int of_flag=0,st_flag=0,st_flag2=0;
  int s,t,u,ee;
  
  scanf("%d",&n);
  for(j=0;j<n;j++){

    //init
    for(i=0;i<1000;i++){
      a[i]=0;
      b[i]=0;
      c[i]=0;
      d[i]=0;
      e[i]=0;
      f[i]=0;
    }
    ee=0;

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
	  f[ee]=e[t]+'0';
	  ee++;
	}
	f[ee]=0;
	printf("%s\n",f);
      }
      st_flag2=0;
    }
  }
  return(0);
}
