/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package test;

import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nvcc
 */
public class test2 {

    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(new File("src/demo/in.txt"));
            PrintWriter pw = new PrintWriter("src/demo/out.txt");

            int n = Integer.parseInt(sc.nextLine());
            int[] nums = new int[n];

            for (int i = 0; i < n; i++) {
                nums[i] = Integer.parseInt(sc.nextLine());
            }

            // algo
            int dem;
            List<Integer> list = new ArrayList<Integer>();

            for (int i = 0; i < n; i++) {
                int j = 2;
                int m = nums[i];

                while (m > 1) {
                    if (m % j == 0) {
                        m /= j;
                        list.add(j);
                    } else {
                        j++;
                    }
                }

                if (list.isEmpty()) {
                    list.add(m);
                }

                String s = "Test " + (i + 1) + ": ";
                int check = list.get(0);
                int count = 0;
                while (!list.isEmpty()) {

                    if (check == list.get(0)) {
                        count++;
                        list.remove(0);
                    } else {
                        s += check + "(" + count + ")";
                        check = list.get(0);
                        count = 0;
                    }

                    if (list.size() == 0) {
                        s += check + "(" + count + ")";
                        pw.println(s);
                    }
                }
                list.clear();
            }
            pw.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
