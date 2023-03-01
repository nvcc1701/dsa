/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DoThi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class DSA09001_ChuyenDanhSachCanhSangDanhSachKe {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int v = sc.nextInt();
            int e = sc.nextInt();
            ArrayList<Integer> dske[] = new ArrayList[e + 1];

            for (int i = 1; i <= v; i++) {
                dske[i] = new ArrayList<>();
            }

            for (int i = 0; i < e; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();

                dske[a].add(b);
                dske[b].add(a);
            }

            for (int i = 1; i <= v; i++) {

                System.out.print(i + ": ");
                for (int x : dske[i]) {
                    System.out.print(x + " ");
                }
                System.out.println();
            }
        }
    }
}
