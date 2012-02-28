#include<stdio.h>

int main(void){
  int n,m,i,c,d;
  int a[1000];

  for(;;){
    scanf("%d%d",&n,&m);
    if(n==0&&m==0)
      break;
    
    // init
    for(i=0;i<1000;i++)
      a[i]=0;
    
    i=0;
    d=0;
    while(1){     // Loop
      if(d==n-1)  // Finish
	break;    // ---> A
      else{
	c=0;
	while(1){   // Next Out Search
	  i++;
	  if(i>n)
	    i=1;
	  if(a[i]==0)
	    c++;
	  if(c==m){  // Out Person Match
	    a[i]++;
	    d++;
	    break;
	  }
	}
      }
    }
    // A ---> 
    for(i=1;i<=n;i++){
      if(a[i]==0){
	printf("%d\n",i);
	break;
      }
    }
  }
  return 0;
}
