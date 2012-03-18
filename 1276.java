import java.util.Scanner;

public class Main {
    
    /*
     * 概要
     * 入力nに対してn以下の最大な素数aとn以上の最小な素数bにおいて
     * k=b-aの値を出力する。
     * 例えば、n=27ならa=23,b=29よりk=6である。
     * また、n=11のように素数であるならば
     * a=11,b=11からk=0なので必ず0が出力されればよい。
     * ちなみに1<n<=1299709とする。
     */
    
    static boolean[] primes;
    
    static void primeSet(final int MAX){
	primes = new boolean[MAX+1];
	primes[2] = true;
	for(int i=3;i<=MAX;i+=2){
	    primes[i] = true;
	}
	int rt = (int) Math.sqrt(MAX);
	for(int i=3;i<=rt;i+=2){
	    if(primes[i]){
		for(int j=i*2;j<=MAX;j+=i){
		    primes[j] = false;
		}
	    }
	}
    }
    
    public static void main(String[] args) {
	Scanner stdIn = new Scanner(System.in);
	
	int call = 0;
	while(true){
	    int n = stdIn.nextInt();
	    if(n==0)
		return;
	    if(call<n){
		primeSet(n+100);
		call=n;
	    }
	    
	    int a=0;
	    for(int i=n;;i--){
		if(primes[i]){
		    a=i;
		    break;
		}
	    }
	    for(int i=n;;i++){
		if(primes[i]){
		    System.out.println(i-a);
		    break;
		}
	    }
	}
    }
}
