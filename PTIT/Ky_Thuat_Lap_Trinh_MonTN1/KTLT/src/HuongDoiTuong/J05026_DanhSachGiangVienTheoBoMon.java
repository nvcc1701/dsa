/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class J05026_DanhSachGiangVienTheoBoMon {

    public static class GiangVien implements Serializable{

        private String ma;
        private String ten;
        private String bomon;
        private static int sma = 1;

        public GiangVien(String ten, String bomon) {
            this.ma = String.format("GV%02d", sma++);
            this.ten = ten;
            this.bomon = convertBM(bomon);
        }

        @Override
        public String toString() {
            String s = ma + " " + ten + " " + bomon;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        int t = Integer.parseInt(sc.nextLine());

        ArrayList<GiangVien> lst = new ArrayList<>();
        while (t-- > 0) {
            GiangVien gv = new GiangVien(sc.nextLine(), sc.nextLine());
            lst.add(gv);
        }

        int q = Integer.parseInt(sc.nextLine());
        while (q-- > 0) {
            String s = convertBM(sc.nextLine());
            System.out.println("DANH SACH GIANG VIEN BO MON " + s + ": ");
            for (GiangVien gv : lst) {
                if(gv.bomon.contains(s)){
                    System.out.println(gv.toString());
                }
            }
        }
    }

    public static String convertBM(String bomon) {
        StringTokenizer st = new StringTokenizer(bomon);
        String res = "";
        while (st.hasMoreTokens()) {
            res += st.nextToken().charAt(0);
        }

        return res.toUpperCase();
    }
}
