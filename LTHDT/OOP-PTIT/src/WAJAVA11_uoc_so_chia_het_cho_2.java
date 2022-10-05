import java.util.Scanner;

public class WAJAVA11_uoc_so_chia_het_cho_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0) {
            long n = sc.nextLong();
            int count = 0;
            int i;
            for(i = 2; i*i <= n; i++) {
                if(n%i == 0) {
                    if(i%2 == 0) count++;
                    if((n/i)%2 == 0) count++;
                }
            }
            System.out.println(count);
            t--;
        }
    }
}
