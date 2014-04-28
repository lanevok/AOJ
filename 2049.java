import java.util.Scanner;

/**
 * 循環小数についての問題。
 * p/qしたときに、小数第何番目から何桁が循環するかを示す。
 * フロイドの循環検出法で実装
 */
public class AOJ2049 {

    public static void main(String[] args) {
        new AOJ2049().run();
    }

    private void run() {
        Scanner stdIn = new Scanner(System.in);

        while(true){
            int m = stdIn.nextInt();
            int n = stdIn.nextInt();
            if(m==0&&n==0) return;
            int p = m;
            int s = 0;
            int t = 0;
            int tmpP = m;
            int cnt = 0;

            while(true){
            	cnt++;
                m = m*10%n;
                p = (p*10%n)*10%n;
                if(m==p){
                    break;
                }
            }
            if(p!=0){
            	p = tmpP%n;
                s = 1;
                while(m!=p){
                    s++;
                    m = m*10%n;
                    p = p*10%n;
                }
                p = p*10%n;
                t = s;
                while(m!=p){
                    t++;
                    p = p*10%n;
                }
            }

            if(s==0&&t==0){
            	System.out.println(cnt+" "+t);
            }
            else System.out.println((s-1)+" "+(t-s+1));
        }
    }
}