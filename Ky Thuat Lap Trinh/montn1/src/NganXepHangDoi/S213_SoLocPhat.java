/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package NganXepHangDoi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class S213_SoLocPhat {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            long n = sc.nextLong();
            int count = 0;

            ArrayList<Long> lst = new ArrayList<>();
            Queue<String> q = new LinkedList<>();
            q.offer("6");
            q.offer("8");

            while (true) {
                String s = q.poll();
                long peek = Long.parseLong(s);
                if (s.length() <= n) {
                    ++count;
                    lst.add(peek);
                    q.offer(peek + "6");
                    q.offer(peek + "8");
                } else {
                    break;
                }
            }

            System.out.println(count);
            Collections.sort(lst, Collections.reverseOrder());
            for (long x : lst) {
                System.out.print(x + " ");
            }
            System.out.println();
        }
    }
}
