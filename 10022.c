#include<stdio.h>
#include<string.h>
#include<ctype.h>

char w[10000];           //global check word
int w_len;               //w_length
int r=0;                 //result
char e[]="end_of_text";  //input finish word

//checker
int check(char *t){
  int i,j,k,c1,c2;
  int t_len;
  int e_len=strlen(e);
  
  t_len=strlen(t);       //check line strlen
  for(i=0;i<t_len;i++){  //change spelling
    t[i]=tolower(t[i]);  //to lower
  }
  c1=0;  //init
  c2=0;
  j=0;
  k=0;
  for(i=0;i<t_len;i++){
    if(t[i]==w[j]){
      printf("if-1:t[%d]=%c w[%d]=%c\n",i,t[i],j,w[j]);  //log
      c1++;
      j++;
    }
    else{
      j=0;
    }
    if(t[i]==e[k]){
      printf("if-2:t[%d]=%c e[%d]=%c\n",i,t[i],k,e[k]);  //log
      //      if(w_len==e_len){
	c2++;
	k++;
	//      }
    }
    else{
      k=0;
    }
    if(c1==w_len){
      printf("if-3:c1=%d w_len=%d\n",c1,w_len);  //log
      r++;
      c1=0;
    }
    if(c2==e_len){
      return(1);
    }
  }
  return(0);
}

//main
int main(){
  char t[10000];  //check line
  int i,b=0;      //b = finish flag
  int ln=0;       //line number
  
  for(i=0;i<10000;i++){  //check word init
    w[i]=0;
  }
  scanf("%s",w);         //check word input
  w_len=strlen(w);       //check word length
  for(i=0;i<w_len;i++){  //change spelling
    w[i]=tolower(w[i]);  //to lower
  }
  while(1){
    printf("line:%d\n",ln++);
    for(i=0;i<10000;i++){  //check line init
      t[i]=0;
    }
    scanf("%s",t);    //check line input
    b=check(t);       //checker
    if(b==1){         //finish flag check
      break;
    }
  }
  printf("%d\n",r);   //result output
  return 0;
}
