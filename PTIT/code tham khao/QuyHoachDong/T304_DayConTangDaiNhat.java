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
public class T304_DayConTangDaiNhat {

   public static void main(String[] args) {
       int dem = 0;
       int[] a = new int[1005];
       int[] kq = new int[1005];

       Scanner sc = new Scanner(System.in);
       int n = sc.nextInt();
       for (int i = 1; i <= n; i++) {
           a[i] = sc.nextInt();
       }
       for (int i = 1; i <= n; i++) {
           kq[i] = 1;
           for (int j = 1; j < i; j++) {
               if (a[i] > a[j]) {
                   kq[i] = Math.max(kq[i], kq[j] + 1);
               }
           }
           dem = Math.max(dem, kq[i]);
       }
       System.out.println(dem);
   }
}
