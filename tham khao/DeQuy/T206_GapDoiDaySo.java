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
public class T206_GapDoiDaySo {

    static long Mul(int n) {
        if (n == 0) {
            return 1;
        }
        if (n == 1) {
            return 2;
        }
        long x = Mul(n / 2);
        if (n % 2 == 0) {
            return x * x;
        }
        return 2 * x * x;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            int k = in.nextInt();
            long len = Mul(n) / 2;
            while (true) {
                if (len == k) {
                    System.out.print(n);
                    break;
                }
                if (n == 1) {
                    System.out.print(1);
                    break;
                }
                if (k > len) {
                    k = (int) (len - (k - len));
                }
                n--;
                len = len / 2;
            }
            System.out.println();
        }
    }
}
/*
TEST
2
3 2
4 8
OUTPUT
2
4
 */
