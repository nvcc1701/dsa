/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DeQuy;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class TN11_LietKeTapCon {

    static String s;
    static int a[], n;

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("DATA.in"));
        int t = sc.nextInt();

        while (t-- > 0) {
            String s = sc.nextLine();
            n = s.length();
            a = new int[n];

            for (int i = 0; i < n; i++) {
                a[i] = i;
            }
        }
    }

    public void Try(int i) {
        for (int j = a[i - 1] + 1; j <= n - 1 + i; j++) {
            
        }
    }
}
