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
public class TN06001_DuongDiCoHuong {

    static int V, E, u, v;
    static ArrayList<Integer> dsk[] = new ArrayList[1001];
    static boolean check[] = new boolean[1001];
    static int parent[] = new int[1001];

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        int t = sc.nextInt();

        while (t-- > 0) {
            V = sc.nextInt();
            E = sc.nextInt();
            u = sc.nextInt();
            v = sc.nextInt();

            for (int i = 0; i <= 1000; i++) {
                dsk[i] = new ArrayList<>();
                check[i] = false;
                parent[i] = -1;
            }

            for (int i = 0; i < E; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                dsk[a].add(b);
            }

            bfs(u, v);
            path(u, v);
        }
    }

    public static void bfs(int s, int n) {
        Queue<Integer> q = new LinkedList<>();
        q.offer(s);
        check[s] = true;

        while (!q.isEmpty()) {
            int peek = q.poll();

            for (int x : dsk[peek]) {
                if (x == n) {
                    parent[n] = peek;
                    return;
                }

                if (!check[x]) {
                    q.offer(x);
                    parent[x] = peek;
                    check[x] = true;
                }
            }
        }
    }

    public static void path(int s, int n) {
        ArrayList<Integer> res = new ArrayList<>();
        res.add(n);

        if (parent[n] == -1) {
            System.out.println("-1");
            return;
        }

        while (parent[n] != -1) {
            n = parent[n];
            res.add(n);
        }

        for (int i = res.size() - 1; i > 0; i--) {
            System.out.print(res.get(i) + " -> ");
        }
        System.out.print(res.get(0) + "\n");
    }
}