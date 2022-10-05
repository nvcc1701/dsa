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
public class TN02_UocSoNguyenToLonNhat {

    public static long x;

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            long i,n = in.nextLong();
            for ( i = 2; i <= Math.sqrt(n); i++) {
                if (i*i==n) {
                    n/=i;
                    break;
                }
                while(n%i==0) n/=i;
            }
            System.out.println(n);
        }
    }
}
