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
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class J05004_DanhSachDoiTuongSinhVien2 {

    public static class SinhVien {

        private String masv;
        private String hoten;
        private String lop;
        private Date ngaysinh;
        private float gpa;
        private static int sma = 1;

        public SinhVien(String hoten, String lop, String ngaysinh, float gpa) throws ParseException {
            this.masv = String.format("B20DCCN%03d", sma++);

            StringTokenizer st = new StringTokenizer(hoten.toLowerCase());
            StringBuilder sb = new StringBuilder();
            while (st.hasMoreTokens()) {
                String s = st.nextToken();
                sb.append(Character.toUpperCase(s.charAt(0)));
                for (int i = 1; i < s.length(); i++) {
                    sb.append(s.charAt(i));
                }
                sb.append(" ");
            }

            this.hoten = sb.toString().trim();
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

    public static void main(String[] args) throws ParseException, FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));

        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            SinhVien sv = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), Float.parseFloat(sc.nextLine()));
            System.out.println(sv.toString());
        }
    }
}
