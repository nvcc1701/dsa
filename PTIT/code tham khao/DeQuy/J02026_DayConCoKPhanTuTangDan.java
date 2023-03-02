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
public class J02026_DayConCoKPhanTuTangDan {

    static int a[], c[], n, k;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            n = sc.nextInt();
            k = sc.nextInt();
            a = new int[n];
            c = new int[20];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            Arrays.sort(a);
            quaylui(1);
        }
    }

    private static void quaylui(int i) {
        for (int j = c[i - 1] + 1; j <= n - k + i; j++) {
            c[i] = j;
            if (i == k) {
                xuly();
            } else {
                quaylui(i + 1);
            }
        }
    }

    private static void xuly() {
        for (int i = 1; i <= k; i++) {
            System.out.print(a[c[i] - 1] + " ");
        }
        System.out.println();
    }
}
/*
1
4 3
3 2 5 4
OUTPUT
2 3 4
2 3 5
2 4 5
3 4 5
 */
