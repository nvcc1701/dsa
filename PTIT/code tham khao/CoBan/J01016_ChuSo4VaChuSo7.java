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
public class J01016_ChuSo4VaChuSo7 {

    static int dem = 0;

    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        int i, j;
        char so4 = '4';
        char so7 = '7';

        for (i = 0; i < s.length(); i++) {
            if (so4 == s.charAt(i)) {
                dem++;
            }
        }
        for (j = 0; j < s.length(); j++) {
            if (so7 == s.charAt(j)) {
                dem++;
            }
        }
        if (dem == 4 || dem == 7) {
            System.out.println("YES");
        } else {

            System.out.println("NO");
        }
    }

}
