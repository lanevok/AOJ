#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
  char b[100000];
  char a[]="abcdefghijklmnopqrstuvwxyz";
  int c[26];
  int n,i;
  
  for(i=0;i<26;i++){
    c[i]=0;
  }
  i=0;
  while(1){
    b[i]=getchar();
    if(b[i]==EOF){
      break;
    }
    i++;
  }
  n=strlen(b);
  for(i=0;i<n;i++){
    if(isupper(b[i])){
      b[i]=tolower(b[i]);
    }
    if(islower(b[i])){
      c[b[i]-'a']++;
    }
  }
  for(i=0;i<26;i++){
    printf("%c : %d\n",a[i],c[i]);
  }
  return 0;
}
