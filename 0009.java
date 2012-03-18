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
	
	primeSet(999999);
	
	while(stdIn.hasNext()){
	    int n = stdIn.nextInt();
	    int cnt = 0;
	    	    
	    for(int i=0;i<=n;i++){
		if(primes[i]){
		    cnt++;
		}
	    }
	    System.out.println(cnt);
	}	
    }
}
