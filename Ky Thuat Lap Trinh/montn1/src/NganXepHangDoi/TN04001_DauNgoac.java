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
public class TN04001_DauNgoac {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            Stack<Integer> stk = new Stack<>();
            String s = sc.nextLine();
            String res = "";

            int count = 0;
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == '(') {
                    ++count;
                    stk.push(count);
                    res += count;
                    res += " ";
                } else if (s.charAt(i) == ')') {
                    res += stk.pop();
                    res += " ";
                }
            }

            System.out.println(res);
        }
    }
}

//( ( ( ) ) ( ( ) ) )
//1 2

