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
public class J05021_SapXepTheoMaSinhVien {

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
//        Scanner sc = new Scanner(new File("DATA.IN"));

        ArrayList<SinhVien> lst = new ArrayList<>();

        while (sc.hasNext()) {
            SinhVien sv = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(sv);
        }

        Collections.sort(lst, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                return o1.ma.compareToIgnoreCase(o2.ma);
            }
        });

        for (SinhVien sv : lst) {
            System.out.println(sv.toString());
        }
    }
}
