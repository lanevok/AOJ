#include<stdio.h>

#define M 10
#define SML 1
#define MID 2
#define BIG 3

//Array out of Exception (=0)
int aoe(int a, int b){
  if(a>=0&&b>=0&&a<=9&&b<=9)
    return 1;
  return 0;
}

int e,c;

int main(){
  int p[M][M]={};
  int x,y,s;

  while(scanf("%d,%d,%d",&x,&y,&s)!=EOF){
    if(s==BIG){
      if(aoe(x-2,y)) p[x-2][y]++;
      if(aoe(x+2,y)) p[x+2][y]++;
      if(aoe(x,y-2)) p[x][y-2]++;
      if(aoe(x,y+2)) p[x][y+2]++;
    }
    if(s!=SML){
      if(aoe(x-1,y-1)) p[x-1][y-1]++;
      if(aoe(x+1,y-1)) p[x+1][y-1]++;
      if(aoe(x-1,y+1)) p[x-1][y+1]++;
      if(aoe(x+1,y+1)) p[x+1][y+1]++;
    }
    p[x][y]++;
    if(aoe(x-1,y)) p[x-1][y]++;
    if(aoe(x+1,y)) p[x+1][y]++;
    if(aoe(x,y-1)) p[x][y-1]++;
    if(aoe(x,y+1)) p[x][y+1]++;
  }  
  for(x=0;x<M;x++){
    for(y=0;y<M;y++){
      if(!p[x][y])
	e++;
      if(c<p[x][y])
	c=p[x][y];
    }
  }
  printf("%d\n%d\n",e,c);
  return 0;
}
