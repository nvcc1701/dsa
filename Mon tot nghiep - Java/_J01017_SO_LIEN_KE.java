import java.util.Scanner;

public class _J01017_SO_LIEN_KE {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String s = sc.nextLine();

            boolean check = true;
            for (int i = 0; i < s.length() - 1; i++) {
                int a = s.charAt(i) - '0';
                int b = s.charAt(i + 1) - '0';

                if (Math.abs(a - b) != 1) {
                    check = false;
                    break;
                }
            }

            if (check) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }

        }
    }
}
