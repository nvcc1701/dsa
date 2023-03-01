/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;
import java.util.TreeSet;

/**
 *
 * @author anhnguyen
 */
public class J07024_HieuCuaHaiTapTU {

    public static class WordSet {

        private TreeSet<String> tree = new TreeSet<>();

        public WordSet(String file) throws FileNotFoundException {
            Scanner sc = new Scanner(new File(file));
            while (sc.hasNext()) {
                tree.add(sc.next().toLowerCase());
            }
        }

        public WordSet() {
        }

        public String difference(WordSet s2) {
            TreeSet<String> res = new TreeSet<>();
            res.addAll(this.tree);
            res.removeAll(s2.tree);

            String s = "";
            for (String x : res) {
                s += x;
                s += " ";
            }
            return s.trim();
        }
    }

    public static void main(String[] args) throws IOException {
        WordSet s1 = new WordSet("DATA1.in");
        WordSet s2 = new WordSet("DATA2.in");
        System.out.println(s1.difference(s2));
        System.out.println(s2.difference(s1));
    }
}
