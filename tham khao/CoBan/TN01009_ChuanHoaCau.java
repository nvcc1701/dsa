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
public class TN01009_ChuanHoaCau {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String s = in.nextLine();

        String s2 = s.substring(0, 1).toUpperCase() + s.substring(1).toLowerCase();
        // xóa dấu cách.
        String string2 = s2.replaceAll("\\s+", " ");
        String string3 = string2.replace(" !", "!");
        System.out.println(string3);
        //nếu gặp dấu .;!;? thì xuống dòng

    }
}
