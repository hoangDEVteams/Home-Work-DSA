import java.util.ArrayList;
import java.util.Scanner;

public class sumK {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            if (n > k) {
                System.out.println("-1");
                continue;
            }
            else{
                for(int i = 0; i < n -1; i++){
                    System.out.print(1 + " ");
                }
                System.out.println(k - n + 1);
            }
        }
        sc.close();
    }
}
