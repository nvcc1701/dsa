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
public class DSA09018_LietKeDinhTru {

    static List<Integer>[] listKe = (List<Integer>[]) new List[1005];
    static boolean[] check = new boolean[1005];
    static int[] before = new int[1005];

    static void DFS(int u) {
        check[u] = true;
        for (int i = 0; i < listKe[u].size(); i++) {
            int v = listKe[u].get(i);
            if (!check[v]) {
                before[v] = u;
                DFS(v);
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            check = new boolean[1005];
            for (int i = 0; i < listKe.length; i++) {
                listKe[i] = new ArrayList<>();
            }
            int a = sc.nextInt();
            int b = sc.nextInt();
            for (int i = 0; i < b; i++) {
                int u = sc.nextInt();
                int v = sc.nextInt();
                listKe[u].add(v);
                listKe[v].add(u);
            }
            int res = 0;
            for (int i = 1; i <= a; i++) {
                if (check[i] == false) {
                    res++;
                    DFS(i);
                }
            }
            for (int i = 1; i <= a; i++) {
                for (int j = 0; j < 1005; j++) {
                    check[j] = false;
                }
                check[i] = true;
                int count = 0;
                for (int j = 1; j <= a; j++) {
                    if (check[j] == false) {
                        count++;
                        DFS(j);
                    }
                }
                if (count > res) {
                    System.out.print(i + " ");
                }
            }
            System.out.println();
        }
    }
}
/*
1
5 5
1 2 1 3 2 3 2 5 3 4
OUTPUT

2 3
*/
