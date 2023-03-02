/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.TreeSet;

/**
 *
 * @author anhnguyen
 */
public class TN02015_ThongKeTuKhacNhau {

    public static class WordSet {

        private static TreeSet<String> tree = new TreeSet<>();

        public WordSet(Scanner input) {
            while (input.hasNext()) {
                tree.add(input.next().toLowerCase());
            }
        }

        @Override
        public String toString() {
            String s = "";
            for (String x : tree) {
                s += x;
                s += "\n";
            }

            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner input = new Scanner(System.in);
        WordSet ws = new WordSet(input);
        System.out.println(ws);
    }

}
