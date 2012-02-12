#include<stdio.h>
int main(){
  double w;
  int f;
  char *p[11]={"light fly","fly","bantam","feather","light","light welter",
	       "welter","light middle","middle","light heavy","heavy"};

  while(scanf("%lf",&w)!=EOF){
    if(w>91)f=10;
    else if(w>81)f=9;
    else if(w>75)f=8;
    else if(w>69)f=7;
    else if(w>64)f=6;
    else if(w>60)f=5;
    else if(w>57)f=4;
    else if(w>54)f=3;
    else if(w>51)f=2;
    else if(w>48)f=1;
    else f=0;
    puts(p[f]);
  }
  return 0;
}
