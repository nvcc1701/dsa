/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package CoBan;

import java.math.BigInteger;
import java.util.*;

/**
 *
 * @author nhokt
 */
public class J03015_HieuSoNguyenLon2 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String input1 = in.next();
        String input2 = in.next();
        BigInteger a = new BigInteger(input1);
        BigInteger b = new BigInteger(input2);
        BigInteger kq = a.subtract(b);
        System.out.println(kq);

    }
}
