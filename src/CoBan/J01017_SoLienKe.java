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
public class J01017_SoLienKe {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int t = Integer.valueOf(sc.nextLine());
        
        while (t-- > 0) {
            String s = sc.nextLine();
            int i;
            for (i = 1; i < s.length(); i++) {
                if (Math.abs(s.charAt(i) - s.charAt(i - 1)) != 1) {
                    System.out.println("NO");
                    break;
                }
            }
            if (i == s.length()) {
                System.out.println("YES");
            }
        }
    }
}
