#include<stdio.h>

int main(void){
  int value,pay,back;

  for(;;){
    scanf("%d%d",&value,&pay);
    if(value==0&&pay==0)
      break;
    
    back=pay-value;

    {
      int sen=0,gohya=0,hya=0;
   
      for(;;){
	if(back>=1000){
	  sen++;
	  back-=1000;
	}
	else
	  break;
      }
      for(;;){
	if(back>=500){
	  gohya++;
	  back-=500;
	}
	else
	  break;
      }
      hya=back/100;
      
      printf("%d %d %d\n",hya,gohya,sen);
    }
  }
  return 0;
}
