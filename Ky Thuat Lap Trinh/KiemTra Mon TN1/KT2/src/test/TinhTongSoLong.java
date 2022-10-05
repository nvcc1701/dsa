/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package test;

import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class TinhTongSoLong {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        BigInteger tong = new BigInteger("0");

        while (sc.hasNextLine()) {
            StringTokenizer st = new StringTokenizer(sc.nextLine());
            while (st.hasMoreTokens()) {
                String s = st.nextToken();

                try {
                    Integer.parseInt(s);
                } catch (Exception e) {
                    try {
                        Long.parseLong(s);
                        tong = tong.add(new BigInteger(s));
                    } catch (NumberFormatException e2) {

                    }
                }
            }
        }

        System.out.println(tong);
    }
}
