/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DoThi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class DSA09002_ChuyenTuDanhSachKeSangDanhSachCanh {

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);

        int n = Integer.parseInt(sc.nextLine());
        ArrayList<String> lst[] = new ArrayList[n + 1];
        HashSet<String> set = new HashSet<>();

        for (int i = 1; i <= n; i++) {
            lst[i] = new ArrayList<>();
        }

        for (int i = 1; i <= n; i++) {
            String s = sc.nextLine();
            String ss[] = s.split("\\s+");

            for (int j = 0; j < ss.length; j++) {
                if (!set.contains(i + " " + ss[j])) {
                    lst[i].add(ss[j] + " ");
                    set.add(ss[j] + " " + i);
                }
            }
        }

        for (int i = 1; i <= n; i++) {
            for (String x : lst[i]) {
                System.out.println(i + " " + x);
            }
        }
    }
}
