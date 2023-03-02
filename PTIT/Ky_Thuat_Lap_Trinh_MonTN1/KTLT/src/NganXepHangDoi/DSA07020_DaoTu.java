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
public class DSA07020_DaoTu {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        Stack<String> stack = new Stack<>();
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String s = sc.nextLine();

            StringTokenizer st = new StringTokenizer(s);
            while (st.hasMoreTokens()) {
                String s1 = st.nextToken();
                for (int i = 0; i < s1.length(); i++) {
                    stack.push(s1.charAt(i) + "");
                }
                while (!stack.isEmpty()) {
                    System.out.print(stack.pop());
                }
                System.out.print(" ");
            }

            System.out.println();
        }

    }
}
