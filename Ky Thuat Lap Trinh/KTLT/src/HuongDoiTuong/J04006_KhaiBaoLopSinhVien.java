/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J04006_KhaiBaoLopSinhVien {

    public static class SinhVien {

        private String masv;
        private String hoten;
        private String lop;
        private Date ngaysinh;
        private float gpa;

        public SinhVien(String hoten, String lop, String ngaysinh, float gpa) throws ParseException {
            this.masv = "B20DCCN001";
            this.hoten = hoten;
            this.lop = lop;
            this.ngaysinh = new SimpleDateFormat("dd/MM/yyyy").parse(ngaysinh);
            this.gpa = gpa;
        }

        @Override
        public String toString() {
            String s = "";
            String f = String.format("%.2f", this.gpa);
            s += this.masv + " " + this.hoten + " " + this.lop + " " + new SimpleDateFormat("dd/MM/yyyy").format(ngaysinh) + " " + f;
            return s;
        }
    }

    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        SinhVien sv = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), Float.parseFloat(sc.nextLine()));
        System.out.println(sv.toString());
    }
}
