
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
public class HinhChuNhatDonSac {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("DATA.in"));
        int m = sc.nextInt();
        int n = sc.nextInt();
        int a[] = new int[n];
        int b[] = new int[n];

        Stack<Integer> stk = new Stack<>();

        int count = 0;
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
            b[i] = m - a[i];
        }

        int k = 0;
        int max = 0;
        while (k < n) {
            if (stk.isEmpty() || a[stk.peek()] <= a[k]) {
                stk.push(k++);
            } else {
                int peek = stk.pop();
                if (stk.isEmpty()) {
                    max = Math.max(max, a[peek] * k);
                } else {
                    max = Math.max(max, a[peek] * (k - stk.peek() - 1));
                }
            }
        }

        while (!stk.isEmpty()) {
            int peek = stk.pop();
            if (stk.isEmpty()) {
                max = Math.max(max, a[peek] * k);
            } else {
                max = Math.max(max, a[peek] * (k - stk.peek() - 1));
            }
        }

        while (k < n) {
            if (stk.isEmpty() || b[stk.peek()] <= b[k]) {
                stk.push(k++);
            } else {
                int peek = stk.pop();
                if (stk.isEmpty()) {
                    max = Math.max(max, b[peek] * k);
                } else {
                    max = Math.max(max, b[peek] * (k - stk.peek() - 1));
                }
            }
        }

        while (!stk.isEmpty()) {
            int peek = stk.pop();
            if (stk.isEmpty()) {
                max = Math.max(max, b[peek] * k);
            } else {
                max = Math.max(max, b[peek] * (k - stk.peek() - 1));
            }
        }

        System.out.println(max);
    }
}
