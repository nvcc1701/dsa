/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong.contest2;

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
public class SapXepDanhSachSinhVien {

    public static class SinhVien {

        private String ma;
        private String hoten;
        private String sdt;
        private String email;

        public SinhVien(String ma, String hoten, String sdt, String email) {
            this.ma = ma;
            this.hoten = hoten;
            this.sdt = sdt;
            this.email = email;
        }

        @Override
        public String toString() {
            String s = "";
            s += this.ma + " " + this.hoten + " " + this.sdt + " " + this.email;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        ArrayList<SinhVien> lst = new ArrayList<>();

        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            SinhVien sv = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(sv);
        }

        Collections.sort(lst, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                String[] st1 = o1.hoten.split("\\s+");
                String[] st2 = o2.hoten.split("\\s+");

                String ten1 = st1[st1.length - 1];
                String ten2 = st2[st2.length - 1];
                String ho1 = st1[0];
                String ho2 = st2[0];

                String dem1 = "";
                String dem2 = "";

                for (int i = 1; i < st1.length - 1; i++) {
                    dem1 += st1[i];
                    dem1 += " ";
                }

                for (int i = 1; i < st2.length - 1; i++) {
                    dem2 += st2[i];
                    dem2 += " ";
                }

                dem1 = dem1.trim();
                dem2 = dem2.trim();

                if (ten1.equalsIgnoreCase(ten2)) {
                    if (ho1.equalsIgnoreCase(ho2)) {
                        if (!dem1.equalsIgnoreCase(dem2)) {
                            return dem1.compareToIgnoreCase(dem2);
                        } else {
                            return o1.ma.compareToIgnoreCase(o2.ma);
                        }
                    }
                    return ho1.compareToIgnoreCase(ho2);
                }
                return ten1.compareToIgnoreCase(ten2);
            }
        });

        for (SinhVien x : lst) {
            System.out.println(x);
        }
    }
}
