import java.math.BigInteger;
import java.util.Scanner;

public class J03033_BoiSoChungNhoNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        BigInteger a, b;

        while (t-- > 0) {
            a = new BigInteger(sc.nextLine());
            b = new BigInteger(sc.nextLine());
            System.out.println(a.multiply(b).divide(a.gcd(b)));
        }
    }
}
