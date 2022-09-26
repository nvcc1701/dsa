import java.util.Scanner;
import java.util.StringTokenizer;

public class TN05_ChuanHoaXauHoTen {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String s = sc.nextLine();

            StringTokenizer st = new StringTokenizer(s);
            StringBuilder sb = new StringBuilder();

            while (st.hasMoreTokens()) {
                String tmp = st.nextToken().toLowerCase();

                sb.append(Character.toUpperCase(tmp.charAt(0)));
                for (int i = 1; i < tmp.length(); i++) {
                    sb.append(tmp.charAt(i));
                }
                sb.append(" ");
            }

            System.out.println(sb.toString());
        }
    }
}
