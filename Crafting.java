import java.io.*;
import java.util.*;

public class Crafting {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder output = new StringBuilder();
        int T = Integer.parseInt(br.readLine().trim());

        while (T-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            int[] a = new int[n], b = new int[n], c = new int[n];
            PriorityQueue<Integer> neg = new PriorityQueue<>();

            String[] aStr = br.readLine().split(" ");
            String[] bStr = br.readLine().split(" ");
            
            for (int i = 0; i < n; i++) {
                a[i] = Integer.parseInt(aStr[i]);
                b[i] = Integer.parseInt(bStr[i]);
                c[i] = a[i] - b[i];
                if (c[i] < 0) {
                    neg.add(-c[i]);
                }
            }

            long sum = 0;
            while (!neg.isEmpty()) {
                sum += neg.poll();
            }

            boolean valid = true;
            for (int i = 0; i < n; i++) {
                if ((c[i] < 0 && sum > -c[i]) || (c[i] >= 0 && c[i] < sum)) {
                    valid = false;
                    break;
                }
            }
            output.append(valid ? "YES\n" : "NO\n");
        }
        System.out.print(output);
    }
}
