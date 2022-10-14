/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DoThi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class DSA09005_BFSTrenDoThiVoHuong {

    static ArrayList<Integer> dsk[];
    static boolean check[];

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
//        Scanner sc = new Scanner(System.in);
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

            bfs(u);
            System.out.println();
        }
    }

    public static void bfs(int u) {
        Queue<Integer> qu = new LinkedList<>();
        qu.add(u);
        check[u] = true;

        while (!qu.isEmpty()) {
            int x = qu.poll();
            System.out.print(x + " ");

            for (int v : dsk[x]) {
                if (!check[v]) {
                    qu.offer(v);
                    check[v] = true;
                }
            }
        }
    }
}
