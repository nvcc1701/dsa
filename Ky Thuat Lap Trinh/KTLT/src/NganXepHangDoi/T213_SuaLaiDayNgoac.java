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
public class T213_SuaLaiDayNgoac {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            String s = sc.nextLine();
            Stack<Character> stack = new Stack<>();

            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == '(' || s.charAt(i) == ')' && stack.isEmpty()) {
                    stack.push(s.charAt(i));
                } else if (s.charAt(i) == ')') {
                    if (stack.peek() == '(') {
                        stack.pop();
                    } else {
                        stack.push(s.charAt(i));
                    }
                }
            }

            int d1 = 0, d2 = 0, res = 0;
            while (!stack.isEmpty()) {
                Character c = stack.peek();
                if (c == '(') {
                    d1++;
                } else {
                    d2++;
                }
                stack.pop();
            }

            //))(( -> d1 = 2 d2 = 2
            //(((( -> d1 = 4 d2 = 0
            //(( -> d1 = 2 d2 =0
            //)((( -> d1 = 3 d2 = 1 -> d1/2 + d2/2 
            //                       = 3/2 + 1/2 + 3%2 +1%2= 1
            res += d1 / 2 + d2 / 2 + d1 % 2 + d2 % 2;
            System.out.println(res);
        }
    }
}
