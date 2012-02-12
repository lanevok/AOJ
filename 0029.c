#include<stdio.h>
#include<string.h>

int main(void){
  int len=0, i=0;
  int j,k;
  int max=0,cnt;
  int a_len;
  char b[35];
  char array[1000][35];
  char c[35];
 
  while(scanf("%s",array[i])!=EOF){
    //    printf("%s\n",array[i]);

    a_len=strlen(array[i]);
    if(len < a_len){
      len=strlen(array[i]);
      //      printf("%d\n",len);
      strcpy(b,array[i]);
    }
    
    i++;
  }

  for(j=0;j<i;j++){
    cnt=0;
    for(k=0;k<i;k++){
      if(strcmp(array[j],array[k])==0){
	cnt++;
      }
    }
    //    printf("%d\n",cnt);
    if(max<cnt){
      max=cnt;
      strcpy(c,array[j]);
    }
  }
  printf("%s %s\n",c,b);
  return 0;
}
