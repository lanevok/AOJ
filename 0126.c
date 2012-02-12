#include<stdio.h>

#define M 9

int main(void){
  int box[M][M];
  int flg[M][M];
  int g,h,i,j,k,l,m,n;

  scanf("%d",&g);
  for(h=0;h<g;h++){
    for(i=0;i<M;i++){
      for(j=0;j<M;j++){
	scanf("%d",&box[i][j]);
	flg[i][j]=0;
      }
    }
    
    for(i=0;i<M;i++){
      for(j=0;j<M;j++){
	for(k=0;k<M;k++){
	  //printf("(%d,%d,%d)\n",i,j,k);
	  if(!(j==k)){
	    //printf("[%d,%d]",i,k);
	    if(box[i][j]==box[i][k]){
	      flg[i][j]++;
	      flg[i][k]++;
	    }
	  }
	  if(!(i==k)){
	    //printf("[%d,%d]\n",k,j);
	    if(box[i][j]==box[k][j]){
	      flg[i][j]++;
	      flg[k][j]++;
	    }
	  }
	}
      }
    }
    //printf("\n----------\n");
    for(i=0;i<M;i++){
      for(j=0;j<M;j++){
	if(i<3){
	  k=0;
	}
	else if(i<6){
	  k=3;
	}
	else{
	  k=6;
	}
	if(j<3){
	  l=0;
	}
	else if(j<6){
	  l=3;
	}
	else{
	  l=6;
	}
	for(m=k;m<k+3;m++){
	  for(n=l;n<l+3;n++){
	    if(i!=m||j!=n){
	      if(box[i][j]==box[m][n]){
		flg[i][j]++;
		flg[m][n]++;
	      }
	    }
	  }
	}
      }
    }

    for(i=0;i<M;i++){
      for(j=0;j<M;j++){
	if(flg[i][j]>0){
	  printf("*");
	}
	else{
	  printf(" ");
	}
	printf("%d",box[i][j]);
      }
      /*
      printf("   ");
      for(j=0;j<M;j++){
	printf("%d",flg[i][j]);
      }
      */
      printf("\n");
    }
    if(h+1!=g){
      printf("\n");
    }
  }
  return 0;
}
