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
public class T305_TongLonNhatCuaDayConTangDan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int tong;
        int b[], a[];
        while (t-- > 0) {
            int n = sc.nextInt();
            a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            b = new int[n];
            tong = 0;
            for (int j = 0; j < n; j++) {
                b[j]=a[j];
                for (int i = 0; i < j; i++) {
                    if (a[j]>a[i]) {
                        b[j]=Math.max(b[j], b[i]+a[j]);
                    }
                }
                tong=Math.max(tong, b[j]);
            }
            System.out.println(tong);
        }
    }
}
