import java.util.Arrays;
import java.util.Scanner;

class Cake {                    // 単体ケーキの型
    int num;                    // 識別番号
    int[] nw = new int[2];      // 北西座標
    int[] se = new int[2];      // 南東座標
    int area;                   // 面積
}

public class Main {
    
    static Cake[] data;  // すべてのケーキ情報
    static int n;        // カット回数
    static int w;        // 幅
    static int d;        // 奥行き
    static int p;        // カット対象番号
    static int s;        // カット起点
    static int[][] sl;   // カット端点座標
     
    // ケーキp(idx)に対して北西からs進んだ座標の判別をし
    // 　カット端点の座標を設定
    static void cutLine(int idx){
        // 北西座標の設定
        int i = data[idx].nw[0];
        int j = data[idx].nw[1];
        int cnt = 0;
        int vec = 0;     // 進行方向管理
        while(true){
            cnt++;
            // 右へ
            if(vec==0){
                j++;
                // 端に到達時、進行方向切換
                if(j==data[idx].se[1]){
                    vec++;
                }
            }
            // 下へ
            else if(vec==1){
                i++;
                if(i==data[idx].se[0]){
                    vec++;
                }
            }
            // 左へ
            else if(vec==2){
                j--;
                if(j==data[idx].nw[1]){
                    vec++;
                }
            }
            // 上へ
            else if(vec==3){
                i--;
                if(i==data[idx].nw[0]){
                    vec = 0;
                }
            }
            // 外周探索終了チェック
            if(cnt==s){
                break;
            }
        }
        // 一つの端点設定
        sl = new int[2][2];
        sl[0][0] = i;
        sl[0][1] = j;
        // もう一つの端点計算
        if(vec%2==1){
            // 東西方向のカット([0]座標は同値)
            sl[1][0]=sl[0][0];
            sl[1][1]=sl[0][1]-data[idx].se[1];
            if(sl[1][1]<0){
                sl[1][1]*=-1;
            }
            sl[1][1]+=data[idx].nw[1];      // 北西基準点の加算
        }
        else{
            // 南北方向のカット([1]座標は同値)
            sl[1][1]=sl[0][1];
            sl[1][0]=sl[0][0]-data[idx].se[0];
            if(sl[1][0]<0){
                sl[1][0]*=-1;
            }
            sl[1][0]+=data[idx].nw[0];      // 北西基準点の加算
        }
        return;
    }
 
    // ケーキiの面積を返す
    static int areaCalc(int i){
        return (data[i].se[0]-data[i].nw[0])*(data[i].se[1]-data[i].nw[1]);
    }
     
    // カット端点座標を利用し、カットを実行
    // 　ケーキ情報の更新(ケーキpの縮小とケーキkの作成)
    static void cutMission(int idx, int k){
        // カット端点座標の入れ替え(整列:[1]の値で昇順にする)
        if(sl[0][1]>sl[1][1]){
            int tmp = sl[0][1];
            sl[0][1] = sl[1][1];
            sl[1][1] = tmp;
        }
        if(sl[0][0]>sl[1][0]){
            int tmp = sl[0][0];
            sl[0][0] = sl[1][0];
            sl[1][0] = tmp;
        }
         
        // ケーキiの作成(南東点はケーキpから引き継ぎ)
        data[k].num = k+1;
        data[k].nw[0] = sl[0][0];
        data[k].nw[1] = sl[0][1];
        data[k].se[0] = data[idx].se[0];
        data[k].se[1] = data[idx].se[1];
         
        // ケーキpの縮小更新(北西点は保持)
        data[idx].num = k+2;        // 仮に一番大きい値を取る(ケーキ個数+1)
        data[idx].se[0] = sl[1][0];
        data[idx].se[1] = sl[1][1];
         
        // 新しく生成されたケーキ2つの大きさを比較し識別番号を設定
        data[idx].area = areaCalc(idx);
        data[k].area = areaCalc(k);
        if(data[idx].area<data[k].area){
            int tmp = data[idx].num;
            data[idx].num = data[k].num;
            data[k].num = tmp;
        }
         
        // 識別番号の整列と再設定
        int cnt = 0;
        int[] element = new int[k+1];
        for(int i=0;i<=k;i++){
            element[i] = data[i].num;
        }
        Arrays.sort(element);
        for(int i=0;i<=k;i++){
            int j = 0;
            for(;j<=k;j++){
                if(element[i]==data[j].num){
                    break;
                }
            }
            data[j].num = ++cnt;
        }
    }
     
    // メインメソッド
    public static void main(String[] args) {
        Scanner stdIn = new Scanner(System.in);
         
        while(true){
            n = stdIn.nextInt();
            w = stdIn.nextInt();
            d = stdIn.nextInt();
            if(n==0&&w==0&&d==0){
                return;
            }
             
            data = new Cake[n+1];
            for(int i=0;i<n+1;i++){
                data[i] = new Cake();
            }
             
            // 初期設定
            data[0].num = 1;
            data[0].nw[0] = 0;
            data[0].nw[1] = 0;
            data[0].se[0] = d;
            data[0].se[1] = w;
            data[0].area = areaCalc(0);
             
            // カット繰り返し
            for(int i=1;i<=n;i++){
                p = stdIn.nextInt();
                s = stdIn.nextInt();
                 
                // カット対象のケーキ識別番号のインデックス探索
                int idx = 0;
                for(int j=0;j<n;j++){
                    if(data[j].num==p){
                        idx = j;
                        break;
                    }
                }                 
                // カット座標判別
                cutLine(idx);
                // カット実行 (i+1個目の作成)
                cutMission(idx,i);
            }
             
            // 面積の小さい順リストを作り出力
            int[] element = new int[n+1];
            for(int i=0;i<=n;i++){
                element[i] = data[i].area;
            }
            Arrays.sort(element);
            for(int i=0;i<n;i++){
                System.out.print(element[i]+" ");
            }
            System.out.println(element[n]);
        }
    }
}
