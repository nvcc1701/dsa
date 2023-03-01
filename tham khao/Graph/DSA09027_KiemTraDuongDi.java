/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Graph;

import static Graph.DSA09006_DuongDiDFS_DoThiVoHuong.check;
import java.util.*;

/**
 *
 * @author nhokt
 */
public class DSA09027_KiemTraDuongDi {

    static List<Integer>[] list = (List<Integer>[]) new List[1005];
    static int[] check = new int[1005];
    static int[] before = new int[1005];

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int test = in.nextInt();
        while (test-- > 0) {
            for (int i = 0; i < list.length; i++) {
                list[i] = new ArrayList<>();
            }
            int n = in.nextInt();
            int m = in.nextInt();
            for (int i = 0; i < m; i++) {
                int u = in.nextInt();
                int v = in.nextInt();
                list[u].add(v);
                list[v].add(u);
            }
            int q = in.nextInt();
            while (q-- > 0) {
                int x = in.nextInt();
                int y = in.nextInt();
                BFS(x, y);
            }
        }
    }

    private static void BFS(int x, int y) {
        Stack<Integer> stack = new Stack<>();
        stack.push(x);
        check[x] = 0;
        while (!stack.isEmpty()) {
            int u = stack.pop();
            for (int i = 0; i < list[u].size(); i++) {
                int v = list[u].get(i);
                if (check[v] == 1) {
                    check[v] = 0;
                    stack.push(u);
                    stack.push(v);
                    //before[v] = u;
                    break;
                }
            }
        }
        if (before[y] == 0) {
            System.out.print("NO");
        } else {
            System.out.print("YES");
        }
    }
}
