#include<stdio.h>

//main
int main(){
  int i,j,n,c,t,s;
  int r[10][10]; //set

  //loop
  while(1){
    scanf("%d",&n); //input
    if(n==0){  //error
      break;
    }

    //init
    for(i=0;i<10;i++){
      for(j=0;j<10;j++){
	r[i][j]=0;
      }
    }
    c=1;

    //main algorhythm start
    j=0;
    i=-1;
    
    while(1){  //left up loop
      if(i==n-1){
	printf("part1\n");
	break;
      }
      i++;
      r[i][j]=c++;
      printf("set:[%d][%d]=%d\n",i,j,c-1); //check
    
      s=i;
      for(t=0;t<s;t++){
	j++;
	i--;
	r[i][j]=c++;
	printf("set:[%d][%d]=%d\n",i,j,c-1); //check
      }
      j++;
      r[i][j]=c++;
      printf("set:[%d][%d]=%d\n",i,j,c-1); //check
      if(j==n-1){
	printf("part2\n");
	break;
      }
      s=j;
      for(t=0;t<s;t++){
	j--;
	i++;
	r[i][j]=c++;
	printf("set:[%d][%d]=%d\n",i,j,c-1); //check
      }
    }

    printf("left up loop broke\n");
    /*
    while(1){  //right down loop
      if(i==0){
	i++;
	r[i][j]=c++;
	printf("set:[%d][%d]=%d\n",i,j,c-1); //check
	s=n-i-1;
	for(t=0;t<s;t++){
	  j++;
	  i--;
	  r[i][j]=c++;
	  printf("set:[%d][%d]=%d\n",i,j,c-1); //check
	}
      }
      break;
    }
    */

    //main alogorhythm end


    //output
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
	printf("%3d",r[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}
