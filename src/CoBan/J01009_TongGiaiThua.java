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
public class J01009_TongGiaiThua {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        long S = 0;
        for (int i = 1; i <= t; i++) {
            S += tinhgiaithua(i);
        }
        System.out.println(S);

    }

    public static long tinhgiaithua(int n) {
        long gt = 1;
        for (int i = 1; i <= n; i++) {
            gt *= i;
        }
        return gt;
    }
}
