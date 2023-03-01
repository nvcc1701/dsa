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
public class T313_XemPhim {

    static int[][] dp = new int[101][25001];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int W = sc.nextInt();
        int n = sc.nextInt();
        int[] arr = new int[n + 5];
        for (int i = 1; i <= n; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= W; j++) {
                if (j >= arr[i]) {
                    dp[i][j] = Math.max(dp[i - 1][j], dp[i - 1][j - arr[i]] + arr[i]);
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        System.out.println(dp[n][W]);
    }
}
/*
259 5
81
58
42
33
61
*/