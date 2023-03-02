/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J05074_DiemDanh1 {

    public static class SinhVien {

        private String ma;
        private String ten;
        private String lop;
        private int diemcc;
        private String ghichu;

        public SinhVien(String ma, String ten, String lop) {
            this.ma = ma;
            this.ten = ten;
            this.lop = lop;
        }

        public String getMa() {
            return this.ma;
        }

        public void setDiemcc(String s) {
            this.diemcc = 10;
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == 'm') {
                    this.diemcc -= 1;
                } else if (s.charAt(i) == 'v') {
                    this.diemcc -= 2;
                }
            }

            if (this.diemcc <= 0) {
                this.diemcc = 0;
                this.ghichu = "KDDK";
            }
        }

        @Override
        public String toString() {
            String s = ma + " " + ten + " " + lop + " " + diemcc;
            if (ghichu != null && !ghichu.isEmpty()) {
                s += " " + ghichu;
            }
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        int tt = t;
        HashMap<String, SinhVien> map = new HashMap<>();
        ArrayList<SinhVien> lst = new ArrayList<>();

        while (t-- > 0) {
            SinhVien sv = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(sv);
            map.put(sv.getMa(), sv);
        }

        while (tt-- > 0) {
            String ma = sc.next();
            String dd = sc.next();

            map.get(ma).setDiemcc(dd);
        }

        for (SinhVien sv : lst) {
            System.out.println(sv.toString());
        }
    }
}
