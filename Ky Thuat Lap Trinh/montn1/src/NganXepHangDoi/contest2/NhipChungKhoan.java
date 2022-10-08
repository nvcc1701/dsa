/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package NganXepHangDoi.contest2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.Stack;

/**
 *
 * @author anhnguyen
 */
public class NhipChungKhoan {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
//        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int a[] = new int[n];
            int res[] = new int[n];

            Stack<Integer> stk = new Stack<>();
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            stk.push(0);
            res[0] = 1;
            for (int i = 1; i < n; i++) {
                while (!stk.isEmpty() && a[i] >= a[stk.peek()]) {
                    stk.pop();
                }
                if (stk.isEmpty()) {
                    res[i] = i + 1;
                } else {
                    res[i] = i - stk.peek();
                }
                stk.push(i);
            }

            for (int i = 0; i < n; i++) {
                System.out.print(res[i] + " ");
            }
            System.out.println();
        }
    }
}
