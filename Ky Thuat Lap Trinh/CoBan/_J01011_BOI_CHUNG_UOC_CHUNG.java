import java.util.Scanner;

public class _J01011_BOI_CHUNG_UOC_CHUNG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        while (n-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();

            int gcdd = gcd(a, b);

            System.out.println((long) a * b / gcdd + " " + gcdd);
        }
    }

    public static int gcd(int a, int b) {
        while (a * b != 0) {
            if (a > b) {
                a %= b;
            } else {
                b %= a;
            }
        }

        return a + b;
    }
}
