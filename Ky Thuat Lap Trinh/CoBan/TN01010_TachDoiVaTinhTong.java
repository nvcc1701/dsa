import java.math.BigInteger;
import java.util.Scanner;

public class TN01010_TachDoiVaTinhTong {
    static int n;
    static String s;

    static boolean check = true;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        s = sc.nextLine();

        n = s.length();
        while (check) {
            s = tingTong(s);
            System.out.println(s);
        }
    }

    public static String tingTong(String s) {
        n = s.length();
        if (n <= 1) {
            check = false;
        } else {
            BigInteger a = new BigInteger(s.substring(0, n / 2));
            BigInteger b = new BigInteger(s.substring(n / 2));

            return a.add(b).toString();

        }
        return "";
    }
}

