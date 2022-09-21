import java.util.Scanner;

public class notdone_TN04_SoDep {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();

        while (t-- > 0) {
            String s = sc.next();

            int a = s.charAt(0) - '0';
            int b = s.charAt(s.length() - 1) - '0';

            if (a % 2 == 0 && b % 2 == 0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
