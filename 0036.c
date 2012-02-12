#include<stdio.h>

int aoe(int i, int j){
  if(i<8&&j<8)
    return 1;
  else
    return 0;
}

int main(){
  int mat[8][8];
  char c[][3]={"","A","B","C","D","E","F","G"};
  int i,j,x;

  while(scanf("%d",&mat[0][0])!=EOF){
    for(i=0;i<8;i++){
      for(j=0;j<8;j++){
	if(i!=0||j!=0){
	  scanf("%d",&mat[i][j]);
	}
      }
    }

    for(i=0;i<8;i++){
      for(j=0;j<8;j++){
	printf("%d",mat[i][j]);
      }
      printf("\n");
    }

    x=0;
    for(i=0;i<8;i++){
      for(j=0;j<8;j++){
	//A
	if(mat[i][j]){
	  if(aoe(i,j+1)){
	    if(mat[i][j+1]){
	      if(aoe(i+1,j)){
		if(mat[i+1][j]){
		  if(aoe(i+1,j+1)){
		    if(mat[i+1][j+1]){
		      x=1;
		      puts("(A)");
		    }}}}}}}
	//B
	else if(mat[i][j]){
	  if(aoe(i+1,j)){
	    if(mat[i+1][j]){
	      if(aoe(i+2,j)){
		if(mat[i+2][j]){
		  if(aoe(j+3,j)){
		    if(mat[i+3][j]){
		      x=2;
		      puts("(B)");
		    }}}}}}}
	//C
	else if(mat[i][j]){
	  if(aoe(i,j+1)){
	    if(mat[i][j+1]){
	      if(aoe(i,j+2)){
		if(mat[i][j+2]){
		  if(aoe(i,j+3)){
		    if(mat[i][j+3]){
		      x=3;
		      puts("(C)");
		    }}}}}}}
	//D
	else if(aoe(i,j+1)){
	  if(mat[i][j+1]){
	    if(aoe(i+1,j)){
	      if(mat[i+1][j]){
		if(aoe(i+1,j+1)){
		  if(mat[i+1][j+1]){
		    if(aoe(i+2,j)){
		      if(mat[i+2][j]){
			x=4;
			puts("(D)");
		      }}}}}}}}
	//E
	else if(mat[i][j]){
	  if(aoe(i,j+1)){
	    if(mat[i][j+1]){
	      if(aoe(i+1,j+1)){
		if(mat[i+1][j+1]){
		  if(aoe(i+1,j+2)){
		    if(mat[i+1][j+2]){
		      x=5;
		      puts("(E)");
		    }}}}}}}
	//F
	else if(mat[i][j]){
	  if(aoe(i+1,j)){
	    if(mat[i+1][j]){
	      if(aoe(i+1,j+1)){
		if(mat[i+1][j+1]){
		  if(aoe(i+2,j+1)){
		    if(mat[i+2][j+1]){
		      x=6;
		      puts("(F)");
		    }}}}}}}
	//G
	else if(aoe(i,j+1)){
	  if(mat[i][j+1]){
	    if(aoe(i+1,j)){
	      if(mat[i+1][j]){
		if(aoe(i+1,j+1)){
		  if(mat[i+1][j+1]){
		    if(aoe(i,j+2)){
		      if(mat[i][j+2]){
			x=7;
			puts("(G)");
		      }}}}}}}}
	else{
	  if(!x)
	    break;
	}
      }
    }
    printf("%d\n",x);
    for(i=0;i<x;i++);
    printf("%s\n",c[i]);
  }
  return 0;
}
