import java.math.BigDecimal;
import java.util.Scanner;

/**
 * 循環小数についての問題。
 * 入力が割り算として与えられるので、
 * 割り切れる場合は小数部分のみ、循環小数になる場合は、
 * 循環する部分に「^」に表示させる。
 * フロイドの循環検出法で実装。
 */
public class AOJ0113 {

    public static void main(String[] args) {
        new AOJ0113().run();
    }

    private void run() {
        Scanner stdIn = new Scanner(System.in);

        while(stdIn.hasNext()){
            int m = stdIn.nextInt();
            int n = stdIn.nextInt();

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
            	// 「1/10000」「2/3」のテストケースを試すべき。
            	// 以下コメントアウトでは、eがついた表示になるので、BigDecimalを用いた
//                System.out.printf("%s\n", String.valueOf(tmpP*1.0/n).substring(2));
            	// setScaleで小数第何桁までで表示するか指定できる
            	BigDecimal bg = new BigDecimal(tmpP*1.0/n).setScale(cnt, BigDecimal.ROUND_HALF_UP);
            	String str = bg.toString().substring(2);	// 「0.」の部分の除去
            	System.out.println(str);
            }
            else{
                for(int i=0;i<t;i++){
                    System.out.print(tmpP*10/n);
                    tmpP = tmpP*10%n;
                }
                System.out.println();
            }
            if(s!=0&&t!=0){
                for(int i=1;i<=t;i++){
                    if(i>=s){
                        System.out.print("^");
                    }
                    else{
                        System.out.print(" ");
                    }
                }
                System.out.println();
            }
        }
    }
}