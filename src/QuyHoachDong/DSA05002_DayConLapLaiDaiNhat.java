/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package QuyHoachDong;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class DSA05002_DayConLapLaiDaiNhat {

    static int[][] f;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int soTest = Integer.parseInt(scanner.nextLine());
        while (soTest-- > 0) {
            f = new int[150][150];
            int n = Integer.parseInt(scanner.nextLine());
            String s = scanner.nextLine();
            dayConLap(s, n);
        }
    }

    private static void dayConLap(String s, int n) {
        s = " " + s;
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                f[i][j] = 0;
            }
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (s.charAt(i) == s.charAt(j) && i != j) {
                    f[i][j] = f[i - 1][j - 1] + 1;
                } else {
                    f[i][j] = Math.max(f[i - 1][j], f[i][j - 1]);
                }
            }
        }

        System.out.println(f[n][n]);
    }
}
/*
2
3
abc
5
axxxy
OUTPUT
0
2
 */
