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
public class TinhGiaTriBieuThucTienTO {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            String s = sc.nextLine();
            Stack<Integer> stk = new Stack<>();
            for (int i = s.length() - 1; i >= 0; i--) {
                if (s.charAt(i) == '+' || s.charAt(i) == '-' || s.charAt(i) == '*' || s.charAt(i) == '/') {
                    stk.push(caculate(stk.pop(), stk.pop(), s.charAt(i)));
                } else {
                    stk.push(Integer.parseInt(String.valueOf(s.charAt(i))));
                }
            }
            System.out.println(stk.peek());
        }
    }

    public static int caculate(int a, int b, Character c) {
        if (c == '+') {
            return a + b;
        } else if (c == '-') {
            return a - b;
        } else if (c == '*') {
            return a * b;
        } else {
            return a / b;
        }
    }
}
