import java.math.BigInteger;
import java.util.Scanner;

public class JAVA12_so_nguyen_lon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t>0) {
            String a, b;
            a = sc.nextLine();
            b = sc.nextLine();

            BigInteger biga = new BigInteger(a, 10);
            BigInteger bigb = new BigInteger(b, 10);
            BigInteger gcd = biga.gcd(bigb);
            System.out.println(gcd);
            t--;
        }
    }
}
