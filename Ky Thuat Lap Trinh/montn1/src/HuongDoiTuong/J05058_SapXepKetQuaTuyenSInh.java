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
public class J05058_SapXepKetQuaTuyenSInh {

    public static class ThiSinh {

        private String ma;
        private String hoten;
        private double diemtoan;
        private double diemly;
        private double diemhoa;
        private double diemuutien;
        private double diemxettuyen;
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

            this.diemxettuyen = this.diemhoa + this.diemtoan + this.diemly + this.diemuutien;
        }

        public void updateTrangthai(double diemchuan) {
            if (this.diemxettuyen >= diemchuan) {
                this.trangthai = "TRUNG TUYEN";
            } else {
                this.trangthai = "TRUOT";
            }
        }

        public void setTrangthai(String trangthai) {
            this.trangthai = trangthai;
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
        File file = new File("THISINH.in");
        Scanner sc = new Scanner(file);
        ArrayList<ThiSinh> lst = new ArrayList<>();

        int t = Integer.parseInt(sc.nextLine());
        int tongthisinh = t;
        while (t-- > 0) {
            ThiSinh ts = new ThiSinh(sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()));
            lst.add(ts);
        }
        int chitieu = Integer.parseInt(sc.nextLine());
        Collections.sort(lst, new Comparator<ThiSinh>() {
            @Override
            public int compare(ThiSinh o1, ThiSinh o2) {
                if (o2.diemxettuyen == o1.diemxettuyen) {
                    return o2.ma.compareToIgnoreCase(o1.ma);
                } else {
                    return Double.compare(o2.diemxettuyen, o1.diemxettuyen);
                }
            }
        });

        double diemchuan = 0;
        if (tongthisinh > chitieu) {
            for (int i = 0; i < chitieu; i++) {
                diemchuan += lst.get(i).diemxettuyen;
            }
            diemchuan /= chitieu;
            System.out.println(diemchuan);

            for (ThiSinh x : lst) {
                x.updateTrangthai(diemchuan);
                System.out.println(x.toString());
            }
        } else {
            diemchuan = Collections.min(lst, new Comparator<ThiSinh>() {
                @Override
                public int compare(ThiSinh o1, ThiSinh o2) {
                    return Double.compare(o1.diemxettuyen, o2.diemxettuyen);
                }
            }).diemxettuyen;

            System.out.println(diemchuan);

            for (ThiSinh x : lst) {
                x.setTrangthai("TRUNG TUYEN");
                System.out.println(x.toString());
            }
        }
    }
}
