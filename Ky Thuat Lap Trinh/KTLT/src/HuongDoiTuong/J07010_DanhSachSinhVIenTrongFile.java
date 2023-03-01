/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J07010_DanhSachSinhVIenTrongFile {

    public static class SinhVien {

        private String masv;
        private String hoten;
        private Date ngaysinh;
        private String lop;
        private double gpa;
        private static int sma = 001;

        public SinhVien(String hoten, String lop, String ngaysinh, double gpa) throws ParseException {
            this.masv = String.format("B20DCCN%03d", sma++);
            this.hoten = hoten;
            this.ngaysinh = new SimpleDateFormat("dd/MM/yyyy").parse(ngaysinh);
            this.lop = lop;
            this.gpa = gpa;
        }

        @Override
        public String toString() {
            String s = "";
            String date = new SimpleDateFormat("dd/MM/yyyy").format(this.ngaysinh);
            String gpaa = String.format("%.2f", this.gpa);
            s = this.masv + " " + this.hoten + " " + this.lop + " " + date + " " + gpaa;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException, ParseException {
        File file = new File("SV.in");
        Scanner sc = new Scanner(file);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            SinhVien sv = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()));
            System.out.println(sv.toString());
        }
    }
}
