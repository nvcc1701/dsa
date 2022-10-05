/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong.contest1;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class TuyenDung {

    public static class ThiSinh implements Serializable {

        private String ma;
        private static int sma = 1;
        private String hoten;
        private double diemlythuet;
        private double diemthuchanh;
        private double diemtrungbinh;
        private String xeploai;

        public ThiSinh(String hoten, String diemlythuet, String diemthuchanh) {
            this.hoten = hoten;

            if (diemlythuet.contains(".") || diemlythuet.equalsIgnoreCase("10") || diemlythuet.length() == 1) {
                this.diemlythuet = Double.parseDouble(diemlythuet);
            } else {
                String s = diemlythuet.charAt(0) + ".";
                for (int i = 1; i < diemlythuet.length(); i++) {
                    s += diemlythuet.charAt(i);
                }
                this.diemlythuet = Double.parseDouble(s);
            }

            if (diemthuchanh.contains(".") || diemthuchanh.equalsIgnoreCase("10") || diemthuchanh.length() == 1) {
                this.diemthuchanh = Double.parseDouble(diemthuchanh);
            } else {
                String s = diemthuchanh.charAt(0) + ".";
                for (int i = 1; i < diemthuchanh.length(); i++) {
                    s += diemthuchanh.charAt(i);
                }
                this.diemthuchanh = Double.parseDouble(s);
            }

            this.diemtrungbinh = (this.diemlythuet + this.diemthuchanh) / 2;
            this.xeploai = XepLoai();

            this.ma = String.format("TS%02d", sma++);
        }

        private String XepLoai() {
            if (this.diemtrungbinh <= 5) {
                return "TRUOT";
            } else if (diemtrungbinh > 5 && diemtrungbinh < 8) {
                return "CAN NHAC";
            } else if (diemtrungbinh >= 8 && diemtrungbinh <= 9.5) {
                return "DAT";
            } else {
                return "XUAT SAC";
            }
        }

        @Override
        public String toString() {
            String s = "";
            String dtb = String.format("%.2f", this.diemtrungbinh);
            s += this.ma + " " + this.hoten + " " + dtb + " " + this.xeploai;
            return s;
        }

        public double getDiemtrungbinh() {
            return diemtrungbinh;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        ArrayList<ThiSinh> lst = new ArrayList<>();

        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));

        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            ThiSinh ts = new ThiSinh(sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(ts);
        }

        Collections.sort(lst, new Comparator<ThiSinh>() {
            @Override
            public int compare(ThiSinh o1, ThiSinh o2) {
                return Double.compare(o2.getDiemtrungbinh(), o1.getDiemtrungbinh());
            }
        }
        );

        for (ThiSinh x : lst) {
            System.out.println(x.toString());
        }

    }
}
