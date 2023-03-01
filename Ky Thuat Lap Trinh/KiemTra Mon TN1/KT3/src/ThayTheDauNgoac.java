
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.Stack;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
/**
 *
 * @author anhnguyen
 */
public class ThayTheDauNgoac {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            String s = sc.nextLine();
            Stack<Integer> stk = new Stack<>();
            String a[] = new String[s.length()];

            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == '(') {
                    stk.push(i);
                } else if (s.charAt(i) == ')') {
                    if (!stk.isEmpty()) {
                        int peek = stk.pop();
                        if (s.charAt(peek) == '(') {
                            a[peek] = "0";
                            a[i] = "1";
                        } else {
                            a[peek] = "-1";
                            a[i] = "-1";
                        }
                    } else {
                        a[i] = "-1";
                    }
                } else {
                    a[i] = s.charAt(i) + "";
                }
            }

            while (!stk.isEmpty()) {
                int peek = stk.pop();
                a[peek] = "-1";
            }

            for (int i = 0; i < a.length; i++) {
                System.out.print(a[i]);
            }

            System.out.println();
        }
    }
}
