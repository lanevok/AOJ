#include<stdio.h>
#include<string.h>

int main(){
  int c[4][13];
  char m1[3];
  int num,m2;
  int i,j,n;
  
  scanf("%d",&n);
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      c[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%s%d",m1,&num);
    if(strcmp(m1,"S")==0)
      m2=0;
    else if(strcmp(m1,"H")==0)
      m2=1;
    else if(strcmp(m1,"C")==0)
      m2=2;
    else if(strcmp(m1,"D")==0)
      m2=3;
    c[m2][num-1]=1;
  }
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if(c[i][j]==0){
	if(i==0){
	  printf("S %d\n",j+1);
	}
	else if(i==1){
	  printf("H %d\n",j+1);
	}
	else if(i==2){
	  printf("C %d\n",j+1);
	}
	else if(i==3){
	  printf("D %d\n",j+1);
	}
      }
    }
  }
  return 0;
}
