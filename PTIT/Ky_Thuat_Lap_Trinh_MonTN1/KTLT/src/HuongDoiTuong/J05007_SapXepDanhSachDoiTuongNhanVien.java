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
public class J05007_SapXepDanhSachDoiTuongNhanVien {

    public static class NhanVien implements Serializable {

        private String ma;
        private String hoten;
        private String gioitinh;
        private String ngaysinh;
        private String diachi;
        private String masothue;
        private String ngaykyhopdong;
        private static int sma = 1;

        public NhanVien(String hoten, String gioitinh, String ngaysinh, String diachi, String masothue, String ngaykyhopdong) {
            this.ma = String.format("%05d", sma++);
            this.hoten = hoten;
            this.gioitinh = gioitinh;
            this.ngaysinh = ngaysinh;
            this.diachi = diachi;
            this.masothue = masothue;
            this.ngaykyhopdong = ngaykyhopdong;
        }

        @Override
        public String toString() {
            String s = "";
            s += this.ma + " " + this.hoten + " " + this.gioitinh + " " + this.ngaysinh + " " + this.diachi + " " + this.masothue + " " + this.ngaykyhopdong;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        ArrayList<NhanVien> lst = new ArrayList<>();

        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            NhanVien nv = new NhanVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(nv);
        }

        Collections.sort(lst, new Comparator<NhanVien>() {
            @Override
            public int compare(NhanVien o1, NhanVien o2) {
                try {
                    Date date1 = new SimpleDateFormat("dd/MM/yyyy").parse(o1.ngaysinh);
                    Date date2 = new SimpleDateFormat("dd/MM/yyyy").parse(o2.ngaysinh);
                    return date1.compareTo(date2);
                } catch (ParseException ex) {
                    return 1;
                }
            }
        });

        for (NhanVien x : lst) {
            System.out.println(x);
        }
    }
}
