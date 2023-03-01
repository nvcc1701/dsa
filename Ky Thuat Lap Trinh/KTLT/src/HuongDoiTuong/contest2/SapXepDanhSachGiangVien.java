/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong.contest2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class SapXepDanhSachGiangVien {

    public static class GiangVien {

        private String ma;
        private String ten;
        private String bomon;
        private static int sma = 1;

        public GiangVien(String ten, String bomon) {
            this.ma = String.format("GV%02d", sma++);
            this.ten = ten;

            StringTokenizer st = new StringTokenizer(bomon);
            String s = "";
            while (st.hasMoreTokens()) {
                String ss = st.nextToken().toUpperCase();
                s += ss.charAt(0);
            }
            this.bomon = s;
        }

        @Override
        public String toString() {
            String s = "";
            s += this.ma + " " + this.ten + " " + this.bomon;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));

        int t = Integer.parseInt(sc.nextLine());
        ArrayList<GiangVien> lst = new ArrayList<>();
        while (t-- > 0) {
            GiangVien gv = new GiangVien(sc.nextLine(), sc.nextLine());
            lst.add(gv);
        }

        Collections.sort(lst, new Comparator<GiangVien>() {
            @Override
            public int compare(GiangVien o1, GiangVien o2) {
                String[] st1 = o1.ten.split("\\s+");
                String[] st2 = o2.ten.split("\\s+");
                if (st1[st1.length - 1].equalsIgnoreCase(st2[st2.length - 1])) {
                    return o1.ma.compareToIgnoreCase(o2.ma);
                } else {
                    return st1[st1.length - 1].compareToIgnoreCase(st2[st2.length - 1]);
                }
            }
        });

        for (GiangVien x : lst) {
            System.out.println(x);
        }
    }
}
