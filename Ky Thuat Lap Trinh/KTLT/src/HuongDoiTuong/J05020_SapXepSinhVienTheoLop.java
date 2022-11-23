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
public class J05020_SapXepSinhVienTheoLop {

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

        Collections.sort(lst, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                if (o1.lop.compareToIgnoreCase(o2.lop) == 0) {
                    return o1.ma.compareToIgnoreCase(o2.ma);
                } else {
                    return o1.lop.compareToIgnoreCase(o2.lop);
                }
            }
        });

        for (SinhVien sv : lst) {
            System.out.println(sv.toString());
        }
    }
}
