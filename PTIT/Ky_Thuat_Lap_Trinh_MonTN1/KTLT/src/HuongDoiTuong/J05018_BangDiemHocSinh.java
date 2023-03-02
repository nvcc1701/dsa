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

/**
 *
 * @author anhnguyen
 */
public class J05018_BangDiemHocSinh {

    public static class HocSinh {

        private String ma;
        private String ten;
        private double diem1, diem2, diem3, diem4, diem5, diem6, diem7, diem8, diem9, diem10;
        private double diemtb;
        private String xeploai;
        private static int sma = 1;

        public HocSinh(String ten, double diem1, double diem2, double diem3, double diem4, double diem5, double diem6, double diem7, double diem8, double diem9, double diem10) {
            this.ma = String.format("HS%02d", sma++);
            this.ten = ten;
            this.diem1 = diem1;
            this.diem2 = diem2;
            this.diem3 = diem3;
            this.diem4 = diem4;
            this.diem5 = diem5;
            this.diem6 = diem6;
            this.diem7 = diem7;
            this.diem8 = diem8;
            this.diem9 = diem9;
            this.diem10 = diem10;

            double temp = (diem1 * 2 + diem2 * 2 + diem3 + diem4 + diem5 + diem6 + diem7 + diem8 + diem9 + diem10) / 12;
            this.diemtb = Math.round(temp * 10.0) / 10.0;

            if (diemtb >= 9) {
                this.xeploai = "XUAT SAC";
            } else if (diemtb >= 8) {
                this.xeploai = "GIOI";
            } else if (diemtb >= 7) {
                this.xeploai = "KHA";
            } else if (diemtb >= 5) {
                this.xeploai = "TB";
            } else {
                this.xeploai = "YEU";
            }
        }

        @Override
        public String toString() {
            String s = this.ma + " " + this.ten + " " + this.diemtb + " " + this.xeploai;
            return s;
        }

    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.IN"));

        int t = Integer.parseInt(sc.nextLine());
        ArrayList<HocSinh> lstHocSinh = new ArrayList<>();

        while (t-- > 0) {
            HocSinh hs = new HocSinh(sc.nextLine(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble());

            if (t != 0) {
                sc.nextLine();
            }
            lstHocSinh.add(hs);
        }

        Collections.sort(lstHocSinh, new Comparator<HocSinh>() {
            @Override
            public int compare(HocSinh o1, HocSinh o2) {
                return Double.compare(o2.diemtb, o1.diemtb);
            }
        });

        for (HocSinh hs : lstHocSinh) {
            System.out.println(hs.toString());
        }
    }
}
