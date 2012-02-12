#include<stdio.h>

int main(){
  int s[100]={};
  int t[100]={};
  int i,j;
  int n,q;
  int cnt=0;
  
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&s[i]);
  scanf("%d",&q);
  for(i=0;i<q;i++)
    scanf("%d",&t[i]);
  for(i=0;i<n;i++){
    for(j=0;j<q;j++){
      if(s[i]==t[j]){
	cnt++;
	break;
      }
    }
  }
  printf("%d\n",cnt);
  return 0;
}
