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
public class TN27_NhamChuSo {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        String min_a = a.replace("6", "5");
        String max_a = a.replace("5", "6");
        String min_b = b.replace("6", "5");
        String max_b = b.replace("5", "6");
        int min = Integer.parseInt(min_a) + Integer.parseInt(min_b);
        int max = Integer.parseInt(max_a) + Integer.parseInt(max_b);
        System.out.println(min + " " + max);

    }
}
