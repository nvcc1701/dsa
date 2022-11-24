/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J05012_TinhTien {

    public static class MatHang {

        private String ma;
        private String ten;
        private int soluong;
        private long dongia;
        private long chietkhau;
        private long tongtien;

        public MatHang(String ma, String ten, String soluong, String dongia, String chietkhau) {
            this.ma = ma;
            this.ten = ten;
            this.soluong = Integer.parseInt(soluong);
            this.dongia = Long.parseLong(dongia);
            this.chietkhau = Long.parseLong(chietkhau);
            this.tongtien = this.soluong * this.dongia - this.chietkhau;
        }

        @Override
        public String toString() {
            String s = ma + " " + ten + " " + soluong + " " + dongia + " " + chietkhau + " " + tongtien;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        int t = Integer.parseInt(sc.nextLine());

        ArrayList<MatHang> lst = new ArrayList<>();
        while (t-- > 0) {
            MatHang mh = new MatHang(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(mh);
        }

        Collections.sort(lst, new Comparator<MatHang>() {
            @Override
            public int compare(MatHang o1, MatHang o2) {
                return Long.compare(o2.tongtien, o1.tongtien);
            }
        });
        
        for(MatHang mh: lst){
            System.out.println(mh.toString());
        }
    }
}
