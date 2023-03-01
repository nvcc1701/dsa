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
public class J05022_LietKeSinhVienTheoLop {

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
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<SinhVien> lst = new ArrayList<>();

        while (t-- > 0) {
            SinhVien sv = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(sv);
        }

        int q = Integer.parseInt(sc.nextLine());
        while (q-- > 0) {
            String qq = sc.nextLine();
            System.out.println("DANH SACH SINH VIEN LOP " + qq + ":");
            for (SinhVien sv : lst) {
                if (sv.lop.equalsIgnoreCase(qq)) {
                    System.out.println(sv.toString());
                }
            }
        }
    }
}
