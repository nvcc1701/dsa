/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package QuayLui;

import java.util.Scanner;

/**
 *
 * @author nhokt
 */
public class XauNhiPhan {

    static int b[], n;

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        quaylui(1);
        
    }

    public static void quaylui(int i) {
        for (int j = 0; j <= 1; j++) {
            b[i] = j;
            if (i == n) {
                in();
            } else {
                quaylui(i + 1);
            }
        }
    }

    public static void in() {
        for (int i = 0; i <=n ; i++) {
            
        }
    }
    
    
}
