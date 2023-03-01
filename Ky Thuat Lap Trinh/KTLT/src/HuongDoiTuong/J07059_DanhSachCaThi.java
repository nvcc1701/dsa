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
import java.time.LocalTime;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Date;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author anhnguyen
 */
public class J07059_DanhSachCaThi {

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
            String s = ma + " " + ngay + " " + gio + " " + phong;
            return s;
        }

    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("CATHI.in"));
        int t = Integer.parseInt(sc.nextLine());

        ArrayList<CaThi> lst = new ArrayList<>();

        while (t-- > 0) {
            CaThi ct = new CaThi(sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(ct);
        }

        Collections.sort(lst, new Comparator<CaThi>() {
            @Override
            public int compare(CaThi o1, CaThi o2) {
                try {
                    Date d1 = new SimpleDateFormat("dd/MM/yyyy").parse(o1.ngay);
                    Date d2 = new SimpleDateFormat("dd/MM/yyyy").parse(o2.ngay);
                    LocalTime t1 = LocalTime.parse(o1.gio);
                    LocalTime t2 = LocalTime.parse(o2.gio);

                    if (d1.compareTo(d2) == 0) {
                        if (t1.compareTo(t2) == 0) {
                            return o1.ma.compareToIgnoreCase(o2.ma);
                        }
                        return t1.compareTo(t2);
                    }
                    return d1.compareTo(d2);
                } catch (ParseException ex) {
                    return 0;
                }
            }
        });

        for (CaThi ct : lst) {
            System.out.println(ct.toString());
        }
    }
}
