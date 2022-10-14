/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package NganXepHangDoi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Stack;

/**
 *
 * @author anhnguyen
 */
public class DSA07021_DayNgoacDungDaiNhat {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String s = sc.nextLine();
            Stack<Integer> stack = new Stack<>();
            stack.push(-1);

            int res = 0;
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == ')') {
                    stack.pop();
                    if (!stack.isEmpty()) {
                        res = Math.max(res, i - stack.peek());
                    } else {
                        stack.push(i);
                    }
                } else {
                    stack.push(i);
                }
            }

            System.out.println(res);
        }
    }
}

//  )()())
//  012345
//-1 1
//-1  3
//-1  34
//-1  3 -> max =4
//
//002020
//040
