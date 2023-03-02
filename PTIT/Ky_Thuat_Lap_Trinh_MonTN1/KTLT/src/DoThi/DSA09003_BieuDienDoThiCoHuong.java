/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DoThi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class DSA09003_BieuDienDoThiCoHuong {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int v = sc.nextInt();
            int e = sc.nextInt();
            ArrayList<Integer> arr[] = new ArrayList[v + 1];

            for (int i = 1; i <= v; i++) {
                arr[i] = new ArrayList<>();
            }

            for (int i = 0; i < e; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                arr[a].add(b);
            }

            for (int i = 1; i <= v; i++) {
                System.out.print(i + ": ");
                for (Integer x : arr[i]) {
                    System.out.print(x + " ");
                }
                System.out.println();
            }
        }
    }
}
