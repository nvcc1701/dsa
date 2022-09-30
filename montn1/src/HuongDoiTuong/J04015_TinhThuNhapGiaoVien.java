/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J04015_TinhThuNhapGiaoVien {

    public static class GiaoVien {

        private String ma;
        private double luong;
        private double phucap;
        private double bacluong;
        private double thunhap;
        private String hoten;

        public GiaoVien(String ma, String hoten, double luong) {
            String s = ma.trim().substring(0, 2);
            String s2 = ma.trim().substring(2);

            if (s.equals("HT")) {
                this.phucap = 2000000;
            } else if (s.equals("HP")) {
                this.phucap = 900000;
            } else {
                this.phucap = 500000;
            }

            this.bacluong = Double.parseDouble(s2);

            this.ma = ma;
            this.luong = luong;
            this.hoten = hoten;

            this.thunhap = this.luong * this.bacluong + this.phucap;
        }

        @Override
        public String toString() {
            String s = "";
            String s1 = String.format("%.0f", this.bacluong);
            String s2 = String.format("%.0f", this.phucap);
            String s3 = String.format("%.0f", this.thunhap);

            s += this.ma + " " + this.hoten + " " + s1 + " " + s2 + " " + s3;
            return s;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        GiaoVien gv = new GiaoVien(sc.nextLine(), sc.nextLine(), sc.nextDouble());
        System.out.println(gv.toString());
    }
}
