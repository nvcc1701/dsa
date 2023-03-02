/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package NganXepHangDoi.contest2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Stack;

/**
 *
 * @author anhnguyen
 */
public class HinhChuNhatDaiNhat {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
//        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int a[] = new int[n + 1];
            Stack<Integer> stk = new Stack<>();
            ArrayList<Integer> lst = new ArrayList<>();

            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            int i = 0;
            while (i < n) {
                if (stk.isEmpty() || a[stk.peek()] <= a[i]) {
                    stk.push(i++);
                } else {
                    int peek = stk.pop();
                    if (stk.isEmpty()) {
                        lst.add(a[peek] * i);
                    } else {
                        lst.add(a[peek] * (i - stk.peek() - 1));
                    }
                }
            }

            while (!stk.isEmpty()) {
                int peek = stk.pop();
                if (stk.isEmpty()) {
                    lst.add(a[peek] * i);
                } else {
                    lst.add(a[peek] * (i - stk.peek() - 1));
                }
            }

            for (int x : lst) {
                System.out.print(x + " ");
            }
            System.out.println("");
        }
    }
}
