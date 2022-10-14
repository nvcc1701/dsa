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
public class DSA09007_DuongDiTheoBFSTrenDoThiVoHuong {

    static int V, E, s, e;
    static ArrayList<Integer> dsk[] = new ArrayList[1001];
    static boolean check[] = new boolean[1001];
    static int parent[] = new int[1001];

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0) {
            V = sc.nextInt();
            E = sc.nextInt();
            s = sc.nextInt();
            e = sc.nextInt();

            for (int i = 0; i <= 1000; i++) {
                dsk[i] = new ArrayList<>();
                check[i] = false;
                parent[i] = -1;
            }

            for (int i = 0; i < E; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                dsk[a].add(b);
                dsk[b].add(a);
            }

            bfs(s);
            path(s, e);
        }
    }

    public static void bfs(int u) {
        Queue<Integer> q = new LinkedList<>();
        q.offer(u);
        check[u] = true;

        while (!q.isEmpty()) {
            int peek = q.poll();

            for (int x : dsk[peek]) {
                if (!check[x]) {
                    q.offer(x);
                    parent[x] = peek;
                    check[x] = true;
                }
            }
        }
    }

    public static void path(int s, int e) {
        if (parent[e] == -1) {
            System.out.println("-1");
            return;
        } else {
            ArrayList<Integer> res = new ArrayList<>();
            res.add(e);

            while (parent[e] != -1) {
                e = parent[e];
                res.add(e);
            }

            for (int i = res.size() - 1; i >= 0; i--) {
                System.out.print(res.get(i) + " ");
            }
            System.out.println();
        }
    }
}
