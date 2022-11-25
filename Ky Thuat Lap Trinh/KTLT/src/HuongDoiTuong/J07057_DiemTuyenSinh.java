/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

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
public class J07057_DiemTuyenSinh {

    public static class ThiSinh {

        private String ma;
        private String hoten;
        private double diemthi;
        private String dantoc;
        private String khuvuc;
        private String trangthai;
        private static int sma = 1;

        public ThiSinh(String hoten, String diemthi, String dantoc, String khuvuc) {
            this.ma = String.format("TS%02d", sma++);

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

            this.diemthi = Double.parseDouble(diemthi);
            this.dantoc = dantoc;
            this.khuvuc = khuvuc;

            if (this.dantoc.equalsIgnoreCase("kinh")) {
                this.diemthi += 0;
            } else {
                this.diemthi += 1.5;
            }

            if (this.khuvuc.equalsIgnoreCase("1")) {
                this.diemthi += 1.5;
            } else if (this.khuvuc.equalsIgnoreCase("2")) {
                this.diemthi += 1;
            } else {
                this.diemthi += 0;
            }

            if (this.diemthi >= 20.5) {
                this.trangthai = "Do";
            } else {
                this.trangthai = "Truot";
            }
        }

        @Override
        public String toString() {
            double dt = Math.round(diemthi * 10.0) / 10.0;
            String s = ma + " " + hoten + " " + dt + " " + trangthai;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("THISINH.in"));

        int t = Integer.parseInt(sc.nextLine());
        ArrayList<ThiSinh> lst = new ArrayList<>();

        while (t-- > 0) {
            ThiSinh ts = new ThiSinh(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(ts);
        }

        Collections.sort(lst, new Comparator<ThiSinh>() {
            @Override
            public int compare(ThiSinh o1, ThiSinh o2) {
                return Double.compare(o2.diemthi, o1.diemthi);
            }
        });

        for (ThiSinh ts : lst) {
            System.out.println(ts.toString());
        }
    }
}
