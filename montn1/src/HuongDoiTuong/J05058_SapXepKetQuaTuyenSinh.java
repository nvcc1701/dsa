/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J05058_SapXepKetQuaTuyenSinh {

    public static class ThiSinh {

        private String ma;
        private String hoten;
        private double diemtoan;
        private double diemly;
        private double diemhoa;
        private double diemuutien;
        private double diemxettuyen;
        private String trangthai;

        public ThiSinh(String ma, String hoten, String diemtoan, String diemly, String diemhoa) {
            this.ma = ma;
            this.hoten = hoten;
            this.diemtoan = Double.parseDouble(diemtoan);
            this.diemly = Double.parseDouble(diemly);
            this.diemhoa = Double.parseDouble(diemhoa);

            String uutien = ma.substring(0, 3);

            if (uutien.equalsIgnoreCase("KV1")) {
                this.diemuutien = 0.5;
            } else if (uutien.equalsIgnoreCase("KV2")) {
                this.diemuutien = 1;
            } else {
                this.diemuutien = 2.5;
            }

            this.diemxettuyen = this.diemtoan * 2 + this.diemly + this.diemhoa + this.diemuutien;

            if (this.diemxettuyen >= 24) {
                this.trangthai = "TRUNG TUYEN";
            } else {
                this.trangthai = "TRUOT";
            }
        }

        @Override
        public String toString() {
            String s = "";
            DecimalFormat df = new DecimalFormat("0.#");
            String diemxettuyen = df.format(this.diemxettuyen);
            String diemuutien = df.format(this.diemuutien);
            s += this.ma + " " + this.hoten + " " + diemuutien + " " + diemxettuyen + " " + this.trangthai;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("DATA.in"));
        ArrayList<ThiSinh> lst = new ArrayList<>();

        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            ThiSinh ts = new ThiSinh(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(ts);
        }

        Collections.sort(lst, new Comparator<ThiSinh>() {
            @Override
            public int compare(ThiSinh o1, ThiSinh o2) {
                if (o1.diemxettuyen == o2.diemxettuyen) {
//                    String makv1 = o1.ma.substring(0, 3);
//                    String makv2 = o2.ma.substring(0, 3);
//                    String machucai1 = o1.ma.substring(3, 4);
//                    String machucai2 = o2.ma.substring(3, 4);
//                    String mats1 = o1.ma.substring(5);
//                    String mats2 = o2.ma.substring(5);

//                    System.out.println(makv1 + " " + machucai1 + " " + mats1);

                    return o1.ma.compareToIgnoreCase(o2.ma);
                }
                return Double.compare(o2.diemxettuyen, o1.diemxettuyen);
            }
        });

        for (ThiSinh x : lst) {
            System.out.println(x);
        }
    }
}
