#include<stdio.h>

int main(void){
  int pm,pe,pj,n,i;
  
  for(;;){
    scanf("%d",&n);
    if(n==0)
      break;
    
    for(i=0;i<n;i++){
      scanf("%d%d%d",&pm,&pe,&pj);
      
      if(pm==100||pe==100||pj==100)
	puts("A");
      else if((pm+pe)/2>=90)
	puts("A");
      else if((pm+pe+pj)/3>=80)
	puts("A");
      else if((pm+pe+pj)/3>=70)
	puts("B");
      else if((pm+pe+pj)/3>=50&&(pm>=80||pe>=80))
	puts("B");
      else
	puts("C");
    }
  }
  return 0;
}
