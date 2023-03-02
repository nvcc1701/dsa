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
public class J07054_TinhDiemTrungBinh {

    public static class SinhVien implements Serializable {

        private String hoten;
        private double diem1;
        private double diem2;
        private double diem3;
        private String ma;
        private double diemtb;
        private String rank;
        private static int sma = 1;

        public SinhVien(String hoten, String diem1, String diem2, String diem3) {
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
            this.diem1 = Double.parseDouble(diem1);
            this.diem2 = Double.parseDouble(diem2);
            this.diem3 = Double.parseDouble(diem3);

            this.diemtb = (this.diem1 * 3 + this.diem2 * 3 + this.diem3 * 2) / 8;
            this.diemtb = Math.round(this.diemtb * 100.0) / 100.0;
            this.ma = String.format("SV%02d", sma++);
        }

        public void setRank(String r) {
            this.rank = r;
        }

        @Override
        public String toString() {

            String s = ma + " " + hoten + " " + String.format("%.02f", diemtb) + " " + rank;
            return s;
        }

    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(System.in);
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
                return Double.compare(o2.diemtb, o1.diemtb);
            }
        });

        int r = 1;
        for (int i = 0; i < lst.size(); i++) {
            if (i == 0) {
                lst.get(i).setRank(r++ + "");
            } else if (lst.get(i).diemtb == lst.get(i - 1).diemtb) {
                lst.get(i).setRank(lst.get(i - 1).rank);
                r++;
            } else {
                lst.get(i).setRank(r++ + "");
            }
        }

        Collections.sort(lst, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                int r1 = Integer.parseInt(o1.rank);
                int r2 = Integer.parseInt(o2.rank);

                if (r1 == r2) {
                    return o1.ma.compareToIgnoreCase(o2.ma);
                }
                return Integer.compare(r1, r2);
            }
        });

        for (SinhVien sv : lst) {
            System.out.println(sv.toString());
        }
    }
}