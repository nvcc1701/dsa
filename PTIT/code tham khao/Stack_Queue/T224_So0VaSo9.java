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
public class T224_So0VaSo9 {

    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            Long n = in.nextLong();
            Queue<Long> queue=new ArrayDeque<>();
            queue.add(9l);
            while (!queue.isEmpty()) {
                Long remove = queue.remove();
                if (remove % n != 0) {
                    queue.add(remove * 10);
                    queue.add(remove * 10 + 9);
                } else {
                    System.out.println(remove);
                    break;
                }
            }
        }
    }
}
