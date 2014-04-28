import java.util.Scanner;
public class AOJ0277 {
    public static void main(String[] args) {
	Scanner stdIn = new Scanner(System.in);
	int[] value = {0,6000,4000,3000,2000};
	while(stdIn.hasNext())
	    System.out.println(value[stdIn.nextInt()]*stdIn.nextInt());
    }
}
