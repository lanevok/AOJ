﻿import java.util.Scanner;

public class Main {
    
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
	
	int max = 0;
	while(true){
	    int n = stdIn.nextInt();
	    if(n==0){
		break;
	    }
	    
	    if(max<n){
		primeSet(n);
		max=n;
	    }
	    
	    // if(奇数) then "0" な訳ではない。n=7 ... [2,5]
	    
	    int cnt = 0;
	    for(int i=2;i<=n/2;i++){
		if(primes[i]&&primes[n-i]){
		    // System.out.println("["+i+","+(n-i)+"]");
		    cnt++;
		}
	    }
	    System.out.println(cnt);
	}
    }
}
