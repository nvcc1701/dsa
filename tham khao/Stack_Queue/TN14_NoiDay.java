/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Stack_Queue;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class TN14_NoiDay {

    static long mod = (int) 1e9 + 7;

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();

        while (t-- > 0) {
            PriorityQueue<Long> a = new PriorityQueue<>();
            long k;
            int n = in.nextInt();
            for (int i = 0; i < n; i++) {
                k = in.nextLong();
                a.add(k);
            }
            long kq = 0;
            while (a.size() > 1) {
                long x = a.poll();
                long y = a.poll();
                long temp = (x + y) % mod;
                a.add(temp);
                kq += temp;
                kq %=mod;
            }
            System.out.println(kq);
        }
    }
}
