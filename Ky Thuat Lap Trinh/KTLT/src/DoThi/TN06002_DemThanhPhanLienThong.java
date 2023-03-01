/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DoThi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class TN06002_DemThanhPhanLienThong {

    static int N, M;
    static ArrayList<Integer> dsk[] = new ArrayList[20001];
    static boolean check[] = new boolean[20001];

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
//        Scanner sc = new Scanner(System.in);

        N = sc.nextInt();
        M = sc.nextInt();

        for (int i = 0; i < 20001; i++) {
            dsk[i] = new ArrayList<>();
            check[i] = false;
        }

        for (int i = 0; i < M; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            dsk[a].add(b);
            dsk[b].add(a);
        }

        for (int i = 1; i <= N; i++) {
            Arrays.fill(check, false);
            check[i] = true;

            int count = 0;
            for (int j = 1; j <= N; j++) {
                if (!check[j]) {
                    count++;
                    dfs(j);
                }
            }

            System.out.println(count);
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
