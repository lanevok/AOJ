import java.util.Scanner;

public class AOJ0556 {

    public static void main(String[] args) {
	Scanner stdIn = new Scanner(System.in);

	int n = stdIn.nextInt();
	int k = stdIn.nextInt();
	for(int i=0;i<k;i++){
	    int x = stdIn.nextInt();
	    int y = stdIn.nextInt();
	    x = Math.min(x, n-x+1);
	    y = Math.min(y, n-y+1);
	    int p = Math.min(x, y);
	    System.out.println(p%3==0?"3":p%3);
	}
    }
}
