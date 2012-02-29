#include<stdio.h>

int num; //number
int t;   //target
int f;   //flag(MSB)

//max=4^shisu
void keta(int max){
  
  if(num>=max){
    t=num/max;      //Target Print
    printf("%d",t);
    num-=t*max;     //Subtraction
    f=1;        //MSB already check
  }
  else{
    if(f){ //No MSB Filter
      printf("0");
    }
  }
}

int main(void){

  for(;;){
    scanf("%d",&num);
    if(num==-1)
      break;
    f=0;      //Flag Init

    //Keta Method Call
    keta(262144);
    keta(65536);
    keta(16384);
    keta(4096);
    keta(1024);
    keta(256);
    keta(64);
    keta(16);
    keta(4);
    
    printf("%d\n",num);  //LSB Print
  }
  return 0;
}
