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
public class TN05001_DFSTrenDoThiVoHuong {

    static List<Integer>[] list = (List<Integer>[]) new List[1005];
    static int[] check = new int[1005];
    static Queue<Integer> queue = new LinkedList<>();

    static void DFS(int start) {
        check[start] = 0;
        System.out.print(start);
        for (int i = 0; i < list[start].size(); i++) {
            int v = list[start].get(i);
            if (check[v] == 1) {
                System.out.print(" -> ");
                DFS(v);
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            for (int i = 0; i < list.length; i++) {
                list[i] = new ArrayList<>();
            }
            int a = sc.nextInt();
            int n = sc.nextInt();
            int start = sc.nextInt();
            for (int i = 0; i < n; i++) {
                int u = sc.nextInt();
                int v = sc.nextInt();
                list[u].add(v);
                list[v].add(u);
            }
            for (int i = 0; i < check.length; i++) {
                check[i] = 1;
            }
            System.out.print("DFS(" + start + ") = ");
            DFS(start);
            System.out.println();
        }
    }
}
/*
TEST:
1
6 9 5
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

OUTPUT:
DFS(5) = 5 -> 3 -> 1 -> 2 -> 4 -> 6
 */
