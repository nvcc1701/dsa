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
public class T214_BienDoiTienToHauTo {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            String s = sc.nextLine();
            Stack<String> stk = new Stack<>();
            for (int i = s.length() - 1; i >= 0; i--) {
                if (s.charAt(i) == '+' || s.charAt(i) == '-' || s.charAt(i) == '*' || s.charAt(i) == '/') {
                    String a = stk.pop();
                    String b = stk.pop();
                    String ss = a + b + s.charAt(i);
                    stk.push(ss);
                } else {
                    stk.push(s.charAt(i) + "");
                }
            }

            System.out.println(stk.peek());
        }
    }
}
