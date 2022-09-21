import java.util.Scanner;

public class T205_LuyThua {
    static int modulo = (int) 1e9 + 7;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            long k = sc.nextLong();

            System.out.println(bipower(n, k));
        }
    }

    public static long bipower(int n, long k) {
        if (k == 0)
            return 1;
        long x = bipower(n, k / 2);
        if (k % 2 == 0) {
            return (x * x) % modulo;
        } else {
            return n * ((x * x) % modulo) % modulo;
        }
    }

}