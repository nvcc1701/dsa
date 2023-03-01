import java.util.Scanner;

public class T301_XauConChungDaiNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            String s1 = sc.nextLine();
            String s2 = sc.nextLine();
            int n = s1.length();
            int m = s2.length();

            int F[][] = new int[n + 1][m + 1];

            for (int i = 0; i <= n; i++) {
                for (int j = 0; j <= m; j++) {
                    if (i == 0 || j == 0) {
                        F[i][j] = 0;
                    } else {
                        if (s1.charAt(i - 1) == s2.charAt(j - 1)) {
                            F[i][j] = F[i - 1][j - 1] + 1;
                        } else {
                            F[i][j] = Math.max(F[i][j - 1], F[i - 1][j]);
                        }
                    }
                }
            }
            System.out.println(F[n][m]);
        }
    }
}
