#include<stdio.h>

#define CLF 48
#define CFL 51
#define CB 54
#define CFE 57
#define CL 60
#define CLW 64
#define CW 69
#define CLM 75
#define CM 81
#define CLH 91

int main(){
  double w;
  int f;
  
  while(scanf("%lf",&w)!=EOF){
    if(w<=CLF)f=1;
    else if(w<=CFL)f=2;
    else if(w<=CB)f=3;
    else if(w<=CFE)f=4;
    else if(w<=CL)f=5;
    else if(w<=CLW)f=6;
    else if(w<=CW)f=7;
    else if(w<=CLM)f=8;
    else if(w<=CM)f=9;
    else if(w<=CLH)f=10;
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
