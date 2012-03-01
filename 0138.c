#include<stdio.h>

int t1[25];   // Number
float t2[25]; // Time
int i;
int run[6];   // Group 1st,2nd List
int z=0;      // Run index

int fast(float bef, float aft){
  if(bef<aft)
    return 0;    // before_fast = 0
  return 1;      // after_fast = 1
}

void pick(int s, int g, int f1){
  int st_n=0, nd_n=0;     // 1st,2nd Number
  float st_t=50, nd_t=50; // 1st,2nd Time
  int f2;
  
  for(i=s;i<=g;i++){    // s->g
    //first check
    if(fast(st_t,t2[i])){  // after fast = true
      f2=1;    //init
      if(f1){   //Run List Flag
	int j;
	for(j=0;j<6;j++){
	  if(run[j]==t1[i])
	    f2=0;  //No Count
	}
      }
      // 2nd=1st 1st=new
      if(f2){
	nd_n=st_n;
	nd_t=st_t;
	st_n=t1[i];
	st_t=t2[i];
      }
    }
    //second check
    else if(fast(nd_t,t2[i])){  // after fast = true
      f2=1;
      if(f1){   //Run List Flag
	int j;
	for(j=0;j<6;j++){
	  if(run[j]==t1[i])
	    f2=0;
	}
      }
      //2nd=new
      if(f2){
	nd_n=t1[i];
	nd_t=t2[i];
      }
    }
  }
  //Output
  printf("%d %.2f\n%d %.2f\n",st_n,st_t,nd_n,nd_t);
  //Run Log
  run[z++]=st_n;  //Group Run 1st Resist
  run[z++]=nd_n;  //Group Run 2nd Resist
}

int main(){

  //Scan Input
  for(i=1;i<25;i++) //1-24
    scanf("%d%f",&t1[i],&t2[i]);

  //pickup 2*4=8members
  pick( 1, 8,0);
  pick( 9,16,0);
  pick(17,24,0);
  pick( 1,24,1);
  
  return 0;
}

