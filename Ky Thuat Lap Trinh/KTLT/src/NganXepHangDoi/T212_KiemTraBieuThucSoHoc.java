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
public class T212_KiemTraBieuThucSoHoc {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        //(a+b)
        //(a)
        while (t-- > 0) {
            boolean ok = true;
            String s = sc.nextLine();
            Stack<Character> stack = new Stack<>();
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == ')') {
                    char peek = stack.peek();
                    stack.pop();
                    
                    ok = true;

                    while (peek != '(') {
                        if (peek == '+' || peek == '-' || peek == '*' || peek == '/') {
                            ok = false;
                        }
                        peek = stack.peek();
                        stack.pop();
                    }
                    
                    if (ok) {
                        break;
                    }

                } else {
                    stack.push(s.charAt(i));
                }
            }

            if (ok) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
    }
}
