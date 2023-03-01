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
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J05009_TimThuKhoaCuaKyThi {

    public static class ThiSinh implements Serializable {

        private String ma;
        private String ten;
        private String ngaysinh;
        private double diem1, diem2, diem3;
        private double tongdiem;
        private static int sma = 1;

        public ThiSinh(String ten, String ngaysinh, String diem1, String diem2, String diem3) {
            this.ma = "" + sma++;
            this.ten = ten;
            this.ngaysinh = ngaysinh;
            this.diem1 = Double.parseDouble(diem1);
            this.diem2 = Double.parseDouble(diem2);
            this.diem3 = Double.parseDouble(diem3);
            this.tongdiem = this.diem1 + this.diem2 + this.diem3;
        }

        @Override
        public String toString() {
            return String.format("%s %s %s %.1f", this.ma, this.ten, this.ngaysinh, this.tongdiem);
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        int t = Integer.parseInt(sc.nextLine());

        ArrayList<ThiSinh> lst = new ArrayList<>();
        while (t-- > 0) {
            ThiSinh ts = new ThiSinh(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(ts);
        }

        double thukhoa = Collections.max(lst, new Comparator<ThiSinh>() {
            @Override
            public int compare(ThiSinh o1, ThiSinh o2) {
                return Double.compare(o1.tongdiem, o2.tongdiem);
            }
        }).tongdiem;

        for (ThiSinh x : lst) {
            if (x.tongdiem == thukhoa) {
                System.out.println(x);
            }
        }
    }
}
