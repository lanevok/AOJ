#include<stdio.h>
#include<string.h>

char s[2000];  // scan
char w[2000];     // word
int i,j,len,f=0;

void judge(){
  int lng=strlen(w);  // word length
  
  if(lng>=3&&lng<=6){  // 3<=lng<=6
    if(f)
      printf(" ");
    printf("%s",w);  // print
    f++;
  }
}

int alpha(char abc){

  if(abc==' '||abc=='.'||abc==',')  // cut
    return 0;
  else
    return 1;
}

void pick(){
  
  j=0;  // init (w:index)
  
  // scan -> word
  for(i=0;i<len;i++){
    if(alpha(s[i])){
      w[j++]=s[i];   // copy
      if(i==len-1){  // true word
	w[j]='\0';   // final charactor
	judge();     // print
	j=0;         // init
      }
    }
    else{         // false(cut) word
      w[j]='\0';
      judge();
      j=0;
    }
  }
}

int main(){
  
  while(scanf("%s",s)!=EOF){
    len=strlen(s);
    pick();
  }
  puts("");
  return 0;
}
