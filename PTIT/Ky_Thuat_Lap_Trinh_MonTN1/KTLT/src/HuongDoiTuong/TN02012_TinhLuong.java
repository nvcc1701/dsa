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
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class TN02012_TinhLuong {

    public static HashMap<String, String> map;

    public static HashMap<String, int[]> mHeSo = new HashMap<>();

    public static class NhanVien {

        private String ma;
        private String ten;
        private int luongcoban;
        private int songaycong;

        private int heso;
        private int luongthang;
        private String phongban;

        public NhanVien(String ma, String ten, String luongcoban, String songaycong) {
            this.ma = ma;
            this.ten = ten;
            this.luongcoban = Integer.parseInt(luongcoban);
            this.songaycong = Integer.parseInt(songaycong);

            String phanloai = ma.substring(0, 1);
            int sonamct = Integer.parseInt(ma.substring(1, 3));
            String phongbanI = ma.substring(3, 5);
            this.phongban = map.get(phongbanI);

            try {
                heso = mHeSo.get(phanloai)[sonamct];
            } catch (Exception e) {
                heso = mHeSo.get(phanloai)[16];
            }

            this.luongthang = this.luongcoban * this.songaycong * this.heso * 1000;
        }

        @Override
        public String toString() {
            String s = "";
            s += ma + " " + ten + " " + phongban + " " + luongthang;
            return s;
        }

    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        int t = Integer.parseInt(sc.nextLine());

        //         0  1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16 
        int b[] = {0, 10, 10, 10, 11, 11, 11, 11, 11, 13, 13, 13, 13, 13, 13, 13, 16};
        int c[] = {0, 9, 9, 9, 10, 10, 10, 10, 10, 12, 12, 12, 12, 12, 12, 12, 14};
        int d[] = {0, 8, 8, 8, 9, 9, 9, 9, 9, 11, 11, 11, 11, 11, 11, 11, 13};
        int a[] = {0, 10, 10, 10, 12, 12, 12, 12, 12, 14, 14, 14, 14, 14, 14, 14, 20};
        mHeSo.put("A", a);
        mHeSo.put("B", b);
        mHeSo.put("C", c);
        mHeSo.put("D", d);

        map = new HashMap<>();
        while (t-- > 0) {
            StringTokenizer st = new StringTokenizer(sc.nextLine());
            String ma = st.nextToken();
            String ten = "";
            while (st.hasMoreTokens()) {
                ten += st.nextToken();
                ten += " ";
            }

            map.put(ma, ten.trim());
        }

        t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            NhanVien nv = new NhanVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            System.out.println(nv.toString());
        }
    }
}
