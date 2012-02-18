#include<stdio.h>

void exception(int s, int g){
  int a[17]={7,8,9,5,4,3,2,1,0,1,2,3,4,5,6,7,8};
  int j;

  j=0;
  while(a[j]!=s)
    j++;
  while(a[j]!=g){
    printf("%d ",a[j]);
    j++;
  }
  printf("%d\n",a[j]);
}

int main(){
  int a[16]={0,1,2,3,4,5,6,7,8,9,5,4,3,2,1,0};
  int n,i,j,k;
  int s,g;
  int p1,p2;
  int i_p1,i_p2;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&s,&g);
    
    if(s>=7&&s>g&&g>=6){
      exception(s,g);
    }
    else{ //Normal

      j=0;
      while(a[j]!=s)
	j++;
      i_p1=j;
      p1=0;
      while(a[j]!=g){
	j++;
	p1++;
      }
      
      j=14;
      while(a[j]!=s)
	j--;
      i_p2=j;
      p2=0;
      while(a[j]!=g){
	j++;
	p2++;
	if(j==16){
	  p2=20; //OF
	  break;
	}
      }
      
      if(p1<p2){
	for(k=i_p1;k<i_p1+p1;k++)
	  printf("%d ",a[k]);
	printf("%d\n",a[i_p1+p1]);
      }
      else{
	for(k=i_p2;k<i_p2+p2;k++)
	  printf("%d ",a[k]);
	printf("%d\n",a[i_p2+p2]);
      }  
    }//Normal End
  }
  return 0;
}
