#include<stdio.h>

int main(){
  double w;
  int f;
  
  while(scanf("%lf",&w)!=EOF){
    if(w<=48)f=1;
    else if(w<=51)f=2;
    else if(w<=54)f=3;
    else if(w<=57)f=4;
    else if(w<=60)f=5;
    else if(w<=64)f=6;
    else if(w<=69)f=7;
    else if(w<=75)f=8;
    else if(w<=81)f=9;
    else if(w<=91)f=10;
    else f=11;
    switch(f){
    case 1:printf("light fly\n");break;
    case 2:printf("fly\n");break;
    case 3:printf("bantam\n");break;
    case 4:printf("feather\n");break;
    case 5:printf("light\n");break;
    case 6:printf("light welter\n");break;
    case 7:printf("welter\n");break;
    case 8:printf("light middle\n");break;
    case 9:printf("middle\n");break;
    case 10:printf("light heavy\n");break;
    case 11:printf("heavy\n");break;
    }
  }
  return 0;
}
