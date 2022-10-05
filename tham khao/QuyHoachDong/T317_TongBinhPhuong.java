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
public class T317_TongBinhPhuong {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            long[] dp = new long[n + 5];
            for (int i = 0; i <= n; i++) {
                dp[i] = i;
            }
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= Math.sqrt(i); j++) {
                    dp[i] = Math.min(dp[i], dp[i - j * j] + 1);
                }
            }
            System.out.println(dp[n]);
        }
    }
}
/*
3
100
6
25
OUTPUT
1
3
1

*/
