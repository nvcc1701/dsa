import java.util.Scanner;

public class JAVA13_boi_so_nho_nhat_cua_n {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0) {
            int n = sc.nextInt();
            long temp = 1;
            for(int i = 2; i <= n; i++) {
                temp = lcm(temp, i);
            }
            System.out.println(temp);
            t--;
        }
    }

    public static long gcd(long a, long b) {
        if(b == 0) return a;
        else return gcd(b, a%b);
    }

    public static long lcm(long a, long b) {
        return (a*b) / gcd(a, b);
    }
}