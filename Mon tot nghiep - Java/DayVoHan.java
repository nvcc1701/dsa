import java.util.Scanner;

public class DayVoHan {
    static int mod = (int) (1e9 + 7);
    static int n;

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
            fiboN();
        }
    }

    public static void fiboN() {
        Matrix res = new Matrix();

        res = pow(res, n - 1);
        System.out.println(res.f[0][0]);
    }

    public static Matrix pow(Matrix res, int n) {
        if (n == 1)
            return res;
        Matrix x = pow(res, n / 2);

        x = mul(x, x);
        if (n % 2 == 0) {
            return x;
        } else {
            return mul(x, res);
        }
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
}
