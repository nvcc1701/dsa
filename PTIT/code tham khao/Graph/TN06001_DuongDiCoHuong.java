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
public class TN06001_DuongDiCoHuong {

    static List<Integer>[] list = (List<Integer>[]) new List[1005];
    static int[] check = new int[1005];
    static int[] before = new int[1005];
    static int start, end;

    static int[] traceBFS(int start, int end) {
        Queue<Integer> queue = new LinkedList<>();
        queue.add(start);
        check[start] = 0;
        while (!queue.isEmpty()) {
            int u = queue.poll();
            for (int i = 0; i < list[u].size(); i++) {
                int v = list[u].get(i);
                if (check[v] == 1) {
                    check[v] = 0;
                    queue.add(v);
                    before[v] = u;
                }
            }
        }
        return before;
    }

    static void solve(int start, int end) {
        traceBFS(start, end);
        if (before[end] == 0) {
            System.out.println("-1");
        } else {
            Stack<Integer> stack = new Stack<>();
            stack.push(end);
            int u = before[end];
            while (u != start) {
                stack.push(u);
                u = before[u];
            }
            stack.push(start);
            while (!stack.isEmpty()) {
                if (stack.size() != 1) {
                    System.out.print(stack.pop() + " -> ");
                } else {
                    System.out.print(stack.pop());
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int test = in.nextInt();
        while (test-- > 0) {
            for (int i = 0; i < list.length; i++) {
                list[i] = new ArrayList<>();
            }
            int u = in.nextInt();
            int v = in.nextInt();
            int s = in.nextInt();
            int t = in.nextInt();
            for (int i = 0; i < v; i++) {
                int x = in.nextInt();
                int y = in.nextInt();
                list[x].add(y);
                //list[y].add(x);
            }
            for (int i = 0; i < check.length; i++) {
                check[i] = 1;
            }
            solve(s, t);
            System.out.println();
        }
    }
}

//  1
//  6 9 1 6

//  1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4
