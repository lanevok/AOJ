#include<stdio.h>

int main(){
  int n,i,j,x;
  int a[100];
  int mat[10][7]={
    //g,f,e,d,c,b,a
    {0,1,1,1,1,1,1},  // 0
    {0,0,0,0,1,1,0},  // 1
    {1,0,1,1,0,1,1},  // 2
    {1,0,0,1,1,1,1},  // 3
    {1,1,0,0,1,1,0},  // 4
    {1,1,0,1,1,0,1},  // 5
    {1,1,1,1,1,0,1},  // 6
    {0,1,0,0,1,1,1},  // 7
    {1,1,1,1,1,1,1},  // 8
    {1,1,0,1,1,1,1}}; // 9
  
  for(;;){
    int tmp[7]={};

    scanf("%d",&n);

    if(n==-1)
      break;

    for(i=0;i<n;i++)
      scanf("%d",&a[i]);

    for(i=0;i<n;i++){
      x=a[i];
      for(j=0;j<7;j++){
	if(tmp[j]==mat[x][j])
	  printf("0");
	else{
	  printf("1");
	  if(tmp[j])
	    tmp[j]=0;
	  else
	    tmp[j]=1;
	}
      }
      puts("");
    }
  }
  return 0;
}
