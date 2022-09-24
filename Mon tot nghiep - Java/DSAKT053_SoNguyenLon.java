import java.util.Scanner;

public class DSAKT053_SoNguyenLon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            String s1 = sc.nextLine();
            String s2 = sc.nextLine();

            int n = s1.length();
            int m = s2.length();

            int f[][] = new int[n + 1][m + 1];

            for (int i = 0; i <= n; i++) {
                for (int j = 0; j <= m; j++) {
                    if (i == 0 || j == 0)
                        f[i][j] = 0;
                    else {
                        if (s1.charAt(i - 1) == s2.charAt(j - 1)) {
                            f[i][j] = f[i - 1][j - 1] + 1;
                        } else {
                            f[i][j] = Math.max(f[i - 1][j], f[i][j - 1]);
                        }
                    }

                }
            }

            System.out.println(f[n][m]);
        }
    }
}
