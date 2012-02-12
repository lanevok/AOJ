#include<stdio.h>

int main(){
  int m,n,l,i,x,f,y;

  for(;;){
    scanf("%d",&l);
    if(l==0)
      break;
    x=0;
    f=1;

    for(i=0;i<12;i++){
      scanf("%d%d",&m,&n);
      x += m-n;
      if(f){
	if(x>=l){
	  y=i+1;
	  f=0;
	}
      }
    }
    if(f)
      printf("NA\n");
    else
      printf("%d\n",y);
  }
  return 0;
}
