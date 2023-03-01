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
public class J05053_SapXepDonHang {

    public static class DonHang {

        private String ten;
        private String ma;
        private double gia;
        private int soluong;
        private double giamgia;
        private double thanhtien;
        private String stt;

        public DonHang(String ten, String ma, String gia, String soluong) {
            this.ten = ten;
            this.ma = ma;

            this.gia = Double.parseDouble(gia);
            this.soluong = Integer.parseInt(soluong);
            this.stt = ma.substring(1, 4);

            String loai = ma.substring(4, 5);
            if (loai.equalsIgnoreCase("1")) {
                this.giamgia = 0.5 * this.gia * this.soluong;
            } else if (loai.equalsIgnoreCase("2")) {
                this.giamgia = 0.3 * this.gia * this.soluong;
            }

            this.thanhtien = this.gia * this.soluong - this.giamgia;
        }

        @Override
        public String toString() {
            String s = ten + " " + ma + " " + stt + " " + String.format("%.0f", giamgia) + " " + String.format("%.0f", thanhtien);
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));

        int t = Integer.parseInt(sc.nextLine());

        ArrayList<DonHang> lst = new ArrayList<>();
        while (t-- > 0) {
            DonHang dh = new DonHang(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(dh);
        }

        Collections.sort(lst, new Comparator<DonHang>() {
            @Override
            public int compare(DonHang o1, DonHang o2) {
                int n1 = Integer.parseInt(o1.stt);
                int n2 = Integer.parseInt(o2.stt);
                return Integer.compare(n1, n2);
            }
        });

        for (DonHang dh : lst) {
            System.out.println(dh.toString());
        }
    }
}
