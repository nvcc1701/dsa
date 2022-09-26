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
public class J02030_SXChenLKNguoc {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), a[] = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        sapxep(a, n);

    }

    public static void sapxep(int a[], int n) {
        int i, j, t;
        ArrayList<String> list = new ArrayList<>();
        list.add("Buoc 0: " + a[0]);
        for (i = 1; i < n; i++) {
            t = a[i];
            j = i-1;
            while (j >= 0 && a[j] > t) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = t;
            String tmp = "Buoc " + i + ":";
            for (j = 0; j <= i; j++) {
                tmp = tmp + " " + a[j];
            }
            list.add(tmp);
        }
        Collections.reverse(list);
        for (String tmp : list) {
            System.out.println(tmp);
        }

    }
}
