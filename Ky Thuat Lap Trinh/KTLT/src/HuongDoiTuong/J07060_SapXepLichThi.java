/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class J07060_SapXepLichThi {

    public static HashMap<String, MonHoc> mMonHoc = new HashMap<>();
    public static HashMap<String, CaThi> mCaThi = new HashMap<>();

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

    public static class CaThi implements Serializable {

        private String ma;
        private String ngay;
        private String gio;
        private String phong;
        private static int sma = 1;

        public CaThi(String ngay, String gio, String phong) {
            this.ma = String.format("C%03d", sma++);
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

        public LichThi(String caThi, String monHoc, String nhom, String soSv) {
            this.caThi = mCaThi.get(caThi);
            this.monHoc = mMonHoc.get(monHoc);
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

        ArrayList<LichThi> lst = new ArrayList<>();

        int t1 = Integer.parseInt(sc1.nextLine());
        int t2 = Integer.parseInt(sc2.nextLine());
        int t3 = Integer.parseInt(sc3.nextLine());

        while (t1-- > 0) {
            MonHoc mh = new MonHoc(sc1.nextLine(), sc1.nextLine(), sc1.nextLine());
            mMonHoc.put(mh.ma, mh);
        }

        while (t2-- > 0) {
            CaThi ct = new CaThi(sc2.nextLine(), sc2.nextLine(), sc2.nextLine());
            mCaThi.put(ct.ma, ct);
        }

        while (t3-- > 0) {
            StringTokenizer st = new StringTokenizer(sc3.nextLine());
            LichThi lt = new LichThi(st.nextToken(), st.nextToken(), st.nextToken(), st.nextToken());
            lst.add(lt);
        }

        Collections.sort(lst, new Comparator<LichThi>() {
            @Override
            public int compare(LichThi o1, LichThi o2) {
                if (o1.caThi.ngay.compareTo(o2.caThi.ngay) == 0) {
                    if (o1.caThi.gio.compareTo(o2.caThi.gio) == 0) {
                        return o1.caThi.ma.compareToIgnoreCase(o2.caThi.ma);
                    }

                    return o1.caThi.gio.compareTo(o2.caThi.gio);
                }
                return o1.caThi.ngay.compareTo(o2.caThi.ngay);
            }
        });

        for (LichThi lt : lst) {
            System.out.println(lt.toString());
        }
    }
}
