import java.util.ArrayList;
import java.util.Scanner;
import java.util.StringTokenizer;

public class TN01009_ChuanHoaCau {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> a = new ArrayList<>();
        a.add(sc.next());

        for (String x : a) {
            StringTokenizer st = new StringTokenizer(x.toLowerCase());
            StringBuilder sb = new StringBuilder();
            String first = st.nextToken();

            sb.append(Character.toUpperCase(x.charAt(0)));
            for (int i = 1; i < first.length(); i++) {
                sb.append(first.charAt(i));
            }
            sb.append(" ");

            while (st.hasMoreTokens()) {
                sb.append(st.nextToken());
                sb.append(" ");
            }

            System.out.println(sb.toString());
        }
    }
}
