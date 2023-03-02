/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.TreeSet;

/**
 *
 * @author anhnguyen
 */
public class J07007_LietKeTuKhacNhau {

    public static class WordSet {

        private TreeSet<String> set = new TreeSet<>();

        public WordSet(String filename) throws FileNotFoundException {
            File file = new File(filename);
            Scanner sc = new Scanner(file);

            while (sc.hasNextLine()) {
                StringTokenizer st = new StringTokenizer(sc.nextLine().toLowerCase());
                while (st.hasMoreTokens()) {
                    String s = st.nextToken();
                    set.add(s);
                }
            }
        }

        @Override
        public String toString() {
            String s = "";
            for (String x : set) {
                s += x;
                s += "\n";
            }
            return s; // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/OverriddenMethodBody
        }
    }

    public static void main(String[] args) throws IOException {
        WordSet ws = new WordSet("VANBAN.in");
        System.out.println(ws);
    }

//        File file = new File("VANBAN.in");
//        Scanner sc = new Scanner(file);
//        TreeSet<String> set = new TreeSet<>();
//
//        while (sc.hasNextLine()) {
//            StringTokenizer st = new StringTokenizer(sc.nextLine().toLowerCase());
//            while (st.hasMoreTokens()) {
//                String s = st.nextToken();
//                set.add(s);
//            }
//        }
//
//        for (String x : set) {
//            System.out.println(x);
//        }
}
