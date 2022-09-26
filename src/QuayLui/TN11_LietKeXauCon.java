/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package QuayLui;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author nhokt
 */
public class TN11_LietKeXauCon {

     static int b[],n;
    static String s;
    static ArrayList<String> kq;

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            b = new int[20]; kq = new ArrayList<>();
            n = in.nextInt(); s = in.next();
            quaylui(1);
            Collections.sort(kq);
            for (String s : kq) {
                System.out.print(s + " ");
            }
            System.out.println();
        }
    }

    public static void quaylui(int i) {
        for (int j = 0; j <= 1; j++) {
            b[i] = j;
            if (i == n) {
                xuly();
            } else {
                quaylui(i + 1);
            }
        }
    }

    public static void xuly() {
        String tmp = "";
        for (int i = 0; i <= n; i++) {
            if (b[i] == 1) {
                tmp += s.charAt(i - 1);
            }
        }
        kq.add(tmp);
    }
}
