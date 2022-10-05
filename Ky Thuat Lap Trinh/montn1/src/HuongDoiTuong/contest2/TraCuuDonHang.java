/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong.contest2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class TraCuuDonHang {

    public static class DonHang {

        private String tenhang;
        private String ma;
        private double dongia;
        private int soluong;
        private String stt;
        private double giamgia;
        private double thanhtien;
        private int maloai;

        public DonHang(String tenhang, String ma, String dongia, String soluong) {
            this.tenhang = tenhang;
            this.ma = ma;
            this.dongia = Double.parseDouble(dongia);
            this.soluong = (int) Double.parseDouble(soluong);

            this.stt = ma.substring(1, 4);
            this.maloai = Integer.parseInt(ma.substring(4));

            if (this.maloai == 2) {
                this.giamgia = 0.3 * (double) (this.dongia * this.soluong);
            } else {
                this.giamgia = 0.5 * (double) (this.dongia * this.soluong);
            }

            this.thanhtien = this.dongia * this.soluong - this.giamgia;
        }

        @Override
        public String toString() {
            String s = "";
            String giamgia = String.format("%.0f", this.giamgia);
            String thanhtien = String.format("%.0f", this.thanhtien);
            s += this.tenhang + " " + this.ma + " " + this.stt + " " + giamgia + " " + thanhtien;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            DonHang dh = new DonHang(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            System.out.println(dh);
        }
    }
}
