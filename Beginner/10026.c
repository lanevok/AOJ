#include<stdio.h>
#include<math.h>

int main(){
  int s[1000];
  int n,i;
  double a,a2,m,z;

  while(1){
    scanf("%d",&n);
    if(n==0){
      break;
    }
    m=0;
    for(i=0;i<n;i++){
      scanf("%d",&s[i]);
      m=m+s[i];
    }
    m=m/n;
    z=0;
    for(i=0;i<n;i++){
      z=z+(s[i]-m)*(s[i]-m);
    }
    a2=z/n;
    a=sqrt(a2);
    printf("%lf\n",a);
  }
  return 0;
}
