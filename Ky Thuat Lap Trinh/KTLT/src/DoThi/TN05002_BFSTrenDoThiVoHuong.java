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
public class TN05002_BFSTrenDoThiVoHuong {

    static int V, E, u;
    static ArrayList<Integer> dsk[] = new ArrayList[1001];
    static boolean check[] = new boolean[1001];
    static ArrayList<Integer> res;

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("DATA.in"));
        int t = sc.nextInt();

        while (t-- > 0) {
            V = sc.nextInt();
            E = sc.nextInt();
            u = sc.nextInt();

            for (int i = 0; i <= 1000; i++) {
                dsk[i] = new ArrayList<>();
                check[i] = false;
            }

            for (int i = 0; i < E; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                dsk[a].add(b);
                dsk[b].add(a);
            }

            res = new ArrayList<>();
            bfs(u);

            System.out.print("BFS(" + u + ") = ");
            for (int i = 0; i < res.size() - 1; i++) {
                System.out.print(res.get(i) + " -> ");
            }
            System.out.print(res.get(res.size() - 1));
            System.out.println();
        }
    }

    public static void bfs(int u) {
        Queue<Integer> q = new LinkedList<>();
        q.offer(u);
        check[u] = true;

        while (!q.isEmpty()) {
            int peek = q.poll();

            res.add(peek);

            for (int x : dsk[peek]) {
                if (!check[x]) {
                    q.offer(x);
                    check[x] = true;
                }
            }
        }
    }
}
