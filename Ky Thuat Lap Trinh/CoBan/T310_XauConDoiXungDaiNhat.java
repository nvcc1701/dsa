import java.util.Scanner;

public class T310_XauConDoiXungDaiNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            String s = sc.nextLine();
            int n = s.length();
            s = "x" + s;
            boolean f[][] = new boolean[n + 1][n + 1];

            for (int i = 1; i <= n; i++)
                f[i][i] = true;

            int ans = 1;
            for (int len = 2; len <= n; len++) {
                for (int i = 1; i <= n - len + 1; i++) {
                    int j = len + i - 1;

                    if (len == 2 && s.charAt(i) == s.charAt(j))
                        f[i][j] = true;
                    else {
                        if (f[i + 1][j - 1] && s.charAt(i) == s.charAt(j))
                            f[i][j] = true;
                    }

                    if (f[i][j])
                        ans = Math.max(ans, len);
                }
            }
            
            System.out.println(ans);
        }
    }
}