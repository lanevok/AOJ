import java.util.Scanner;
public class AOJ0257 {
    public static void main(String[] a) {
	Scanner stdIn = new Scanner(System.in);
	int b = stdIn.nextInt()*100+stdIn.nextInt()*10+stdIn.nextInt();
	if(b==110||b==1) System.out.println("Open"); else System.out.println("Close");
    }
}
