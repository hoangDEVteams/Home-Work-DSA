import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class GameofMathletes {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            ArrayList<Integer> a = new ArrayList<>();
            for(int i = 0; i < n ; i++){
                int value = sc.nextInt();
                a.add(value);
            }
            Collections.sort(a);
            int left = 0, right = n-1 , count =0;
            while (left < right) {
                int sum = a.get(left) + a.get(right);
                if(sum == k){
                    count++;
                    left++;
                    right--;
                } 
                else if(sum < k){
                    left++;
                } 
                else {
                    right--;
                }
            }
            System.out.println(count);
        }
        sc.close();
    }
}