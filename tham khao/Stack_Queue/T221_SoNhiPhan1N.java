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
public class T221_SoNhiPhan1N {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            int n =in.nextInt();
            generateBinary(n);
            System.out.println();
        }
    }

    static void generateBinary(int n) {
        Queue<String> q = new LinkedList<>();
        q.add("1");
        while (n-- > 0) {
            String st = q.peek();
            q.remove();
            System.out.print(st + " ");
            String s2 = st ;
            q.add(st+"0");
            q.add(s2+"1");
        }
    }

}
