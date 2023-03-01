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
public class LuyenTapLapTrinh {

    public static class SinhVien {

        private String hoten;
        private long sobailamdung;
        private long soluotsubmit;

        public SinhVien(String hoten, long sobailamdung, long soluotsubmit) {
            this.hoten = hoten;
            this.sobailamdung = sobailamdung;
            this.soluotsubmit = soluotsubmit;
        }

        @Override
        public String toString() {
            String s = "";
            s += this.hoten + " " + this.sobailamdung + " " + this.soluotsubmit;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("LUYENTAP.in"));
        int t = Integer.parseInt(sc.nextLine());

        ArrayList<SinhVien> lst = new ArrayList<>();

        while (t-- > 0) {
            String hoten = sc.nextLine();
            StringTokenizer st = new StringTokenizer(sc.nextLine());
            String n1 = st.nextToken();
            String n2 = st.nextToken();

            SinhVien sv = new SinhVien(hoten, Long.parseLong(n1), Long.parseLong(n2));
            lst.add(sv);
        }

        Collections.sort(lst, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                if (o1.sobailamdung == o2.sobailamdung) {
                    if (o1.soluotsubmit == o2.soluotsubmit) {
                        return o1.hoten.compareToIgnoreCase(o2.hoten);
                    }

                    return Long.compare(o1.soluotsubmit, o2.soluotsubmit);
                }
                return Long.compare(o2.sobailamdung, o1.sobailamdung);
            }

        });

        for (SinhVien x : lst) {
            System.out.println(x);
        }
    }
}
