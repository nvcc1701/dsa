/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong.contest1;

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
public class DuaXeDap {

    public static class CuaRo {

        private String ma;
        private String hoten;
        private String donvi;
        private double vantoctb;

        public CuaRo(String hoten, String donvi, String thoidiem) {
            String stDonvi[] = donvi.split("\\s+");
            String stHoten[] = hoten.split("\\s+");
            String s = "";

            for (int i = 0; i < stDonvi.length; i++) {
                s += stDonvi[i].charAt(0);
            }

            for (int i = 0; i < stHoten.length; i++) {
                s += stHoten[i].charAt(0);
            }

            this.ma = s;
            this.hoten = hoten;
            this.donvi = donvi;

            String stThoidiem[] = thoidiem.split("\\:");
            double thoidiemI = Double.parseDouble(stThoidiem[0]) + Double.parseDouble(stThoidiem[1]) / 60;
            double x = thoidiemI - 6;

            this.vantoctb = (120 / x);
        }

        @Override
        public String toString() {
            String s = "";

            s += this.ma + " " + this.hoten + " " + this.donvi + " " + Math.round(this.vantoctb) + " Km/h";
            return s;
        }

    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<CuaRo> lst = new ArrayList<>();

        while (t-- > 0) {
            CuaRo cr = new CuaRo(sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(cr);
        }

        Collections.sort(lst, new Comparator<CuaRo>() {
            @Override
            public int compare(CuaRo o1, CuaRo o2) {
                return Double.compare(o2.vantoctb, o1.vantoctb);
            }
        });

        for (CuaRo x : lst) {
            System.out.println(x.toString());
        }
    }
}
