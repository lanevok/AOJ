#include<stdio.h>

int main(){
  int a[10],b,c,i,j,n,f;

  scanf("%d",&n);
  for(i=0;i<n;i++){    
    c=0;f=1;
    for(j=0;j<10;j++)
      scanf("%d",&a[j]);
    b=a[0];
    for(j=1;j<10;j++){
      if(b>c){
	if(a[j]>b)
	  b=a[j];
	else if(a[j]>c)
	  c=a[j];
	else
	  f=0;
      }
      else{
	if(a[j]>c)
	  c=a[j];
	else if(a[j]>b)
	  b=a[j];
	else
	  f=0;
      }
    }
    if(f)
      puts("YES");
    else
      puts("NO");
  }
  return 0;
}
