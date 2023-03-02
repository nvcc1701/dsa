/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DoThi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.TreeSet;

/**
 *
 * @author anhnguyen
 */
public class TN06003_LienThong {

    static int n, m, x;
    static ArrayList<Integer> dsk[] = new ArrayList[301];
    static boolean check[] = new boolean[301];
    static TreeSet<Integer> lt;

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();
        x = sc.nextInt();
        lt = new TreeSet<>();

        for (int i = 0; i <= 300; i++) {
            dsk[i] = new ArrayList<>();
            check[i] = false;
        }

        for (int i = 0; i < m; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            dsk[a].add(b);
            dsk[b].add(a);
        }

        for (int i = 1; i <= n; i++) {
            lt.add(i);
        }

        dfs(x);

        if (lt.isEmpty()) {
            System.out.println("0");
        } else {
            for (int x : lt) {
                System.out.println(x);
            }
        }
    }

    public static void dfs(int u) {
        lt.remove(u);
        check[u] = true;

        for (int x : dsk[u]) {
            if (!check[x]) {
                dfs(x);
            }
        }
    }
}
