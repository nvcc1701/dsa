/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J04007_KhaiBaoLopNhanVien {

    public static class NhanVien {

        private String ma;
        private String hoten;
        private String gioitinh;
        private Date ngaysinh;
        private String diachi;
        private String mst;
        private Date ngaykyhd;

        public NhanVien(String hoten, String gioitinh, String ngaysinh, String diachi, String mst, String ngaykyhd) throws ParseException {
            this.ma = "00001";
            this.hoten = hoten;
            this.gioitinh = gioitinh;
            this.ngaysinh = new SimpleDateFormat("dd/MM/yyyy").parse(ngaysinh);
            this.diachi = diachi;
            this.mst = mst;
            this.ngaykyhd = new SimpleDateFormat("dd/MM/yyyy").parse(ngaykyhd);
        }

        @Override
        public String toString() {
            String s = "";
            s += this.ma + " " + this.hoten + " " + this.gioitinh + " " + new SimpleDateFormat("dd/MM/yyyy").format(ngaysinh) + " " + this.diachi + " " + this.mst + " " + new SimpleDateFormat("dd/MM/yyyy").format(ngaykyhd);
            return s;
        }

    }

    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        NhanVien nv = new NhanVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        System.out.println(nv.toString());
    }
}
