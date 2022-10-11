
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
public class TienTo {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            int n = Integer.parseInt(sc.nextLine());
            String[] s = sc.nextLine().split("\\s+");

            Stack<Long> stk = new Stack<>();

            for (int i = s.length - 1; i >= 0; i--) {
                if (s[i].equalsIgnoreCase("+") || s[i].equalsIgnoreCase("*") || s[i].equalsIgnoreCase("-") || s[i].equalsIgnoreCase("/")) {
                    long a = tinh(stk.pop(), stk.pop(), s[i]);
                    stk.push(a);
                } else if (s[i] == " ") {
                } else {
                    stk.push(Long.parseLong(String.valueOf(s[i])));
                }
            }
            System.out.println(stk.peek());
        }
    }

    public static long tinh(long x, long y, String c) {
        if (c.equalsIgnoreCase("+")) {
            return x + y;
        } else if (c.equalsIgnoreCase("-")) {
            return x - y;
        } else if (c.equalsIgnoreCase("*")) {
            return x * y;
        } else {
            return x / y;
        }
    }
}
