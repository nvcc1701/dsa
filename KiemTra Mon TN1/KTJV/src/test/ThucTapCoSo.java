/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package test;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class ThucTapCoSo {

    public static class SinhVien {

        private String ma;
        private String hoten;
        private String sodt;
        private String email;

        public SinhVien(String ma, String hoten, String sodt, String email) {
            this.ma = ma;
            this.hoten = hoten;
            this.sodt = sodt;
            this.email = email;
        }

        public SinhVien() {
        }

        public String getMa() {
            return ma;
        }

        public void setMa(String ma) {
            this.ma = ma;
        }

        public String getHoten() {
            return hoten;
        }

        public void setHoten(String hoten) {
            this.hoten = hoten;
        }

        public String getSodt() {
            return sodt;
        }

        public void setSodt(String sodt) {
            this.sodt = sodt;
        }

        public String getEmail() {
            return email;
        }

        public void setEmail(String email) {
            this.email = email;
        }

        @Override
        public String toString() {
            return "SinhVien{" + "ma=" + ma + ", hoten=" + hoten + ", sodt=" + sodt + ", email=" + email + '}';
        }

    }

    public static class DeTai {

        private String tengianvien;
        private String tendetai;
        private String ma;
        private static int sma = 1;

        public DeTai(String tengianvien, String tendetai) {
            this.tengianvien = tengianvien;
            this.tendetai = tendetai;
            this.ma = String.format("DT%03d", sma++);
        }

        public DeTai() {
        }

        public String getTengianvien() {
            return tengianvien;
        }

        public void setTengianvien(String tengianvien) {
            this.tengianvien = tengianvien;
        }

        public String getTendetai() {
            return tendetai;
        }

        public void setTendetai(String tendetai) {
            this.tendetai = tendetai;
        }

        public String getMa() {
            return ma;
        }

        public void setMa(String ma) {
            this.ma = ma;
        }

        public static int getSma() {
            return sma;
        }

        public static void setSma(int sma) {
            DeTai.sma = sma;
        }

        @Override
        public String toString() {
            return "DeTai{" + "tengianvien=" + tengianvien + ", tendetai=" + tendetai + ", ma=" + ma + '}';
        }

    }

    public static class NhiemVu {

        private String msv;
        private String hotensv;
        private String sdt;
        private String email;
        private String hotengianvien;
        private String tendetai;

        public NhiemVu(String msv, String hotensv, String sdt, String email, String hotengianvien, String tendetai) {
            this.msv = msv;
            this.hotensv = hotensv;
            this.sdt = sdt;
            this.email = email;
            this.hotengianvien = hotengianvien;
            this.tendetai = tendetai;
        }

        @Override
        public String toString() {
            String s = "";
            s += this.msv + " " + this.hotensv + " " + this.sdt + " " + this.email + " " + this.hotengianvien + " " + this.tendetai;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("SINHVIEN.in"));
        Scanner sc2 = new Scanner(new File("DETAI.in"));
        Scanner sc3 = new Scanner(new File("NHIEMVU.in"));

        ArrayList<SinhVien> lst1 = new ArrayList();
        ArrayList<DeTai> lst2 = new ArrayList();
        ArrayList<NhiemVu> lst3 = new ArrayList();

        int n1 = Integer.parseInt(sc.nextLine());
        while (n1-- > 0) {
            SinhVien sv = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst1.add(sv);
        }

        int n2 = Integer.parseInt(sc2.nextLine());
        while (n2-- > 0) {
            DeTai dt = new DeTai(sc2.nextLine(), sc2.nextLine());
            lst2.add(dt);
        }

        int n3 = Integer.parseInt(sc3.nextLine());
        while (n3-- > 0) {
            StringTokenizer st = new StringTokenizer(sc3.nextLine());
            String msv = st.nextToken();
            String mdt = st.nextToken();
            SinhVien sv = new SinhVien();
            DeTai dt = new DeTai();

            for (SinhVien x : lst1) {
                if (x.ma.equalsIgnoreCase(msv)) {
                    sv.setMa(x.ma);
                    sv.setEmail(x.email);
                    sv.setSodt(x.sodt);
                    sv.setHoten(x.hoten);
                }
            }

            for (DeTai x : lst2) {
                if (x.ma.equalsIgnoreCase(mdt)) {
                    dt = x;
                }
            }

            NhiemVu nv = new NhiemVu(sv.ma, sv.hoten, sv.sodt, sv.email, dt.tengianvien, dt.tendetai);
            lst3.add(nv);
        }

        Collections.sort(lst3, new Comparator<NhiemVu>() {
            @Override
            public int compare(NhiemVu o1, NhiemVu o2) {
                return o1.tendetai.compareToIgnoreCase(o2.tendetai);
            }
        });

        for (NhiemVu x : lst3) {
            System.out.println(x);
        }
    }
}
