/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package CoBan;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class TN28_TongNhoNhat {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            int a[] = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = in.nextInt();
            }
            Arrays.sort(a, 0, n);
            String s1 = "", s2 = "";
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    s1 += String.valueOf(a[i]);
                } else {
                    s2 += String.valueOf(a[i]);
                }
            }
            long sum = Long.parseLong(s1) + Long.parseLong(s2);
            System.out.println(sum);
        }
    }
}
