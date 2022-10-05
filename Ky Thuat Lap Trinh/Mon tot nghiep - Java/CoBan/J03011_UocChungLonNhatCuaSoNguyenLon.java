import java.math.BigInteger;
import java.util.Scanner;

public class J03011_UocChungLonNhatCuaSoNguyenLon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();

        BigInteger a;
        BigInteger b;
        while (t-- > 0) {
            a = new BigInteger(sc.nextLine());
            b = new BigInteger(sc.nextLine());

            System.out.println(a.gcd(b));
        }
    }

}
