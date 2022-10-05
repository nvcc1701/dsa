/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package CoBan;

import java.util.Scanner;

/**
 *
 * @author nhokt
 */
public class LuyThua {
    static int mod = (int) 1e9 + 7;
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (true) {
            int n = in.nextInt();
            long k = in.nextLong();
            //if (n == 0 && k == 0) break;
            System.out.println(powerMod(n, k));
        }
    }
    public static long powerMod(int n, long k) {
        if (k == 0) return 1;
        long x = powerMod(n,k/2);
        if (k % 2 == 0) return (x * x) % mod;
        return n * (x * x % mod) % mod;
    }
}
