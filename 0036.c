#include<stdio.h>

int mat[8][8];

int pos(int i, int j){
  if(i<8&&j<8&&mat[i][j])
    return 1;
  else
    return 0;
}

int main(){
  int i,j,c;

  for(;;){
    for(i=0;i<8;i++){
      for(j=0;j<8;j++){
	for(;;){
	  c=getchar();
	  if(c>='0'&&c<='9'){
	    mat[i][j]=c-'0';
	    break;
	  }
	  else if(c==EOF)
	    return 0;
	}
      }
    }
    
    for(i=0;i<8;i++){
      for(j=0;j<8;j++){
	if(pos(i,j)){
	  if(      pos(i,j+1) && pos(i+1,j)   && pos(i+1,j+1) )
	    puts("A");
	  else if( pos(i+1,j) && pos(i+2,j)   && pos(i+3,j)   )
	    puts("B");
	  else if( pos(i,j+1) && pos(i,j+2)   && pos(i,j+3)   )
	    puts("C");
	  else if( pos(i+1,j) && pos(i+1,j-1) && pos(i+2,j-1) )
	    puts("D");
	  else if( pos(i,j+1) && pos(i+1,j+1) && pos(i+1,j+2) )
	    puts("E");
	  else if( pos(i+1,j) && pos(i+1,j+1) && pos(i+2,j+1) )
	    puts("F");
	  else if( pos(i,j+1) && pos(i+1,j)   && pos(i+1,j-1) )
	    puts("G");
	}
      }
    }
  }
}
