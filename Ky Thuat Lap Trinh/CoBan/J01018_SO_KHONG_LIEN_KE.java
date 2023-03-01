import java.util.Scanner;

public class J01018_SO_KHONG_LIEN_KE {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();

        while (t-- > 0) {
            String s = sc.nextLine();
            boolean check = true;
            int sum = 0;

            for (int i = 0; i < s.length() - 1; i++) {
                int a = s.charAt(i) - '0';
                int b = s.charAt(i + 1) - '0';
                sum += a;
                if (Math.abs(a - b) != 2) {
                    check = false;
                    break;
                }
            }

            sum += s.charAt(s.length()-1) - '0';

            if (check && sum % 10 == 0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
