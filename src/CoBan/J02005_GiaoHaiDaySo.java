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
public class J02005_GiaoHaiDaySo {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), m = in.nextInt(), a[] = new int[n], b[] = new int[m];
        boolean A[] = new boolean[1000], B[] = new boolean[1000];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
            A[a[i]] = true;
        }
        for (int i = 0; i < m; i++) {
            b[i] = in.nextInt();
            B[b[i]] = true;
        }
        for (int i = 0; i < 1000; i++) {
            if (A[i] && B[i]) {
                System.out.print(i + " ");

            }
        }
    }
}
