/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.Serializable;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class J07018_ChuanHoaDanhSachSinhVien {

    public static class SinhVien implements Serializable {

        private String hoten;
        private String lop;
        private Date ngaysinh;
        private double gpa;
        private String ma;
        private static int sma = 1;

        public SinhVien(String hoten, String lop, String ngaysinh, String gpa) throws ParseException {
            StringTokenizer st = new StringTokenizer(hoten);
            StringBuilder sb = new StringBuilder();

            while (st.hasMoreTokens()) {
                String s = st.nextToken().toLowerCase();
                sb.append(Character.toUpperCase(s.charAt(0)));

                for (int i = 1; i < s.length(); i++) {
                    sb.append(s.charAt(i));
                }
                sb.append(" ");
            }
            this.hoten = sb.toString().trim();
            this.lop = lop;
            this.ngaysinh = new SimpleDateFormat("dd/MM/yyyy").parse(ngaysinh);
            this.gpa = Double.parseDouble(gpa);
            this.ma = String.format("B20DCCN%03d", sma++);
        }

        @Override
        public String toString() {
            String d = new SimpleDateFormat("dd/MM/yyyy").format(ngaysinh);
            String s = ma + " " + hoten + " " + lop + " " + d + " " + String.format("%.02f", gpa);
            return s;
        }

    }

    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner sc = new Scanner(new File("SINHVIEN.in"));
        int t = Integer.parseInt(sc.nextLine());

        ArrayList<SinhVien> lst = new ArrayList<>();
        while (t-- > 0) {
            SinhVien sv = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(sv);
        }

        for (SinhVien sv : lst) {
            System.out.println(sv.toString());
        }
    }
}
