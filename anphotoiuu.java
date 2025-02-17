import java.util.*;

public class anphotoiuu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int Q = sc.nextInt();
        while (Q-- > 0) {
            int N = sc.nextInt();
            int T = sc.nextInt();
            int D = sc.nextInt();
            int W = sc.nextInt();

            ArrayList<long[]> a = new ArrayList<>();
            for (int i = 0; i < N; i++) {
                long Oi = sc.nextLong();
                long Ci = sc.nextLong();
                long Ei = sc.nextLong();
                a.add(new long[] { Oi, Ci, Ei });
            }
            long count = 0;
            long PhoFirst = T + D;
            a.sort(Comparator.comparingLong(o -> o[1]));
            for (long[] i : a) {
                long Pho = Math.max(PhoFirst, i[0]);
                if (Pho + i[2] <= i[1]) {
                    count++;
                    PhoFirst = Pho + W + i[2];
                }
            }
            System.out.println(count);
        }
        sc.close();
    }
}