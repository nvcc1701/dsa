import java.util.Scanner;

public class J02_So_Fibonacci {
    public static long fibo(int n) {
        long[] f = new long[n+2];
        int i;
        f[0] = 0;
        f[1] = 1;
        for(i = 2; i <= n; i++)
            f[i] = f[i-1] + f[i-2];
        return f[n];
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t>0) {
            int n = sc.nextInt();
            System.out.println(fibo(n));
            t--;
        }
    }
}
