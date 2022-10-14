/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package NganXepHangDoi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.Stack;
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class T218___PhanTuBenPhaiDauTienLonHon {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            Stack<Integer> stk = new Stack<>();
            int b[] = new int[n];
            int a[] = new int[n];

            for (int i = 0; i < n; i++) {
                int m = sc.nextInt();
                a[i] = m;

                if (stk.isEmpty()) {
                    stk.push(i);
                } else {
                    while (!stk.isEmpty() && m > a[stk.peek()]) {
                        b[stk.peek()] = m;
                        stk.pop();
                    }
                    stk.push(i);
                }
            }

            while (!stk.isEmpty()) {
                b[stk.pop()] = -1;
            }

            for (int i = 0; i < n; i++) {
                System.out.print(b[i] + " ");
            }
            System.out.println("");
        }
    }
}
