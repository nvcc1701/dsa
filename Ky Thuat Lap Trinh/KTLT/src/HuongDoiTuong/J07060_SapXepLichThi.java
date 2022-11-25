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
public class J07060_SapXepLichThi {

    public static class MonHoc {

        private String ma;
        private String mon;
        private String hinhthuc;

        public MonHoc(String ma, String mon, String hinhthuc) {
            this.ma = ma;
            this.mon = mon;
            this.hinhthuc = hinhthuc;
        }

        @Override
        public String toString() {
            String s = mon;
            return s;
        }
    }

    public static class CaThi {

        private String ma;
        private String ngay;
        private String gio;
        private String phong;

        public CaThi(String ma, String ngay, String gio, String phong) {
            this.ma = ma;
            this.ngay = ngay;
            this.gio = gio;
            this.phong = phong;
        }

        @Override
        public String toString() {
            String s = ngay + " " + gio + " " + phong + " ";
            return s.trim();
        }
    }

    public static class LichThi {

        private CaThi caThi;
        private MonHoc monHoc;
        private String nhom;
        private String soSv;

        public LichThi(CaThi caThi, MonHoc monHoc, String nhom, String soSv) {
            this.caThi = caThi;
            this.monHoc = monHoc;
            this.nhom = nhom;
            this.soSv = soSv;
        }

        @Override
        public String toString() {
            String s = caThi.ngay + " " + caThi.gio + " " + caThi.phong + " " + monHoc.mon + " " + nhom + " " + soSv;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc1 = new Scanner(new File("MONTHI.in"));
        Scanner sc2 = new Scanner(new File("CATHI.in"));
        Scanner sc3 = new Scanner(new File("LICHTHI.in"));

        HashMap<String, MonHoc> mMonHoc = new HashMap<>();
        HashMap<String, CaThi> mCaThi = new HashMap<>();
        ArrayList<LichThi> lst = new ArrayList<>();

        int t1 = Integer.parseInt(sc1.nextLine());
        int t2 = Integer.parseInt(sc2.nextLine());
        int t3 = Integer.parseInt(sc3.nextLine());

        while (t1-- > 0) {
            MonHoc mh = new MonHoc(sc1.nextLine(), sc1.nextLine(), sc1.nextLine());
            mMonHoc.put(mh.ma, mh);
        }

        while (t2-- > 0) {
            CaThi ct = new CaThi(sc2.nextLine(), sc2.nextLine(), sc2.nextLine(), sc2.nextLine());
            mCaThi.put(ct.ma, ct);
        }

        while (t3-- > 0) {
            LichThi lt = new LichThi(mCaThi.get(sc3.nextLine()), mMonHoc.get(sc3.nextLine()), sc3.nextLine(), sc3.nextLine());
            lst.add(lt);
        }

        for (LichThi lt : lst) {
            System.out.println(lt.toString());
        }
    }
}
