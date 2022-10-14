/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.util.Scanner;
import java.util.TreeSet;

/**
 *
 * @author anhnguyen
 */
public class J04021_LopINTSET {

    public static class IntSet {

        TreeSet<Integer> tree;

        public IntSet(int a[]) {
            tree = new TreeSet<>();
            for (int i = 0; i < a.length; i++) {
                tree.add(a[i]);
            }
        }

        public IntSet() {
            tree = new TreeSet<>();
        }

        public IntSet union(IntSet s) {
            IntSet res = new IntSet();
            res.tree.addAll(this.tree);
            res.tree.addAll(s.tree);
            return res;
        }

        @Override
        public String toString() {
            String s = "";
            for (int x : tree) {
                s += x + " ";
            }
            return s.trim();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt(), a[] = new int[n], b[] = new int[m];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        for (int i = 0; i < m; i++) {
            b[i] = sc.nextInt();
        }
        IntSet s1 = new IntSet(a);
        IntSet s2 = new IntSet(b);
        IntSet s3 = s1.union(s2);
        System.out.println(s3);
    }
}
