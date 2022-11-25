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
import java.util.Date;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J07053_XetTuyen {

    public static class ThiSinh implements Serializable {

        private String ma;
        private String hoten;
        private Date ngaysinh;
        private double diemlt;
        private double diemth;
        private double diemthuong;
        private String xeploai;
        private double diemtb;
        private static int sma = 1;

        public ThiSinh(String hoten, String ngaysinh, String diemlt, String diemth) throws ParseException {
            this.ma = String.format("PH%01d", sma++);
            this.hoten = hoten;
            this.ngaysinh = new SimpleDateFormat("dd/MM/yyyy").parse(ngaysinh);
            this.diemlt = Double.parseDouble(diemlt);
            this.diemth = Double.parseDouble(diemth);

            if (this.diemlt >= 8 && this.diemth >= 8) {
                this.diemthuong = 1;
            } else if (this.diemlt >= 7.5 && this.diemth >= 7.5) {
                this.diemthuong = 0.5;
            } else {
                this.diemthuong = 0;
            }

            double total = this.diemlt + this.diemth + this.diemthuong;
            if (total > 20) {
                this.diemtb = 10;
            } else {
                this.diemtb = total / 2;
            }
        }

    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("XETTUYEN.in"));
    }
}
