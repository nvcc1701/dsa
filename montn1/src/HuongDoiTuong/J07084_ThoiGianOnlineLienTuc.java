/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Date;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J07084_ThoiGianOnlineLienTuc {

    public static class SinhVien {

        private String hoten;
        private Date tgbatdau;
        private Date tgketthuc;
        private long tgonline;

        public SinhVien(String hoten, String tgbatdau, String tgketthuc) throws ParseException {
            this.hoten = hoten;
            this.tgbatdau = new SimpleDateFormat("dd/mm/yyy HH:mm:ss").parse(tgbatdau);
            this.tgketthuc = new SimpleDateFormat("dd/mm/yyy HH:mm:ss").parse(tgketthuc);
            this.tgonline = this.tgketthuc.getTime() - this.tgbatdau.getTime();
        }

        @Override
        public String toString() {
            String s = "";
            double phut = this.tgonline / (1000 * 60);
            s += this.hoten + " " + String.format("%.0f", phut);
            return s; // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/OverriddenMethodBody
        }
    }

    public static void main(String[] args) throws FileNotFoundException, ParseException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("ONLINE.in"));
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<SinhVien> lst = new ArrayList<>();

        while (t-- > 0) {
            SinhVien sv = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(sv);
        }

        Collections.sort(lst, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                return Long.compare(o2.tgonline, o1.tgonline);
            }
        });

        for (SinhVien x : lst) {
            System.out.println(x);
        }
    }

}
