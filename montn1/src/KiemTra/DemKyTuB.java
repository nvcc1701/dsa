import java.util.Scanner;

public class DemKyTuB {

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

            String fibo = (fibo(n));

            int count = 0;
            for (int i = 0; i < k; i++) {
                if (fibo.charAt(i) == 'B') {
                    count++;
                }
            }
            System.out.println(count);
        }
    }

    public static String fibo(int n) {
        if (n == 0)
            return "A";
        if (n == 1)
            return "B";

        return fibo(n - 1) + fibo(n - 2);
    }
}
