#include<stdio.h>

void print(int a[]){
  int i;
  for(i=0;i<7;i++)
    printf("%d"a[i]);
  puts("");
}

int main(){
  int n;
  int i;
  int a[100];

  while(1){
    scanf("%d",&n);
    if(n==-1)
      break;
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n;i++){
      if(a[i]==0){
	int seg[7]={0,1,1,1,1,1,1};
	for(i=0;i<7;i++)
	  printf("%d",seg[i]);
	puts("");
      }
      else if(a[i]==1){
	int seg[7]={0,0,0,0,1,1,0};
	print(seg);
      }
      else if(a[i]==2){
	char seg[7]={1,0,0,1,1,1,1};
	printf("%s\n",seg);
      }
      else if(a[i]==3){
	char seg[7]={1,1,0,0,1,1,0};
	printf("%s\n",seg);
      }
      else if(a[i]==4){
	char seg[7]={1,1,0,0,1,1,0};
	printf("%s\n",seg);
      }
      else if(a[i]==5){
	char seg[7]={1,1,0,1,1,0,1};
	printf("%s\n",seg);
      }
      else if(a[i]==6){
	char seg[7]={1,1,1,1,1,0,1};
	printf("%s\n",seg);
      }
      else if(a[i]==7){
	char seg[7]={0,1,0,0,1,1,1};
	printf("%s\n",seg);
      }
      else if(a[i]==8){
	char seg[7]={1,1,1,1,1,1,1};
	printf("%s\n",seg);
      }
      else{
	char seg[7]={1,1,0,1,1,1,1};
	printf("%s\n",seg);
      }
    }
  }
  return 0;
}
