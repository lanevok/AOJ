#include<stdio.h>
#include<string.h>

int main(){
  char t[1000],h[1000];
  int n,i,f;
  int tp=0,hp=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",t);
    scanf("%s",h);
    f=strcmp(t,h);
    if(f>0){
      tp=tp+3;
    }
    else if(f<0){
      hp=hp+3;
    }
    else{
      tp++;
      hp++;
    }
  }
  printf("%d %d\n",tp,hp);
  return 0;
}
