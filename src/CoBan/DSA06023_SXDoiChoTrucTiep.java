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
public class DSA06023_SXDoiChoTrucTiep {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    int tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
            if (!isSorted(a)) {
                in(a, i + 1);
            } else {
                in(a, i + 1);
                break;
            }
        }
    }

    private static boolean isSorted(int[] a) {
        for (int i = 0; i < a.length - 1; i++) {
            if (a[i] > a[i + 1]) {
                return false;
            }
        }
        return true;
    }

    private static void in(int[] a, int buoc) {
        System.out.format("Buoc %d: ", buoc);
        for (int i = 0; i < a.length; i++) {
            System.out.format("%d ", a[i]);
        }
        System.out.println();
    }
}
