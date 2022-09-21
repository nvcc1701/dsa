import java.util.Scanner;

public class TN04_SoDep {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();

        while (t-- > 0) {
            String s = sc.next();
            StringBuilder reS = new StringBuilder();
            boolean check = true;

            reS.append(s);
            reS.reverse();

            if (reS.toString().compareTo(s) != 0) {
                System.out.println("NO");
                continue;
            }

            for (int i = 0; i < s.length(); i++) {
                if ((s.charAt(i) - '0') % 2 != 0) {
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
