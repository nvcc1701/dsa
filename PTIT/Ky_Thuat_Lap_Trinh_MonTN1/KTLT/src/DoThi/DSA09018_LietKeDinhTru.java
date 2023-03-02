/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DoThi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class DSA09018_LietKeDinhTru {

    static int V, E;
    static ArrayList<Integer> dsk[] = new ArrayList[1001];
    static boolean check[] = new boolean[1001];

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
//        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            V = sc.nextInt();
            E = sc.nextInt();

            for (int i = 0; i <= 1000; i++) {
                dsk[i] = new ArrayList<>();
                check[i] = false;
            }

//            Arrays.fill(dsk, new ArrayList<>());
//            Arrays.fill(check, false);

            for (int i = 0; i < E; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                dsk[a].add(b);
                dsk[b].add(a);
            }

            int tplt = 0;
            for (int i = 1; i <= V; i++) {
                if (!check[i]) {
                    tplt++;
                    dfs(i);
                }
            }

            for (int i = 1; i <= V; i++) {
                Arrays.fill(check, false);

                check[i] = true;
                int count = 0;
                for (int j = 1; j <= V; j++) {
                    if (!check[j]) {
                        count++;
                        dfs(j);
                    }
                }

                if (count > tplt) {
                    System.out.print(i + " ");
                }
            }
            System.out.println();
        }
    }

    public static void dfs(int u) {
        check[u] = true;

        for (int x : dsk[u]) {
            if (!check[x]) {
                dfs(x);
            }
        }
    }
}
