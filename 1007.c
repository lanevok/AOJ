#include<stdio.h>

//main
int main(){
  int i,j,n,c,t,s,e=0;
  int r[100][100]; //set

  //loop
  while(1){
    scanf("%d",&n); //input
    if(n==0){  //error
      break;
    }
    e++;

    //init
    for(i=0;i<100;i++){
      for(j=0;j<100;j++){
	r[i][j]=0;
      }
    }
    c=1;

    if(n==1){
      printf("Case %d:\n",e);
      printf("%3d\n",1);
    }
    
    
    //main algorhythm start
    
    else{  //n>=2
      i=-1;
      j=0;
      while(1){  //left up loop
	if(i==n-1){
	  break;
	}
	i++;
	r[i][j]=c++;
	s=i;
	for(t=0;t<s;t++){
	  j++;
	  i--;
	  r[i][j]=c++;
	}
	if(j==n-1){
	  break;
	}
	j++;
	r[i][j]=c++;
	s=j;
	for(t=0;t<s;t++){
	  j--;
	  i++;
	  r[i][j]=c++;
	}
      }
      if(i==0){  //right down prepare
	i++;
	r[i][j]=c++;
	s=n-i-1;
	for(t=0;t<s;t++){
	  i++;
	  j--;
	  r[i][j]=c++;
	}
      }
      while(1){  //right down loop
	j++;
	r[i][j]=c++;
	if(c-1==n*n){
	  break;
	}
	s=n-j-1;
	for(t=0;t<s;t++){
	  i--;
	  j++;
	  r[i][j]=c++;
	}
	i++;
	r[i][j]=c++;
	if(c-1==n*n){
	  break;
	}
	s=n-i-1;
	for(t=0;t<s;t++){
	  i++;
	  j--;
	  r[i][j]=c++;
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
