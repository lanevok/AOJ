#include<stdio.h>
#include<string.h>

int main(){
  char a[10];
  int k,n;

  scanf("%d",&n);
  for(k=0;k<n;k++){
    int b[3]={};
    int t=0;
    int out=0;
    for(;;){
      scanf("%s",a);
      if(strcmp(a,"HIT")==0){
	b[0]++;
	if(b[0]!=1){
	  b[1]++;
	  if(b[1]!=1){
	    b[2]++;
	    if(b[2]!=1){
	      t++;
	    }
	  }
	}
      }
      else if(strcmp(a,"HOMERUN")==0){
	t++;
	if(b[0]){
	  t++;
	  b[0]=0;
	}
	if(b[1]){
	  t++;
	  b[1]=0;
	}
	if(b[2]){
	  t++;
	  b[2]=0;
	}
      }
      else if(strcmp(a,"OUT")==0)
	out++;
      if(out==3)
	break;
    }
    printf("%d\n",t);
  }
  return 0;
}
