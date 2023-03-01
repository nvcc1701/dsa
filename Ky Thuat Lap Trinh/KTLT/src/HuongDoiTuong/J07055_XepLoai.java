/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class J07055_XepLoai {

    public static class SinhVien implements Serializable {

        private String hoten;
        private double diemlt;
        private double diemth;
        private double diemthi;
        private double diemtk;
        private String ma;
        private String xeploai;
        private static int sma = 1;

        public SinhVien(String hoten, String diemlt, String diemth, String diemthi) {
            this.ma = String.format("SV%02d", sma++);

            StringTokenizer st = new StringTokenizer(hoten);
            StringBuilder sb = new StringBuilder();

            while (st.hasMoreTokens()) {
                String s = st.nextToken().toLowerCase();
                sb.append(Character.toUpperCase(s.charAt(0)));

                for (int i = 1; i < s.length(); i++) {
                    sb.append(s.charAt(i));
                }
                sb.append(" ");
            }
            this.hoten = sb.toString().trim();
            this.diemlt = Double.parseDouble(diemlt) * 0.25;
            this.diemth = Double.parseDouble(diemth) * 0.35;
            this.diemthi = Double.parseDouble(diemthi) * 0.4;
            this.diemtk = this.diemlt + this.diemth + this.diemthi;

            if (this.diemtk >= 8) {
                this.xeploai = "GIOI";
            } else if (this.diemtk >= 6.5) {
                this.xeploai = "KHA";
            } else if (this.diemtk >= 5) {
                this.xeploai = "TRUNG BINH";
            } else {
                this.xeploai = "KEM";
            }
        }

        @Override
        public String toString() {
            String s = ma + " " + hoten + " " + String.format("%.02f", diemtk) + " " + xeploai;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("BANGDIEM.in"));
        int t = Integer.parseInt(sc.nextLine());

        ArrayList<SinhVien> lst = new ArrayList<>();
        while (t-- > 0) {
            SinhVien sv = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(sv);
        }

        Collections.sort(lst, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                return Double.compare(o2.diemtk, o1.diemtk);
            }
        });

        for (SinhVien sv : lst) {
            System.out.println(sv.toString());
        }
    }
}
