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
public class T223_SoBDN2 {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            Queue<String> q = new LinkedList<>();
            q.offer("1");

            while (true) {
                long peek = Long.parseLong(q.poll());
                if (peek % n == 0) {
                    System.out.println(peek);
                    break;
                } else {
                    q.offer(peek + "0");
                    q.offer(peek + "1");
                }
            }
        }
    }
}
