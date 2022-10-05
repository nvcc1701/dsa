/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package test;

import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class KiemTraChiaHet {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("SONGUYEN.in"));
        int t = Integer.parseInt(sc.nextLine());
        BigInteger zero = new BigInteger("0");
        boolean div7, div13;

        while (t-- > 0) {
            String s = sc.nextLine();
            BigInteger x = new BigInteger(s);
            div7 = false;
            div13 = false;

            if (x.mod(new BigInteger("7")).equals(zero)) {
                div7 = true;
            }

            if (x.mod(new BigInteger("13")).equals(zero)) {
                div13 = true;
            }

            if (div7 && div13) {
                System.out.println("Both");
            } else if (div7) {
                System.out.println("Div 7");
            } else if (div13) {
                System.out.println("Div 13");
            } else {
                System.out.println("None");
            }
        }
    }
}
