/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J05057_BangDiemTuyenSinh {

    public static class ThiSinh {

        private String ma;
        private String hoten;
        private double diemtoan;
        private double diemly;
        private double diemhoa;
        private double diemuutien;
        private double tongdiem;
        private String trangthai;

        public ThiSinh(String ma, String hoten, String diemtoan, String diemly, String diemhoa) {
            this.ma = ma;
            this.hoten = hoten;
            this.diemly = Double.parseDouble(diemly);
            this.diemtoan = Double.parseDouble(diemtoan);
            this.diemhoa = Double.parseDouble(diemhoa);
            this.tongdiem = this.diemly + this.diemhoa + this.diemtoan * 2;

            String kv = ma.substring(0, 3);
            if (kv.equalsIgnoreCase("KV1")) {
                this.diemuutien = 0.5;
            } else if (kv.equalsIgnoreCase("KV2")) {
                this.diemuutien = 1;
            } else {
                this.diemuutien = 2.5;
            }

            if (this.tongdiem + this.diemuutien >= 24) {
                this.trangthai = "TRUNG TUYEN";
            } else {
                this.trangthai = "TRUOT";
            }
        }

        @Override
        public String toString() {
            String diemuutienF;

            if (diemuutien == (int) diemuutien) {
                diemuutienF = String.format("%d", (int) diemuutien);
            } else {
                diemuutienF = String.format("%.01f", diemuutien);
            }

            String tongdiemF;
            if (tongdiem == (int) tongdiem) {
                tongdiemF = String.format("%d", (int) tongdiem);
            } else {
                tongdiemF = String.format("%.01f", tongdiem);
            }

            String s = ma + " " + hoten + " " + diemuutienF + " " + tongdiemF + " " + trangthai;
            return s;
        }

    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            ThiSinh ts = new ThiSinh(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            System.out.println(ts.toString());
        }
    }
}
