import java.io.*;

public class BrogrammingContest {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder output = new StringBuilder();
        int T = Integer.parseInt(br.readLine().trim());
        while (T-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            String s = br.readLine().trim();
            int number0 = s.indexOf('0'); 
            int number1 = s.lastIndexOf('1');
            if(number0 == -1){
                output.append("1\n");
                continue;
            }else if(number1 == -1){
                output.append("0\n");
                continue;
            }
            int count = 0;
            if(s.charAt(0) == '1'){
                count =1;
            }
            for(int i = 1; i < n; i++){
                if(s.charAt(i) != s.charAt(i-1)){
                    count++;
                }
            }   
            output.append(count + "\n");
        }
        System.out.println(output);
    }
}