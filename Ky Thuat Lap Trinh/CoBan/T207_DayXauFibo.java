import java.util.Scanner;

public class T207_DayXauFibo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        long a[] = new long[100];
        while (t-- > 0) {
            int n = sc.nextInt();
            long k = sc.nextLong();

            a[1] = 1;
            a[2] = 1;
            for (int i = 3; i < n; i++) {
                a[i] = a[i - 1] + a[i - 2];
            }
            System.out.println(fibo(n, k, a));
        }
    }

    public static Character fibo(int n, long k, long f[]) {
        if (n == 1)
            return 'A';
        if (n == 2)
            return 'B';

        if (k <= f[n - 2]) {
            return fibo(n - 2, k, f);
        } else {
            return fibo(n - 1, k - f[n - 2], f);
        }
    }
}
