#include<stdio.h>
#include<string.h>

int main(){
  char a[21],b[21];
  int n,al,bl,ml,nl,i,j,k;
  
  for(i=0;i<21;i++){
    a[i]=0;
    b[i]=0;
  }
  scanf("%d",&n);
  if(n!=0){
    scanf("%s",a);
    al=strlen(a);
    for(i=0;i<n-1;i++){
      scanf("%s",b);
      bl=strlen(b);
      if(al>bl){
	ml=al;
	nl=bl;
      }
      else{
	ml=bl;
	nl=al;
      }
      for(j=0;j<nl;j++){
	if(a[j]<b[j]){
	  break;
	}
	else if((b[j]<a[j])||(nl-1==j&&al>bl)){
	  for(k=0;k<bl;k++){
	    a[k]=b[k];
	  }
	  a[bl]=0;
	  al=strlen(a);
	  break;
	}
      }
    }
    printf("%s\n",a);
  }
  return 0;
}
