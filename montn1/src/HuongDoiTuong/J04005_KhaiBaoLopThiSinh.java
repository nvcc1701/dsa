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
public class J04005_KhaiBaoLopThiSinh {

    public static class ThiSinh {

        private String hoten;
        private Date ngaysinh;
        private float diem1;
        private float diem2;
        private float diem3;

        public ThiSinh(String hoten, String ngaysinh, float diem1, float diem2, float diem3) throws ParseException {
            this.hoten = hoten;
            this.ngaysinh = new SimpleDateFormat("dd/MM/yyyy").parse(ngaysinh);
            this.diem1 = diem1;
            this.diem2 = diem2;
            this.diem3 = diem3;
        }

        @Override
        public String toString() {
//            return "ThiSinh{" + "hoten=" + hoten + ", ngaysinh=" + ngaysinh + ", diem1=" + diem1 + ", diem2=" + diem2 + ", diem3=" + diem3 + '}';
            String s = "";
            s += this.hoten + " " + new SimpleDateFormat("dd/MM/yyyy").format(this.ngaysinh) + " " + (float) (diem1 + diem2 + diem3);
            return s;
        }

    }

    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        ThiSinh ts = new ThiSinh(sc.nextLine(), sc.nextLine(), Float.parseFloat(sc.nextLine()), Float.parseFloat(sc.nextLine()), Float.parseFloat(sc.nextLine()));
        System.out.println(ts.toString());
    }
}
