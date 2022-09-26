import java.math.BigInteger;
import java.util.Scanner;

public class TN02_UocSoNguyenToLonNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            long n = sc.nextLong();
            long i = 2;
            while (i < Math.sqrt(n)) {
                if (n % i == 0)
                    n /= i;
                else {
                    i++;
                }
            }

            System.out.println(n);
        }
    }
}
