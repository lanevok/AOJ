#include<stdio.h>
#include<math.h>

int main(){
  int s[1000];
  int n,i;
  double a,m,z;

  while(1){
    scanf("%d",&n);
    if(!n)
      return 0;

    m=0;
    for(i=0;i<n;i++){
      scanf("%d",&s[i]);
      m+=s[i];
    }

    m=m/n;
    z=0;
    for(i=0;i<n;i++)
      z+=(s[i]-m)*(s[i]-m);

    a=sqrt(z/n);
    printf("%lf\n",a);
  }
}
