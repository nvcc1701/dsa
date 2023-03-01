/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package CoBan;

import java.util.Scanner;

/**
 *
 * @author nhokt
 */
public class TN07_RutGonXauKyTu {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String chars = in.nextLine();
        System.out.println(rutgon(chars));
    }

    public static String rutgon(String chars) {
        boolean check = false;
        for (int i = 0; i < chars.length() - 1; i++) {
            if (chars.charAt(i) == chars.charAt(i + 1)) {
                check = true;
                chars = chars.substring(0, i) + chars.substring(i + 2, chars.length());

            }

        }
        if (chars.length() == 0) {
            return "Empty String";
        }
        if (check == false) {
            return new String(chars);

        } else {
            return rutgon(chars);
        }
    }
}
