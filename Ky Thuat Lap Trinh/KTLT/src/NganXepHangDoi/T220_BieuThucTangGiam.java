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
public class T220_BieuThucTangGiam {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            String s = sc.nextLine();
            Stack<Integer> stk = new Stack<>();
            int res = 0;
            for (int i = 0; i <= s.length(); i++) {
                stk.push(i + 1);
                if (i == s.length() || s.charAt(i) == 'I') {
                    while (!stk.isEmpty()) {
                        res = res * 10 + stk.pop();
                    }
                }
            }

            System.out.println(res);
        }
    }
}

//I
//12
//D
//21
//DD
//stack 21 -> 21
//stack 
//321

//DDIDDIID
