/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package CoBan;

import java.util.*;

public class TN01_Fibonacci {
        public static void main(String[] args){
            long f[] = new long[100];
            f[0] =0; f[1] =1;
            for(int i=2; i<=92 ; i++) f[i] = f[i-1] + f[i-2];
            Scanner in = new Scanner(System.in);
            int t = in.nextInt();
            while (t-->0) {                
                int n = in.nextInt();
                System.out.println(f[n]);
            }
        }
}
