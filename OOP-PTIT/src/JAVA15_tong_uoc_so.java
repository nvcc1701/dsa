import java.util.Scanner;

public class JAVA15_tong_uoc_so {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0) {
            int n = sc.nextInt();
            int sum = 0;
            while(n%2 == 0) {
                sum += 2;
                n/=2;
            }

            for(int i = 3; i*i <= n; i+=2) {
                while (n%i == 0) {
                    sum += i;
                    n /= i;
                }
            }
            t--;
        }
    }
}
