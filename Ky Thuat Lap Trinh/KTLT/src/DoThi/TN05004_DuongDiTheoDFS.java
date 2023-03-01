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
public class TN05004_DuongDiTheoDFS {

    static int N, M, s;
    static ArrayList<Integer> dsk[] = new ArrayList[1001];
    static boolean check[] = new boolean[1001];
    static int parent[] = new int[1001];

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            N = sc.nextInt();
            M = sc.nextInt();
            s = sc.nextInt();

            for (int i = 0; i <= 1000; i++) {
                dsk[i] = new ArrayList<>();
                check[i] = false;
                parent[i] = -1;
            }

            for (int i = 0; i < M; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                dsk[a].add(b);
                dsk[b].add(a);
            }

            dfs(s);
            for (int i = 1; i <= N; i++) {
                if (s != i) {
                    path(s, i);
                }
            }
        }
    }

    public static void dfs(int s) {
        check[s] = true;
        for (int x : dsk[s]) {
            if (!check[x]) {
                parent[x] = s;
                dfs(x);
            }
        }
    }

    public static void path(int s, int n) {
        ArrayList<Integer> res = new ArrayList();

        if (parent[n] == -1) {
            System.out.println("No path");
            return;
        } else {
            res.add(n);
            while (parent[n] != -1) {
                n = parent[n];
                res.add(n);
            }

            for (int i = res.size() - 1; i >= 0; i--) {
                System.out.print(res.get(i) + " ");
            }
            System.out.println();
        }
    }
}
