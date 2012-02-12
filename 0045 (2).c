#include<stdio.h>

int a=1,b=0,c=0;
int xa,xb,xc;

void change(){
  if(a){
    if(xa){
      if(xb){
	a=0;
	b=1;
      }
      else if(xc){
	a=0;
	c=1;
      }
    }
  }
  else if(b){
    if(xb){
      if(xa){
	b=0;
	a=1;
      }
      else if(xc){
	b=0;
	c=1;
      }
    }
  }
  else if(c){
    if(xc){
      if(xa){
	c=0;
	a=1;
      }
      else if(xb){
	c=0;
	b=1;
      }
    }
  }
} 

int main(void){
  char x,y;
  
  while(scanf("%c,%c",&x,&y)!=EOF){
    xa=(xb=(xc=0));
    if(x=='A')
      xa=1;
    else if(x=='B')
      xb=1;
    else if(x=='C')
      xc=1;
    if(y=='A')
      xa=1;
    else if(y=='B')
      xb=1;
    else if(y=='C')
      xc=1;
    //    printf("{%d %d %d} (%d %d %d)",xa,xb,xc,a,b,c);
    change();
    //    printf("-(%d %d %d)\n",a,b,c);
  }
  if(a)
    puts("A");
  else if(b)
    puts("B");
  else
    puts("C");
  return 0;
}
