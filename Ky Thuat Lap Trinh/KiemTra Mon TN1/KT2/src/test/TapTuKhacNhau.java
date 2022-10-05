/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package test;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.TreeSet;

/**
 *
 * @author anhnguyen
 */
public class TapTuKhacNhau {

    public static class WordSet {

        TreeSet<String> tree;

        public WordSet(String s) {
            this.tree = new TreeSet<>();
            StringTokenizer st = new StringTokenizer(s.toLowerCase());
            while (st.hasMoreTokens()) {
                tree.add(st.nextToken());
            }
        }

        public String union(WordSet tree2) {
            TreeSet<String> treeT = (TreeSet<String>) tree.clone();
            treeT.addAll(tree2.tree);
            String s = "";
            for (String x : treeT) {
                s += x + " ";
            }

            return s;
        }

        public String intersection(WordSet tree2) {
            TreeSet<String> treeT = (TreeSet<String>) tree.clone();
            treeT.retainAll(tree2.tree);
            String s = "";
            for (String x : treeT) {
                s += x + " ";
            }

            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("VANBAN.in"));
        WordSet s1 = new WordSet(in.nextLine());
        WordSet s2 = new WordSet(in.nextLine());
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
    }
}
