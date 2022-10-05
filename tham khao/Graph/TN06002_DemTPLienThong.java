/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Graph;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class TN06002_DemTPLienThong {

    static int n, m;
    static ArrayList<Integer> dske[] = new ArrayList[1005];
    static boolean chuaXet[] = new boolean[1005];

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            n = scanner.nextInt();
            m = scanner.nextInt();
            for (int i = 0; i <= 1000; i++) {
                dske[i] = new ArrayList<>();
                chuaXet[i] = true;
            }
            for (int i = 1; i <= m; i++) {
                int u = scanner.nextInt(), v = scanner.nextInt();
                dske[u].add(v);
                dske[v].add(u);
            }
            int dem = 0;
            for (int i = 1; i <= n; i++) {
                if (chuaXet[i]) {
                    dem++;
                    dfs(i);
                }
            }
            System.out.println(dem);
        }
    }

    private static void dfs(int u) {
        chuaXet[u] = false;
        for (Integer v : dske[u]) {
            if (chuaXet[v]) {
                dfs(v);
            }
        }
    }
}
