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
public class TN08_XauNhiPhanKeTiep {

   public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(System.in);
        int n=Integer.valueOf(sc.nextLine());
        while (n-->0){
            System.out.println(nextGreater(sc.nextLine()));
        }
    }

    private static String nextGreater(String num) {
        int l = num.length();
        int i;
        for (i = l - 1; i >= 0; i--) {
            if (num.charAt(i) == '0') {
                num = num.substring(0, i) + '1' + num.substring(i+1);
                break;
            }
            else {
                num = num.substring(0, i) + '0' + num.substring(i + 1);
            }
        }
        return num;
    }
}
