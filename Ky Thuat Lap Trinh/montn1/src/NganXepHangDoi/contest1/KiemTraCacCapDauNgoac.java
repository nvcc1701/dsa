/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package NganXepHangDoi.contest1;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.Stack;

/**
 *
 * @author anhnguyen
 */
public class KiemTraCacCapDauNgoac {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String s = sc.nextLine();
            Stack<Character> stack = new Stack<>();
            boolean check = true;

            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == '(' || s.charAt(i) == '{' || s.charAt(i) == '[') {
                    stack.push(s.charAt(i));
                } else {
                    if (!stack.isEmpty()) {
                        if ((stack.peek() == '(' && s.charAt(i) == ')') || (stack.peek() == '[' && s.charAt(i) == ']') || (stack.peek() == '{' && s.charAt(i) == '}')) {
                            stack.pop();
                        } else {
                            check = false;
                            System.out.println("false");
                            break;
                        }
                    } else {
                        check = false;
                        System.out.println("false");
                        break;
                    }
                }
            }
            
            if (check) {
                if (stack.isEmpty()) {
                    System.out.println("true");
                } else {
                    System.out.println("false");
                }
            }
        }
    }
}
