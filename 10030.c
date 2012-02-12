#include<stdio.h>

int main(){
  int n,q,c=0;
  int s[100],t[100];
  int i,j;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&s[i]);
  }
  scanf("%d",&q);
  for(j=0;j<q;j++){
    scanf("%d",&t[j]);
  }
  for(j=0;j<q;j++){
    for(i=0;i<n;i++){
      if(s[i]==t[j]){
	c++;
      }
    }
  }
  printf("%d\n",c);
  return 0;
}
