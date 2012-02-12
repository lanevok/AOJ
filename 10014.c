#include<stdio.h>
int main(){
  int h,w,i,j,c;
  while(1){
    c=1;
    scanf("%d%d",&h,&w);
    if(h!=0 && w!=0){
      for(i=0;i<h;i++){
	for(j=0;j<w;j++){
	  if(c%2==1){
	    printf("#");
	  }
	  else{
	    printf(".");
	  }
	  c++;
	}
	if(i%2==0){
	  c=2;
	}
	else{
	  c=1;
	}
	printf("\n");
      }      
      printf("\n");
    }
    else{
      break;
    }
  }
  return 0;
}
