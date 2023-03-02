import java.math.BigInteger;
import java.util.Scanner;

public class TachDoi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String s = sc.nextLine();
            int n = s.length();
            if (n % 2 != 0) {
                System.out.println("INVALID");
            } else {
                // long a = Long.parseLong(s.substring(0, n / 2));
                // long b = Integer.parseInt(s.substring(n / 2));
                BigInteger a = new BigInteger(s.substring(0, n / 2));
                BigInteger b = new BigInteger(s.substring(n / 2));

                System.out.println(a.multiply(b).divide(a.gcd(b)));
            }
        }
    }

    // public static long lcm(long a, long b) {
    //     long step = Math.max(a, b);
    //     long max = a * b;
    //     for (long i = step; i <= max; i += step) {
    //         if (i % a == 0 && i % b == 0) {
    //             return i;
    //         }
    //     }
    // }
}
