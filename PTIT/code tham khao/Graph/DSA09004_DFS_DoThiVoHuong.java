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
public class DSA09004_DFS_DoThiVoHuong {

    static List<Integer>[] list = (List<Integer>[]) new List[1005];
    static int[] check = new int[1005];

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            for (int i = 0; i < 1005; i++) {
                list[i] = new ArrayList<Integer>();
            }
            int v = in.nextInt();
            int e = in.nextInt();
            int u = in.nextInt();
            for (int i = 0; i < e; i++) {
                int x = in.nextInt();
                int y = in.nextInt();
                list[x].add(y);
                list[y].add(x);
            }
            for (int i = 0; i < check.length; i++) {
                check[i] = 1;
            }
            DFS(u);
            System.out.println();
        }
    }

    static void DFS(int u) {
        check[u] = 0;
        System.out.print(u + " ");
        for (int i = 0; i < list[u].size(); i++) {
            int v = list[u].get(i);
            if (check[v] == 1) {
                DFS(v);
            }
        }
    }
}


/*
INPUT:
1
6 9 5
1 2 1 3 2 3 2 4 3 4 3 5 4 5 4 6 5 6

OUTPUT:
5 3 1 2 4 6


 */
