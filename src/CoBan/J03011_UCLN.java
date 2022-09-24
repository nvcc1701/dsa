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
public class J03011_UCLN {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            String input1 = in.next();
            String input2 = in.next();
            BigInteger a = new BigInteger(input1);
            BigInteger b = new BigInteger(input2);
            BigInteger result = a.gcd(b);
            System.out.println(result);
//                System.out.println(ucln(a, b));            
        }
    }


}
