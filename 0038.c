#include<stdio.h>

int main(void){
  int a[14];
  int b[5];
  int i,j,f;

  while(scanf("%d,%d,%d,%d,%d",&b[0],&b[1],&b[2],&b[3],&b[4])!=EOF){
    for(i=0;i<14;i++)
      a[i]=0;
    for(i=0;i<5;i++)
      a[b[i]]++;
    
    f=1;

    for(i=0;i<14;i++){
      if(a[i]>=4){
	puts("four card");
	f=0;
	break;
      }
    }
    if(f){
      for(i=1;i<14;i++){
	if(f==0)
	  break;
	if(a[i]>=3){
	  if(f){
	    for(j=1;j<14;j++){
	      if(i!=j&&a[j]>=2){
		puts("full house");
		f=0;
		break;
	      }
	    }
	  }
	}
      }
    }
    if(f){
      for(i=0;i<10;i++){
	if(a[i]&&a[i+1]&&a[i+2]&&a[i+3]&&a[i+4]){
	  puts("straight");
	  f=0;
	  break;
	}
      }
    }
    if(f){
      if(a[10]&&a[11]&&a[12]&&a[13]&&a[1]){
	puts("straight");
	f=0;
      }
    }
    if(f){
      for(i=0;i<14;i++){
	if(a[i]>=3){
	  puts("three card");
	  f=0;
	  break;
	}
      }
    }
    if(f){
      for(i=0;i<14;i++){
	if(f==0)
	  break;
	if(a[i]>=2){
	  for(j=0;j<14;j++){
	    if(i!=j&&a[j]>=2){
	      puts("two pair");
	      f=0;
	      break;
	    }
	  }
	}
      }
    }
    if(f){
      for(i=0;i<14;i++){
	if(a[i]>=2){
	  puts("one pair");
	  f=0;
	  break;
	}
      }
    }
    if(f)
      puts("null");
  }
  return 0;
}

