/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 

import java.util.*;

/**
 *
 * @author nhokt
 */
public class TN17_DoiChoChuSo {

    static int k;
    static String st;
//    public static void main(String[] args) {
//        Scanner in = new Scanner(System.in);
//        int t = in.nextInt();
//        for (int i = 0; i < t; i++) {
//            int k = in.nextInt();
//            String s = in.nextLine();
////            String reverseS = swap(s);
////            System.out.println(reverseS);
//            for (int j = 0; j < s.length(); j++) {
//                //int Max = s[s.length()-1];
//            }
//        }
//    }
//
//    public static String swap(String s) {
//        String s1 = "";
//        for (int i = 0; i < s.length(); i++) {
//            if (true) {
//                s1 += s.charAt(s.length() - 1 - i);
//            }
//        }
//        return s1;
//    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            k = in.nextInt();
            st = in.nextLine();
            for (int i = 0; i < st.length(); i++) {
                char Max = st.charAt(st.length() - 1);
                int vitri = st.length() - 1;
                for (int j = st.length() - 1; j > i && k > 0; j--) {
                    if (Max < st.charAt(j)) {
                        Max = st.charAt(j);
                        vitri = j;
                    }
                }
                if (Max > st.charAt(i) && k > 0) {
                    st = swap(i, vitri);
                    k--;
                }
            }
            System.out.println(st);

        }
    }

    public static String swap(int i, int vitri) {
        StringBuilder sb = new StringBuilder(st);
        char a = sb.charAt(i);
        char b = sb.charAt(vitri);
        sb.setCharAt(i, b);
        sb.setCharAt(vitri, a);
        return new String(sb);
    }
}
