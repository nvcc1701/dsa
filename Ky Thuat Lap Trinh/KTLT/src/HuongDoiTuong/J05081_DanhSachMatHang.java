/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J05081_DanhSachMatHang {

    public static class MatHang implements Serializable {

        private static int sma = 001;
        private String ma;
        private String tenmh;
        private String donvitinh;
        private int giamua;
        private int giaban;
        private int loinhuan;

        public MatHang(String tenmh, String donvitinh, String giamua, String giaban) {
            this.ma = String.format("MH%03d", sma++);
            this.tenmh = tenmh;
            this.donvitinh = donvitinh;
            this.giamua = Integer.parseInt(giamua);
            this.giaban = Integer.parseInt(giaban);
            this.loinhuan = this.giaban - this.giamua;
        }

        @Override
        public String toString() {
            String s = "";
            s += this.ma + " " + this.tenmh + " " + this.donvitinh + " " + this.giamua + " " + this.giaban + " " + this.loinhuan;
            return s;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<MatHang> lst = new ArrayList<>();

        while (t-- > 0) {
            MatHang mh = new MatHang(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(mh);
        }

        Collections.sort(lst, new Comparator<MatHang>() {
            @Override
            public int compare(MatHang o1, MatHang o2) {
                if (o1.loinhuan == o2.loinhuan) {
                    return o1.ma.compareToIgnoreCase(o2.ma);
                } else {
                    return o2.loinhuan - o1.loinhuan;
                }
            }

        });

        for (MatHang x : lst) {
            System.out.println(x.toString());
        }
    }
}
