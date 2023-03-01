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
public class T207_DayXauFibonacci {

    static Character in(int n, long k, long[] arr) {
        if (n == 1) {
            return 'A';
        }
        if (n == 2) {
            return 'B';
        }
        if (k <= arr[n - 2]) {
            return in(n - 2, k, arr);
        }
        return in(n - 1, k - arr[n - 2], arr);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        long[] arr = new long[100];
        while (t-- > 0) {
            int n = sc.nextInt();
            long k = sc.nextLong();
            arr[1] = 1;
            arr[2] = 1;
            for (int i = 3; i <= n; i++) {
                arr[i] = arr[i - 1] + arr[i - 2];
            }
            System.out.println(in(n, k, arr));
        }
    }
}
/*
input
2
6 4
8 19
output
A
B
*/
