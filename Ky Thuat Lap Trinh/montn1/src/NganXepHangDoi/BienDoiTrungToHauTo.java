/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package NganXepHangDoi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.Stack;

/**
 *
 * @author anhnguyen
 */
public class BienDoiTrungToHauTo {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            Stack<Character> stack = new Stack<>();
            String s = sc.nextLine();
            String res = "";

            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) >= 'A' && s.charAt(i) <= 'Z') {
                    res += s.charAt(i);
                } else if (s.charAt(i) >= 'a' && s.charAt(i) <= 'a') {
                    res += s.charAt(i);
                } else if (s.charAt(i) == '(') {
                    stack.push('(');
                } else if (s.charAt(i) == ')') {
                    while (!stack.isEmpty() && stack.peek() != '(') {
                        res += stack.pop();
                    }
                    stack.pop();
                } else if (s.charAt(i) == '+' || s.charAt(i) == '-' || s.charAt(i) == '*' || s.charAt(i) == '/' || s.charAt(i) == '^') {
                    while (!stack.isEmpty() && degree(stack.peek()) >= degree(s.charAt(i))) {
                        res += stack.pop();
                    }
                    stack.push(s.charAt(i));
                }
            }

            while (!stack.isEmpty() && stack.peek() != '(') {
                res += stack.pop();
            }

            System.out.println(res);
        }
    }

    public static int degree(Character c) {
        if (c == '^') {
            return 5;
        }
        if (c == '*' || c == '/') {
            return 4;
        }
        if (c == '+' || c == '-') {
            return 3;
        }
        return 2;
    }
}
