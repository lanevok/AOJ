#include<stdio.h>

int main(void){
  int t; //1-100
  int n; //2-100
  int h[100];
  int i,k;
  int tmp;
  
  scanf("%d",&t);
  for(k=0;k<t;k++){
    int up=0,down=0;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&h[i]);

    for(i=0;i<n-1;i++){
      if(h[i]<h[i+1]){ //up
	tmp=h[i+1]-h[i];
	if(tmp>up)
	  up=tmp;
      }
      else{ //down
	tmp=h[i]-h[i+1];
	if(tmp>down)
	  down=tmp;
      }
    }
    printf("%d %d\n",up,down);
  }
  return 0;
}
