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
public class TN02011_LietKeNhapXuatHangTheoNhom {

    public static class MatHang {

        private String ma;
        private int soluongnhap;

        private double soluongxuat;
        private double dongia;
        private double tien;
        private double thue;
        private String tudau;

        public MatHang(String ma, String soluongnhap) {
            this.ma = ma;
            this.soluongnhap = Integer.parseInt(soluongnhap);

            String slnhap = ma.substring(0, 1);
            this.tudau = slnhap;
            if (slnhap.equalsIgnoreCase("A")) {
                soluongxuat = Math.round(0.6 * this.soluongnhap);
            } else if (slnhap.equalsIgnoreCase("B")) {
                soluongxuat = Math.round(0.7 * this.soluongnhap);
            }

            String dongiaS = ma.substring(4, 5);
            if (dongiaS.equalsIgnoreCase("Y")) {
                this.dongia = 110000;
            } else if (dongiaS.equalsIgnoreCase("N")) {
                this.dongia = 135000;
            }

            this.tien = this.soluongxuat * this.dongia;

            if (slnhap.equalsIgnoreCase("A") && dongiaS.equalsIgnoreCase("Y")) {
                this.thue = 0.08 * tien;
            } else if (slnhap.equalsIgnoreCase("A") && dongiaS.equalsIgnoreCase("N")) {
                this.thue = 0.11 * tien;
            } else if (slnhap.equalsIgnoreCase("B") && dongiaS.equalsIgnoreCase("Y")) {
                this.thue = 0.17 * tien;
            } else if (slnhap.equalsIgnoreCase("B") && dongiaS.equalsIgnoreCase("N")) {
                this.thue = 0.22 * tien;
            }
        }

        @Override
        public String toString() {
            String s = "";
            s += ma + " " + soluongnhap + " " + String.format("%.0f", soluongxuat) + " " + String.format("%.0f", dongia) + " " + String.format("%.0f", tien) + " " + String.format("%.0f", thue);
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        int t = Integer.parseInt(sc.nextLine());

        ArrayList<MatHang> lst = new ArrayList();

        while (t-- > 0) {
            MatHang mh = new MatHang(sc.nextLine(), sc.nextLine());
            lst.add(mh);
        }

        String key = sc.nextLine();

        Collections.sort(lst, new Comparator<MatHang>() {
            @Override
            public int compare(MatHang o1, MatHang o2) {
                return Double.compare(o2.thue, o1.thue);
            }
        });

        for (MatHang mh : lst) {
            if (mh.tudau.equalsIgnoreCase(key)) {
                System.out.println(mh.toString());
            }
        }
    }
}
