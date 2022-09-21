import java.math.BigInteger;
import java.util.Scanner;

public class J03015_HieuSoNguyenLon2 {
    public static void main(String[] args) {
        Scanner  sc = new Scanner(System.in);
        BigInteger a = new BigInteger(sc.nextLine());
        BigInteger b = new BigInteger(sc.nextLine());
        System.out.println(a.subtract(b));
    }
}