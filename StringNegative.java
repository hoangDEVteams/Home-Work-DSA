import java.util.ArrayList;
import java.util.Scanner;

public class StringNegative {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);    
        int T = sc.nextInt();
        while (T-- > 0) {
            ArrayList<Integer> a = new ArrayList<>();
            int n = sc.nextInt();
            for(int i = 1; i <= n; i++){
                a.add((i * 2)-1);
            }
            for(int i = 0; i < a.size(); i++){
                System.out.print(a.get(i) + " ");
            }
        }
        sc.close();
    }
}