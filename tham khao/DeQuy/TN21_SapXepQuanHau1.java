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
public class TN21_SapXepQuanHau1 {

    static boolean cot[] = new boolean[50];
    static boolean cheoXuoi[] = new boolean[50];
    static boolean cheoNguoc[] = new boolean[50];
    static int n, ans;

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            n = in.nextInt();
            ans = 0;
            for (int i = 0; i <= n; i++) {
                cot[i] = true;
            }
            for (int j = 0; j <= 2 * n; j++) {
                cheoXuoi[j] = true;
                cheoNguoc[j] = true;
            }
            quaylui(1);
            System.out.println(ans);
        }
    }

    static void quaylui(int i) {
        for (int j = 1; j <= n; j++) {
            if (cot[j] && cheoXuoi[n + i - j] && cheoNguoc[i + j]) {
                cot[j] = false;
                cheoXuoi[n + i - j] = false;
                cheoNguoc[i + j] = false;
                if (i == n) {
                    ans++;
                } else {
                    quaylui(i + 1);
                }
                cot[j] = true;
                cheoXuoi[n + i - j] = true;
                cheoNguoc[i + j] = true;
            }
        }
    }
}
