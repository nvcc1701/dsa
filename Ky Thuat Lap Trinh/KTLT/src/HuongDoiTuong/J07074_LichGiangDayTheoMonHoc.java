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

/**
 *
 * @author anhnguyen
 */
public class J07074_LichGiangDayTheoMonHoc {

    public static class MonHoc {

        private String mamon;
        private String tenmon;
        private int sotc;

        public MonHoc(String mamon, String tenmon, String sotc) {
            this.mamon = mamon;
            this.tenmon = tenmon;
            this.sotc = Integer.parseInt(sotc);
        }

        @Override
        public String toString() {
            return "MonHoc{" + "mamon=" + mamon + ", tenmon=" + tenmon + ", sotc=" + sotc + '}';
        }

    }

    public static class NhomLopHoc implements Serializable {

        private String manhom;
        private String mamon;
        private int ngaygiangday;
        private int kiphoc;
        private String hotengv;
        private String phonghoc;
        private static int sma = 1;

        public NhomLopHoc(String mamon, String ngaygiangday, String kiphoc, String hotengv, String phonghoc) {
            this.manhom = String.format("HP%03d", sma++);
            this.mamon = mamon;
            this.ngaygiangday = Integer.parseInt(ngaygiangday);
            this.kiphoc = Integer.parseInt(kiphoc);
            this.hotengv = hotengv;
            this.phonghoc = phonghoc;
        }

        @Override
        public String toString() {
            String s = manhom + " " + ngaygiangday + " " + kiphoc + " " + hotengv + " " + phonghoc;
            return s;
        }

    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc1 = new Scanner(new File("MONHOC.in"));
        Scanner sc2 = new Scanner(new File("LICHGD.in"));

        HashMap<String, String> map1 = new HashMap<>();
        int t1 = Integer.parseInt(sc1.nextLine());
        while (t1-- > 0) {
            MonHoc mh = new MonHoc(sc1.nextLine(), sc1.nextLine(), sc1.nextLine());
            map1.put(mh.mamon, mh.tenmon);
        }

        ArrayList<NhomLopHoc> lst = new ArrayList<>();

        int t2 = Integer.parseInt(sc2.nextLine());
        while (t2-- > 0) {
            NhomLopHoc mlh = new NhomLopHoc(sc2.nextLine(), sc2.nextLine(), sc2.nextLine(), sc2.nextLine(), sc2.nextLine());
            lst.add(mlh);
        }

        String key = sc2.nextLine();

        Collections.sort(lst, new Comparator<NhomLopHoc>() {
            @Override
            public int compare(NhomLopHoc o1, NhomLopHoc o2) {
                if (Integer.compare(o1.ngaygiangday, o2.ngaygiangday) == 0) {
                    if (Integer.compare(o1.kiphoc, o2.kiphoc) == 0) {
                        return o1.hotengv.compareToIgnoreCase(o2.hotengv);
                    }

                    return Integer.compare(o1.kiphoc, o2.kiphoc);
                }

                return Integer.compare(o1.ngaygiangday, o2.ngaygiangday);
            }
        });

        System.out.println("LICH GIANG DAY MON " + map1.get(key) + ":");
        for (NhomLopHoc nlh : lst) {
            if (nlh.mamon.equalsIgnoreCase(key)) {
                System.out.println(nlh.toString());
            }
        }
    }
}
