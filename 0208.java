﻿public class AOJ0208{
    public static void main(String[] args){
	java.util.Scanner s=new java.util.Scanner(System.in);
	int[]m={0,1,2,3,5,7,8,9};
	while(true){
	    int n=s.nextInt();
	    if(n==0)return;
	    char[]c=Integer.toOctalString(n).toCharArray();
	    for(n=0;n<c.length;n++)System.out.print(m[c[n]-'0']);
	    System.out.println();
	}
    }
}
