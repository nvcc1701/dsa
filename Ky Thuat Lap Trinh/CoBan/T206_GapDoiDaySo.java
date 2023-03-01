import java.util.Scanner;

public class T206_GapDoiDaySo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int n;
        long k;

        while (t-- > 0) {
            n = sc.nextInt();
            k = sc.nextLong();
            long len = pow(n) / 2;

            while (true) {
                if (k == len) {
                    System.out.print(n);
                    break;
                }

                if (n == 1) {
                    System.out.print(1);
                    break;
                }
                if (k > len) {
                    k = (long) (len - (k - len));
                }

                n--;
                len /= 2;
            }
            System.out.println();
        }
    }

    public static long pow(int n) {
        if (n == 0)
            return 1;
        if (n == 1)
            return 2;
        long x = pow(n / 2);
        if (n % 2 == 0) {
            return x * x;
        } else {
            return x * x * 2;
        }
    }
}
