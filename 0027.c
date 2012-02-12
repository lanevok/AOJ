#include<stdio.h>

int main(){
  char text[][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
  
  int a,b,c,d,e,f;
  int year,month,day;
  int ans,i;
  
  for(;;){
    year=2004;
    scanf("%d %d",&month,&day);
    if(month==0)
      break;
    if(month==1||month==2){
      year--;
      month=month+13;
    }
    else
      month++;
    a=year*365.25;
    b=month*30.6;
    c=year/400;
    d=year/100;
    e=a+b+c+day-d-429;
    f=e/7;
    f=f*7;
    ans=e-f;
    
    for(i=0;i<ans;i++);
    printf("%s\n",text[i]);
  }
  return 0;
}
