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
public class DSA10007_CayKhungTheoBFS {

    static List<Integer>[] list = (List<Integer>[]) new List[1005];
    static int[] check = new int[1005];
    static boolean[] chuaxet = new boolean[1005];
    static Queue<Integer> queue = new LinkedList<>();

    static void BFS(int start) {
        queue.add(start);
        check[start] = 0;
        System.out.print(start + " ");
        while (!queue.isEmpty()) {
            int x = queue.poll();
            for (int i = 0; i < list[x].size(); i++) {
                int y = list[x].get(i);
                if (check[y] == 1) {
                    System.out.print(y);
                    queue.add(y);
                    check[y] = 0;
                }
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
            int n = sc.nextInt();
            int m = sc.nextInt();
            int u = sc.nextInt();
            for (int i = 0; i < n; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                list[a].add(b);
                list[b].add(a);
            }
            for (int i = 0; i < check.length; i++) {
                check[i] = 1;
            }
            BFS(u);
            System.out.println();
        }
    }
}


/*
TEST:
2
test 1:
4 4 2
1 2 1 3 2 4 3 4
test 2:
4 2 2
1 2 3 4

OUTPUT:
2 1
2 4
1 3
-1

 */
