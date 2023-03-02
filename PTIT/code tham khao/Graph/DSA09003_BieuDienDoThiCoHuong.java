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

public class DSA09003_BieuDienDoThiCoHuong {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            int v = in.nextInt();
            int e = in.nextInt();
            List<Integer>[] list = (List<Integer>[]) new List[1005];
            for (int i = 0; i < list.length; i++) {
                list[i] = new ArrayList<Integer>();
            }
            for (int i = 0; i < e; i++) {
                int u = in.nextInt();
                int k = in.nextInt();
                list[u].add(k);
                //list[k].add(u);
            }
            for (int i = 1; i <= v; i++) {
                System.out.print(i + ": ");
                for (int j = 0; j < list[i].size(); j++) {
                    System.out.print(list[i].get(j) + " ");
                }
                System.out.println();
            }
        }
    }
}
/*
1
6  9 1  2 2  5 3  1 3  2 3  5 4  3 5  4 5  6 6  4
*/