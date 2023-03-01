/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package CoBan;

import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author nhokt
 */
public class TN01007_ChiaHet {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-->0) {            
            BigInteger a = in.nextBigInteger();
            BigInteger b = in.nextBigInteger();
            BigInteger zero= new BigInteger("0");
            if (a.mod(b).equals(zero)||b.mod(a).equals(zero)) {
                System.out.println("YES");
            }
            else
                System.out.println("NO");
        }
    }
}
