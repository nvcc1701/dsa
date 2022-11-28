/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.Serializable;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.Date;
import java.util.GregorianCalendar;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class J07053_XetTuyen {

    public static class ThiSinh implements Serializable {

        private String ma;
        private String hoten;
        private Date ngaysinh;
        private double diemlt;
        private double diemth;
        private double diemthuong;
        private String xeploai;
        private double diemtb;
        private static int sma = 1;

        public ThiSinh(String hoten, String ngaysinh, String diemlt, String diemth) throws ParseException {
            this.ma = String.format("PH%02d", sma++);
            StringTokenizer st = new StringTokenizer(hoten);
            StringBuilder sb = new StringBuilder();

            while (st.hasMoreElements()) {
                String s = st.nextToken().toLowerCase();
                sb.append(Character.toUpperCase(s.charAt(0)));

                for (int i = 1; i < s.length(); i++) {
                    sb.append(s.charAt(i));
                }
                sb.append(" ");
            }

            this.hoten = sb.toString().trim();
            this.ngaysinh = new SimpleDateFormat("dd/MM/yyyy").parse(ngaysinh);
            this.diemlt = Double.parseDouble(diemlt);
            this.diemth = Double.parseDouble(diemth);

            if (this.diemlt >= 8 && this.diemth >= 8) {
                this.diemthuong = 1;
            } else if (this.diemlt >= 7.5 && this.diemth >= 7.5) {
                this.diemthuong = 0.5;
            } else {
                this.diemthuong = 0;
            }

            double total = (this.diemlt + this.diemth) / 2 + this.diemthuong;
            if (total > 10) {
                this.diemtb = 10;
            } else {
                this.diemtb = Math.round(total);
            }

            if (this.diemtb < 5) {
                this.xeploai = "Truot";
            } else if (this.diemtb <= 6) {
                this.xeploai = "Trung binh";
            } else if (this.diemtb <= 7) {
                this.xeploai = "Kha";
            } else if (this.diemtb <= 8) {
                this.xeploai = "Gioi";
            } else if (this.diemtb <= 10) {
                this.xeploai = "Xuat sac";
            }
        }

        @Override
        public String toString() {
            Calendar cal = new GregorianCalendar();
            cal.setTime(ngaysinh);
            int tt = 2021 - cal.get(Calendar.YEAR);
            String s = ma + " " + hoten + " " + tt + " " + String.format("%.0f", diemtb) + " " + xeploai;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException, ParseException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("XETTUYEN.in"));

        int t = Integer.parseInt(sc.nextLine());
        ArrayList<ThiSinh> lst = new ArrayList<>();

        while (t-- > 0) {
            ThiSinh ts = new ThiSinh(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(ts);
        }

        for (ThiSinh ts : lst) {
            System.out.println(ts.toString());
        }
    }
}
