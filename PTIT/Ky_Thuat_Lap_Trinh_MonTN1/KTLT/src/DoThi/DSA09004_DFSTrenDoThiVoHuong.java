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
public class DSA09004_DFSTrenDoThiVoHuong {

    static boolean check[];
    static ArrayList<Integer> dsk[];

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int v = sc.nextInt();
            int e = sc.nextInt();
            int u = sc.nextInt();
            dsk = new ArrayList[v + 1];
            check = new boolean[v + 1];

            for (int i = 1; i <= v; i++) {
                dsk[i] = new ArrayList<>();
            }

            for (int i = 0; i < e; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                dsk[a].add(b);
                dsk[b].add(a);
            }

            dfs(u);
            System.out.println();
        }
    }

    public static void dfs(int u) {
        System.out.print(u + " ");
        check[u] = true;
        for (int x : dsk[u]) {
            if (!check[x]) {
                dfs(x);
            }
        }
    }
}
