import java.math.BigInteger;
import java.util.Scanner;

public class _J01009_TONG_GIAI_THUA {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BigInteger sum = new BigInteger("0");
        BigInteger mul;

        if (n <= 0) {
            System.out.println(0);
        } else {
            for (int i = 1; i <= n; i++) {
                mul = new BigInteger("1");
                for (int j = 1; j <= i; j++) {
                    mul = mul.multiply(new BigInteger(j + ""));
                }
                sum = sum.add(mul);
            }

            System.out.println(sum);
        }

    }
}
