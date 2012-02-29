#include<stdio.h>

int main(void){
  int w,price;
  
  for(;;){
    scanf("%d",&w);
    if(w==-1)
      break;

    price=1150;
    if(w>10){
      if(w<20)
	price+=125*(w-10);
      else
	price+=1250;
    }
    if(w>20){
      if(w<30)
	price+=140*(w-20);
      else
	price+=1400;
    }
    if(w>30)
      price+=160*(w-30);
    
    printf("%d\n",4280-price);
  }
  return 0;
}
