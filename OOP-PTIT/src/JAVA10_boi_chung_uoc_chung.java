import java.util.Scanner;

public class JAVA10_boi_chung_uoc_chung {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0) {
            long a, b;
            a = sc.nextLong();
            b = sc.nextLong();
            long gcd = gcd(a, b);
            long lcm = (a*b)/ gcd;
            System.out.println(lcm + " " + gcd);
            t--;
        }
    }

    public static long gcd(long a, long b) {
        if(b == 0)  return  a;
        else return gcd(b, a%b);
    }
}
