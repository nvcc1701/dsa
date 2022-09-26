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
public class T315_KyTuGiongNhau {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            int insert = in.nextInt();
            int delete = in.nextInt();
            int copy = in.nextInt();
            int[] dp = new int[n+5];
            dp[0] = 0;
            dp[1] = insert;
            for (int i = 1; i <=n; i++) {
                if (i%2==1) {
                    dp[i] = Math.min(dp[i-1]+insert, dp[(i+1)/2]+copy+delete);
                } else{
                    dp[i]=Math.min(dp[i-1]+insert, dp[i/2]+copy);
                }
            }
            System.out.println(dp[n]);
        }
    }
}
