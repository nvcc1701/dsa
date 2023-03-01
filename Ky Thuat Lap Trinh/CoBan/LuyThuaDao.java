import java.util.Scanner;

public class LuyThuaDao {

    static int mod = (int) (1e9 + 7);

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            long n = in.nextLong();
            long k = 0, m = n;
            while (m > 0) {
                k = k * 10 + m % 10;
                m /= 10;
            }
            System.out.println(powerMod(n, k));
        }
        System.out.println();
        // TODO code application logic here
    }

    private static long powerMod(long n, long k) {
        if (k == 0)
            return 1;
        long x = powerMod(n, k / 2);
        if (k % 2 == 0)
            return x * x % mod;
        return n * (x * x % mod) % mod;
    }
}
