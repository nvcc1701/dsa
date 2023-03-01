/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DoThi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.TreeSet;

/**
 *
 * @author anhnguyen
 */
public class S301_DuongDiCoHuong {

    static TreeSet<Integer> dsk[] = new TreeSet[1001];
    static boolean check[] = new boolean[1001];
    static int parent[] = new int[1001];

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {

            int n = sc.nextInt();
            int e = sc.nextInt();
            int u = sc.nextInt();
            int v = sc.nextInt();

            for (int i = 0; i <= n; i++) {
                dsk[i] = new TreeSet<>();
                check[i] = false;
                parent[i] = 0;
            }

            for (int i = 0; i < e; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                dsk[a].add(b);
            }

            path(u, v);
        }
    }

    public static void bfs(int u, int v) {
        Queue<Integer> q = new LinkedList<>();
        q.offer(u);
        check[u] = true;

        while (!q.isEmpty()) {
            int peek = q.poll();

            check[peek] = true;

            for (int x : dsk[peek]) {
                if (!check[x]) {
                    q.offer(x);
                    parent[x] = peek;
                    check[x] = true;
                }
            }
        }
    }

    public static void path(int u, int v) {

        bfs(u, v);

        if (!check[v]) {
            System.out.println("-1");
            return;
        } else {
            ArrayList<Integer> path = new ArrayList<>();
            while (v != u) {
                path.add(v);
                v = parent[v];
            }

            path.add(u);

            Collections.reverse(path);

            for (int i = 0; i < path.size() - 1; i++) {
                System.out.print(path.get(i) + " -> ");
            }
            System.out.print(path.get(path.size() - 1));
            System.out.println();
        }
    }
}