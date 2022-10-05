/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.*;

/**
 *
 * @author nhokt
 */
public class J02025_DayConCoTongNguyenTo {

    static int a[], b[], n;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            a = new int[20];
            b = new int[20];
            n = sc.nextInt();
            int[] x = new int[n];
            for (int i = 0; i < n; i++) {
                x[i] = sc.nextInt();
            }
            Arrays.sort(x);
            for (int i = 1; i <= n; i++) {
                a[i] = x[n - i];
            }
            quaylui(1);
        }
    }

    private static void quaylui(int i) {
        for (int j = 0; j <= 1; j++) {
            b[i] = j;
            if (i == n) {
                xuly();
            } else {
                quaylui(i + 1);
            }
        }
    }

    private static void xuly() {
        int tong = 0, i;
        for (i = 1; i <= n; i++) {
            tong += a[i] * b[i];
        }
        if (isPrime(tong)) {
            for (i = 1; i <= n; i++) {
                if (b[i] == 1) {
                    System.out.print(a[i] + " ");
                }
            }
            System.out.println();
        }
    }

    public static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }

        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }
}
/*
1
4
3 2 5 4

OUTPUT
2
3
3 2
4 3
5
5 2
5 4 2
*/