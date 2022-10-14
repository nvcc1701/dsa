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
public class KiemTraCauVietDungQuyTac {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            String s = sc.nextLine();
            if (check(s)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }

    public static boolean check(String s) {
        Stack<Character> stk = new Stack<>();

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(' || s.charAt(i) == '[') {
                stk.push(s.charAt(i));
            } else if (s.charAt(i) == ')') {
                if (!stk.isEmpty() && stk.peek() == '(') {
                    stk.pop();
                } else {
                    return false;
                }
            } else if (s.charAt(i) == ']') {
                if (!stk.isEmpty() && stk.peek() == '[') {
                    stk.pop();
                } else {
                    return false;
                }
            }
        }

        if (stk.isEmpty()) {
            return true;
        } else {
            return false;
        }
    }
}
