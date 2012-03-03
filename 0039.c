#include<stdio.h>
#include<string.h>

int cv(char t){
  if(t=='I')
    return 1;
  if(t=='V')
    return 5;
  if(t=='X')
    return 10;
  if(t=='L')
    return 50;
  if(t=='C')
    return 100;
  if(t=='D')
    return 500;
  if(t=='M')
    return 1000;
  return 0;
}

int main(){
  char rom[101];
  int i,num,len;

  while(scanf("%s",rom)!=EOF){
    num=0;
    len=strlen(rom);
    for(i=0;i<len;i++){
      if(i>0&&cv(rom[i-1])<cv(rom[i]))
	// No 1st & i-1 < i ... No Operation
	continue;
      else if(i==len-1)
	// Last i & i-1 >= i ... num+=i
	num+=cv(rom[i]);  
      else if(cv(rom[i])>=cv(rom[i+1]))
	// i >= i+1 ... num+=i
	num+=cv(rom[i]);
      else if(cv(rom[i])<cv(rom[i+1]))
	// i < i+1 ... (i+1)-i
	num+=(cv(rom[i+1])-cv(rom[i]));
    }
    printf("%d\n",num);
  }
  return 0;
}
