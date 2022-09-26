import java.util.Scanner;

public class T208_SoFIboThuN {
    static int mod = (int) 1e9 + 7;
    static int n;
    static long f[][];

    public static class Matrix {
        long f[][] = new long[2][2];

        public Matrix() {
            f[0][0] = f[0][1] = f[1][0] = 1;
            f[1][1] = 0;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            n = sc.nextInt();
            solve();
        }
    }

    public static void solve() {
        Matrix res = new Matrix();
        res = pow(res, n - 1);
        System.out.println(res.f[0][0]);
    }

    public static Matrix mul(Matrix a, Matrix b) {
        Matrix res = new Matrix();
        for (int i = 0; i <= 1; i++) {
            for (int j = 0; j <= 1; j++) {
                res.f[i][j] = 0;
                for (int k = 0; k <= 1; k++) {
                    res.f[i][j] = (res.f[i][j] + a.f[i][k] * b.f[k][j]) % mod;
                }
            }
        }
        return res;
    }

    public static Matrix pow(Matrix a, long n) {
        if (n == 1)
            return a;
        Matrix x = pow(a, n / 2);
        x = mul(x, x);
        if (n % 2 == 0) {
            return x;
        } else {
            return mul(a, x);
        }
    }
}