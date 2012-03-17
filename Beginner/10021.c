#include<stdio.h>
#include<string.h>

int main(){
  char h[25];
  char s[25];
  int n,i;

  scanf("%d",&n);
  if(!n)
    return 0;

  scanf("%s",h);

  for(i=0;i<n-1;i++){
    scanf("%s",s);

    if(strcmp(h,s)>0)
      strcpy(h,s);
  }
  printf("%s\n",h);
 
  return 0;
}
