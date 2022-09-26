/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.Scanner;

/**
 *
 * @author nhokt
 */
public class TN10_HoanViNguoc {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = n - i;
            }
            for (int j = 0; j < a.length; j++) {
                System.out.print(a[j]);
            }
            System.out.print(" ");
            while (prev_permutation(a)) {
                for (int k = 0; k < a.length; k++) {
                    System.out.print(a[k]);
                }
                System.out.print(" ");
            };
            System.out.println();
        }
    }

    private static boolean prev_permutation(int[] a) {
        int len = a.length;
        int i = len - 1;
        while (i > 0) {
            if (a[i - 1] > a[i]) {
                break;
            }
            i--;
        }
        if (i <= 0) {
            return false;
        }
        int j = len - 1;
        while (j >= i) {
            if (a[i - 1] > a[j]) {
                break;
            }
            j--;
        }
        int tmp = a[i - 1];
        a[i - 1] = a[j];
        a[j] = tmp;
        len--;
        while (i < len) {
            tmp = a[i];
            a[i] = a[len];
            a[len] = tmp;
            len--;
            i++;
        }
        return true;
    }
}
