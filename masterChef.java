import java.util.ArrayList;
import java.util.Scanner;

public class masterChef{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);    
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            ArrayList<Integer> a = new ArrayList<>();
            for(int i = 0; i < n; i++){
                int food = sc.nextInt();   
                a.add(food);
            }
            
            int left = 0, right = 0;    
            int yummy = 0, maxYummy = 0;
            if(n < k){
                maxYummy = -1;
            }
            while (right < n) {
                yummy += a.get(right);
                if (right - left + 1 == k) {
                    maxYummy = Math.max(maxYummy, yummy);
                    yummy -= a.get(left);
                    left++; 
                }
                right++;
            }
            if(maxYummy <= 0){
                maxYummy = -1;
            }
            System.out.println(maxYummy);  
        }
        sc.close();
    }
}