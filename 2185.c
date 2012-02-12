#include<stdio.h>

int main(void){
  int x,y,w,h;
  int d,n,i,j;
  int ax,ay;

  scanf("%d",&d);
  for(j=0;j<d;j++){
    int cnt=0;

    scanf("%d%d%d%d",&x,&y,&w,&h);
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d%d",&ax,&ay);
      if( x<=ax && ax<=x+w && y<=ay && ay<= y+h )
	cnt++;
    }
    printf("%d\n",cnt);
  }
  return 0;
}

      
