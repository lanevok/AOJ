#include<stdio.h>

//main
int main(){
  int i,j,n,c,t,s,e=0;
  int r[10][10]; //set

  //loop
  while(1){
    scanf("%d",&n); //input
    if(n==0){  //error
      break;
    }
    e++;

    //init
    for(i=0;i<10;i++){
      for(j=0;j<10;j++){
	r[i][j]=0;
      }
    }
    c=1;

    //main algorhythm start
    i=-1;
    j=0;
    
    if(n==1){
      printf("Case %d:\n",e);
      printf("%3d\n",1);
    }
    else{  //n>=2
      while(1){  //left up loop
	if(i==n-1){
	  //	  printf("part1\n");
	  break;
	}
	i++;
	r[i][j]=c++;
	//	printf("set:[%d][%d]=%d\n",i,j,c-1); //check
	
	s=i;
	for(t=0;t<s;t++){
	  j++;
	  i--;
	  r[i][j]=c++;
	  //	  printf("set:[%d][%d]=%d\n",i,j,c-1); //check
	}
	if(j==n-1){
	  //	  printf("part2\n");
	  break;
	}
	j++;
	r[i][j]=c++;
	//	printf("set:[%d][%d]=%d\n",i,j,c-1); //check
	s=j;
	for(t=0;t<s;t++){
	  j--;
	  i++;
	  r[i][j]=c++;
	  //	  printf("set:[%d][%d]=%d\n",i,j,c-1); //check
	}
      }
      
      //      printf("left up loop broke i=%d j=%d c=%d\n",i,j,c);
      
      if(i==0){  //right down prepare
	i++;
	r[i][j]=c++;
	//	printf("set:[%d][%d]=%d\n",i,j,c-1); //check
	s=n-i-1;
	for(t=0;t<s;t++){
	  i++;
	  j--;
	  r[i][j]=c++;
	  //	  printf("set:[%d][%d]=%d\n",i,j,c-1); //check
	}
      }
      while(1){  //right down loop
	
	j++;
	r[i][j]=c++;
	//	printf("set:[%d][%d]=%d\n",i,j,c-1); //check
	if(c-1==n*n){
	  //	  printf("part3\n");
	  break;
	}
	
	
	s=n-j-1;
	for(t=0;t<s;t++){
	  i--;
	  j++;
	  r[i][j]=c++;
	  //	  printf("set:[%d][%d]=%d\n",i,j,c-1); //check
	}
	
	i++;
	r[i][j]=c++;
	//	printf("set:[%d][%d]=%d\n",i,j,c-1); //check
	if(c-1==n*n){
	  //	  printf("part4\n");
	  break;
	}
	s=n-i-1;
	for(t=0;t<s;t++){
	  i++;
	  j--;
	  r[i][j]=c++;
	  //	  printf("set:[%d][%d]=%d\n",i,j,c-1); //check
	}
      }
      
      //main alogorhythm end
      
      
      //output
      printf("Case %d:\n",e);
      for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	  printf("%3d",r[i][j]);
	}
	printf("\n");
      }
    }
  }
  return 0;
}
