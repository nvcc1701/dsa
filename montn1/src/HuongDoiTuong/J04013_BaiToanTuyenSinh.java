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
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class J04013_BaiToanTuyenSinh {

    public static class ThiSinh {

        private String ma;
        private String hoten;
        private double diemtoan;
        private double diemly;
        private double diemhoa;
        private double diemuutien;
        private double diemxettuyen;
        private double tongdiem;
        private String trangthai;

        public ThiSinh(String ma, String hoten, double diemtoan, double diemly, double diemhoa) {
            this.ma = ma;

            StringTokenizer st = new StringTokenizer(hoten);
            StringBuilder sb = new StringBuilder();
            while (st.hasMoreTokens()) {
                String s = st.nextToken().toLowerCase();
                sb.append(Character.toUpperCase(s.charAt(0)));
                for (int i = 1; i < s.length(); i++) {
                    sb.append(s.charAt(i));
                }
                sb.append(" ");
            }

            this.hoten = sb.toString().trim();
            this.diemtoan = diemtoan * 2;
            this.diemly = diemly;
            this.diemhoa = diemhoa;

            String uutien = ma.substring(0, 3);
            if (uutien.equalsIgnoreCase("KV1")) {
                this.diemuutien = 0.5;
            } else if (uutien.equalsIgnoreCase("KV2")) {
                this.diemuutien = 1;
            } else {
                this.diemuutien = 2.5;
            }

            this.tongdiem = this.diemhoa + this.diemtoan + this.diemly;

            this.diemxettuyen = this.diemhoa + this.diemtoan + this.diemly + this.diemuutien;

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
            String tongdiem = df.format(this.tongdiem);
            String diemuutien = df.format(this.diemuutien);
            s += this.ma + " " + this.hoten + " " + diemuutien + " " + tongdiem + " " + this.trangthai;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);

        ThiSinh ts = new ThiSinh(sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()));
        System.out.println(ts.toString());
    }
}
