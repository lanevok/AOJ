#include<stdio.h>

int main(void){
  double x,y;	//対象
  int x2,y2;	//lcm計算用(double→int型変換)
  int i=2;		//for
  double a,c;	//格納double型
  int b,d;		//格納int型
  double max,min;	//入力x,yに対してmax,minの設定
  int result,flag;	//resultはgcd結果 flagはgcd出力判定
  
  while(scanf("%lf%lf",&x,&y)!=EOF){	//x,yの読込終了まで
    flag=0;		//flag初期化
    if(x>y){	//xとyとでmax,minを設定
      max=x;
      min=y;
    }
    else{
      max=y;
      min=x;
    }
    for(i=1;i<=min;i++){	//for文。gcdはかならずi=1～minにある。
      a=max/i;				//大きいのから割る
      b=a;					//double→intの型変換
      if(b-a==0){			//割り切れが整数で行えたか(ex 12/6→true
		c=min/a;									12/7→false)
		d=c;				//小さいのでも割れるか判定して型変換
		if(d-c==0 && a==b){	//割り切れが行えたか。a==bに関しては確実なことを証明
		  result=a;			//aが答えなのでintに型変換
		  flag++;			//出力対象とする
		  break;			//for文抜ける(念のため)
		}
		else{
		  if(a*min==max && i!=1){ //割り切れが行えなくても条件式が見たれば見つけたことになる。
		    if(a<min)				//iが1はかならず約数とるので例外
		      result=a;			//a<minならaが答え
		    else
		      result=min;		//min>aならminが答え
		    flag++;				//つまり 4 100 や 25 100 を考慮してる。
		  }
		}
      }
    }
    if(flag==0)	//for文で見つけられなかったら1しかない
      result=1;
    x2=x;		//x,yの出力の為の型変換
    y2=y;
    printf("%d %d\n",result,x2/result*y2);
  }
  return(0);
}
