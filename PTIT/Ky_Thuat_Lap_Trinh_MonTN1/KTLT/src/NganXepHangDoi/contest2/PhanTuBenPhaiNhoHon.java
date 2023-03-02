/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package NganXepHangDoi.contest2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.HashMap;
import java.util.Scanner;
import java.util.Stack;

/**
 *
 * @author anhnguyen
 */
public class PhanTuBenPhaiNhoHon {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            Stack<Integer> stk = new Stack<>();
            int a[] = new int[n];
            int b[] = new int[n];
            int c[] = new int[n];

            stk.push(0);
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                if (stk.isEmpty()) {
                    stk.push(i);
                } else {
                    while (!stk.isEmpty() && a[i] > a[stk.peek()]) {
                        b[stk.peek()] = i;
                        stk.pop();
                    }
                    stk.push(i);
                }
            }

            while (!stk.isEmpty()) {
                b[stk.peek()] = -1;
                stk.pop();
            }

            //find smaller
            stk.push(0);
            for (int i = 0; i < n; i++) {
                if (stk.isEmpty()) {
                    stk.push(i);
                } else {
                    while (!stk.isEmpty() && a[stk.peek()] > a[i]) {
                        c[stk.peek()] = i;
                        stk.pop();
                    }
                    stk.push(i);
                }
            }

            while (!stk.isEmpty()) {
                c[stk.peek()] = -1;
                stk.pop();
            }

            for (int i = 0; i < n; i++) {
                if (b[i] == -1 || c[b[i]] == -1) {
                    System.out.print("-1 ");
                } else {
                    System.out.print(a[c[b[i]]] + " ");
                }
            }
            System.out.println("");
        }
    }
}
