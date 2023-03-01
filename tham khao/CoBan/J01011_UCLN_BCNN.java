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
public class J01011_UCLN_BCNN {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int a = in.nextInt();
            int b = in.nextInt();
            int x = ucln(a, b);
            System.out.println((long)a*b/x+" "+x);           
        }
    }
    public static int ucln(int a, int b) {
        while(b>0){
            int t = a%b;
            a=b;b=t;
        }
        return a;
    }

//    public static int bcnn(int a, int b) {
//        return (a * b) / ucln(a, b);
//    }
}
