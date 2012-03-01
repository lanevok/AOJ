#include<stdio.h>

int main(){
  char a[8][8];
  int i,j;
  char c;

  //input
  for(i=0;i<8;i++){
    for(j=0;j<8;j++)
      a[i][j]=getchar();
    c=getchar();
  }
  
  //90
  puts("90");
  for(j=0;j<8;j++){
    for(i=7;i>=0;i--)
      printf("%c",a[i][j]);
    puts("");
  }
  
  //180
  puts("180");
  for(i=7;i>=0;i--){
    for(j=7;j>=0;j--)
      printf("%c",a[i][j]);
    puts("");
  }
  
  //270
  puts("270");
  for(j=7;j>=0;j--){
    for(i=0;i<8;i++)
      printf("%c",a[i][j]);
    puts("");
  }
  
  return 0;
}
