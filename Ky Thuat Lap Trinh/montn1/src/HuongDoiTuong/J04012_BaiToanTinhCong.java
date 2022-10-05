/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.Serializable;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J04012_BaiToanTinhCong {

    public static class NhanVien implements Serializable {

        private String ma;
        private String hoten;
        private double luongcoban;
        private double luongthang;
        private double thuong;
        private int songaycong;
        private String chucvu;
        private double phucap;
        private double thunhap;
        private static int sma = 1;

        public NhanVien(String hoten, String luongcoban, String songaycong, String chucvu) {
            this.ma = String.format("NV%02d", sma++);
            this.hoten = hoten;
            this.luongcoban = Double.parseDouble(luongcoban);
            this.songaycong = Integer.parseInt(songaycong);
            this.chucvu = chucvu;

            if (this.chucvu.equalsIgnoreCase("GD")) {
                this.phucap = 250000;
            } else if (this.chucvu.equalsIgnoreCase("PGD")) {
                this.phucap = 200000;
            } else if (this.chucvu.equalsIgnoreCase("TP")) {
                this.phucap = 180000;
            } else {
                this.phucap = 150000;
            }

            this.luongthang = this.luongcoban * this.songaycong;

            if (this.songaycong >= 25) {
                this.thuong = this.luongthang * 0.2;
            } else if (this.songaycong < 25 && this.songaycong >= 22) {
                this.thuong = this.luongthang * 0.1;
            } else {
                this.thuong = 0;
            }

            this.thunhap = this.luongthang + this.thuong + this.phucap;
        }

        @Override
        public String toString() {
            String s = String.format("%s %s %.0f %.0f %.0f %.0f", this.ma, this.hoten, this.luongthang, this.thuong, this.phucap, this.thunhap);
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        NhanVien nv = new NhanVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        System.out.println(nv);
    }
}
