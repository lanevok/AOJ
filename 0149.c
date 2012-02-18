#include<stdio.h>
int main(i){
  float s[2];
  int d[2][4]={};
  while(scanf("%f%f",&s[0],&s[1])!=EOF){
    for(i=0;i<2;i++){
      if(s[i]<0.2)
	d[i][3]++;
      else if(s[i]<0.6)
	d[i][2]++;
      else if(s[i]<1.1)
	d[i][1]++;
      else
	d[i][0]++;
    }
  }
  for(i=0;i<4;i++)
    printf("%d %d\n",d[0][i],d[1][i]);
  return 0;
}
