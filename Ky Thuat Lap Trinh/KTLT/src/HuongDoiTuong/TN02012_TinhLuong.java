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
public class TN02012_TinhLuong {

    public static HashMap<String, String> map;

    public static class NhanVien {

        private String ma;
        private String ten;
        private String phongban;
        private String luongthang;
        private String luongcoban;
        private String songaycong;

        public NhanVien(String ma, String ten, String luongcoban, String songaycong) {
            this.ma = ma;
            this.ten = ten;
            this.luongcoban = luongcoban;
            this.songaycong = songaycong;
        }

        @Override
        public String toString() {
            String s = ma + " " + ten + " " + phongban + " " + luongthang;
            return s;
        }

    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("DATA.in"));
        int t = Integer.parseInt(sc.nextLine());

        map = new HashMap<>();
        while (t-- > 0) {
            map.put(sc.nextLine(), sc.nextLine());
        }

        ArrayList<NhanVien> lst = new ArrayList<>();
        int tt = Integer.parseInt(sc.nextLine());
        while (tt-- > 0) {
            NhanVien nv = new NhanVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(nv);
        }

    }
}
