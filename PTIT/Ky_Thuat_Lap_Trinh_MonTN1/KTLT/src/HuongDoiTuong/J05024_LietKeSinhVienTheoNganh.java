/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J05024_LietKeSinhVienTheoNganh {

    public static class SinhVien {

        private String ma;
        private String hoten;
        private String lop;
        private String email;

        public SinhVien(String ma, String hoten, String lop, String email) {
            this.ma = ma;
            this.hoten = hoten;
            this.lop = lop;
            this.email = email;
        }

        @Override
        public String toString() {
            String s = ma + " " + hoten + " " + lop + " " + email;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("DATA.in"));
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<SinhVien> lst = new ArrayList<>();

        while (t-- > 0) {
            SinhVien sv = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(sv);
        }

        int q = Integer.parseInt(sc.nextLine());
        while (q-- > 0) {
            String s = sc.nextLine();
            System.out.println("DANH SACH SINH VIEN NGANH " + s.toUpperCase() + ":");
            String qq;
            if (s.equalsIgnoreCase("Ke toan")) {
                qq = "DCKT";
            } else if (s.equalsIgnoreCase("Cong nghe thong tin")) {
                qq = "DCCN";
            } else if (s.equalsIgnoreCase("An toan thong tin")) {
                qq = "DCAT";
            } else if (s.equalsIgnoreCase("Dien tu vien thong")) {
                qq = "DCVT";
            } else {
                qq = "DCDT";
            }
            for (SinhVien sv : lst) {
                if (qq == "DCCN" || qq == "DCAT") {
                    if (!sv.lop.contains("E") && sv.ma.contains(qq)) {
                        System.out.println(sv.toString());
                    }
                } else {
                    if (sv.ma.contains(qq)) {
                        System.out.println(sv.toString());
                    }
                }
            }
        }
    }
}
