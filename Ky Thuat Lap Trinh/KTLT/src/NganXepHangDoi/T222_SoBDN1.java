/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package NganXepHangDoi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class T222_SoBDN1 {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            long n = sc.nextLong();
            Queue<String> q = new LinkedList<>();

            int count = 0;
            q.offer("1");
            long tmp = 0;

            while (true) {
                tmp = Long.parseLong(q.poll());
                if (tmp <= n) {
                    ++count;
                    q.offer(tmp + "0");
                    q.offer(tmp + "1");
                } else {
                    break;
                }
            }

            System.out.println(count);
        }
    }
}
