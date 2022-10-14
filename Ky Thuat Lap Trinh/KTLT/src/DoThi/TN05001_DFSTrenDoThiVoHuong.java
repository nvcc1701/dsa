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
public class TN05001_DFSTrenDoThiVoHuong {

    static int V, E, u;
    static ArrayList<Integer> dsk[] = new ArrayList[1001];
    static boolean check[] = new boolean[1001];
    static ArrayList<Integer> res;

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
//        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            for (int i = 0; i < 1001; i++) {
                dsk[i] = new ArrayList<>();
                check[i] = false;
            }

            V = sc.nextInt();
            E = sc.nextInt();
            u = sc.nextInt();

            for (int i = 0; i < E; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                dsk[a].add(b);
                dsk[b].add(a);
            }

            res = new ArrayList<>();
            dfs(u);

            System.out.print("DFS(" + u + ") = ");
            for (int i = 0; i < res.size() - 1; i++) {
                System.out.print(res.get(i) + " -> ");
            }
            System.out.print(res.get(res.size() - 1));
            System.out.println();
        }
    }

    public static void dfs(int u) {
        res.add(u);
        check[u] = true;

        for (int x : dsk[u]) {
            if (!check[x]) {
                dfs(x);
            }
        }
    }
}
