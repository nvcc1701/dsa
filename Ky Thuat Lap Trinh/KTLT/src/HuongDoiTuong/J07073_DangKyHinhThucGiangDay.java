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
public class J07073_DangKyHinhThucGiangDay {

    public static class MonHoc {

        private String ma;
        private String ten;
        private int sotc;
        private String hinhthuclt;
        private String hinhthucth;

        public MonHoc(String ma, String ten, String sotc, String hinhthuclt, String hinhthucth) {
            this.ma = ma;
            this.ten = ten;
            this.sotc = Integer.parseInt(sotc);
            this.hinhthuclt = hinhthuclt;
            this.hinhthucth = hinhthucth;
        }

        @Override
        public String toString() {
            String s = ma + " " + ten + " " + sotc + " " + hinhthuclt + " " + hinhthucth;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("MONHOC.in"));

        int t = Integer.parseInt(sc.nextLine());

        ArrayList<MonHoc> lst = new ArrayList<>();
        while (t-- > 0) {
            MonHoc mh = new MonHoc(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());

            if (!mh.hinhthucth.equalsIgnoreCase("Truc tiep")) {
                lst.add(mh);
            }
        }

        Collections.sort(lst, new Comparator<MonHoc>() {
            @Override
            public int compare(MonHoc o1, MonHoc o2) {
                return o1.ma.compareToIgnoreCase(o2.ma);
            }
        });

        for (MonHoc mh : lst) {
            System.out.println(mh.toString());
        }
    }
}
