#include<stdio.h>

int t1[25];   // Number
float t2[25]; // Time
int i;
int run[6];   // Group 1st,2nd List
int z=0;      // Run index

void pick(int s, int g, int f1){
  int st_n=0, nd_n=0;     // 1st,2nd Number
  float st_t=50, nd_t=50; // 1st,2nd Time
  int f2,j;
  
  for(i=s;i<=g;i++){  // s->g
    f2=1;             // init
    if(st_t>t2[i]){   // First Check
      if(f1){         // Run List Flag
	for(j=0;j<6;j++){
	  if(run[j]==t1[i])
	    f2=0;     // No Count
	}
      }
      if(f2){  // 2nd=1st 1st=new
	nd_n=st_n;
	nd_t=st_t;
	st_n=t1[i];
	st_t=t2[i];
      }
    }
    else if(nd_t>t2[i]){  //second check
      if(f1){
	for(j=0;j<6;j++){
	  if(run[j]==t1[i])
	    f2=0;
	}
      }
      if(f2){  // 2nd=new
	nd_n=t1[i];
	nd_t=t2[i];
      }
    }
  }
  //Output
  printf("%d %.2f\n%d %.2f\n",st_n,st_t,nd_n,nd_t);
  //Group Run Resist
  run[z++]=st_n;  // 1st
  run[z++]=nd_n;  // 2nd
}

int main(){

  //Scan Input
  for(i=1;i<=24;i++)
    scanf("%d%f",&t1[i],&t2[i]);

  //pickup 2*4 = 8 Members
  pick( 1, 8,0);
  pick( 9,16,0);
  pick(17,24,0);
  pick( 1,24,1);
  
  return 0;
}

