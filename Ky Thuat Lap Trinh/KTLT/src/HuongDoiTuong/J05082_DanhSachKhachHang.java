/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Date;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author anhnguyen
 */
public class J05082_DanhSachKhachHang {

    public static class KhachHang {

        private String ma;
        private String ten;
        private String gioitinh;
        private String ngaysinh;
        private String diachi;
        private static int sma = 1;

        public KhachHang(String ten, String gioitinh, String ngaysinh, String diachi) throws ParseException {
            this.ma = String.format("KH%03d", sma++);

            StringTokenizer st = new StringTokenizer(ten);
            StringBuilder sb = new StringBuilder();
            while (st.hasMoreTokens()) {
                String s = st.nextToken().toLowerCase();

                sb.append(Character.toUpperCase(s.charAt(0)));
                for (int i = 1; i < s.length(); i++) {
                    sb.append(s.charAt(i));
                }
                sb.append(" ");
            }
            this.ten = sb.toString().trim();
            this.gioitinh = gioitinh;
            Date date = new SimpleDateFormat("dd/MM/yyyy").parse(ngaysinh);
            this.ngaysinh = new SimpleDateFormat("dd/MM/yyyy").format(date);
            this.diachi = diachi;
        }

        @Override
        public String toString() {
            String s = ma + " " + ten + " " + gioitinh + " " + diachi + " " + ngaysinh;
            return s;
        }

    }

    public static void main(String[] args) throws FileNotFoundException, ParseException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("DATA.in"));
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<KhachHang> lst = new ArrayList<>();

        while (t-- > 0) {
            KhachHang kh = new KhachHang(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(kh);
        }

        Collections.sort(lst, new Comparator<KhachHang>() {
            @Override
            public int compare(KhachHang o1, KhachHang o2) {
                return o1.ngaysinh.compareTo(o2.ngaysinh);
            }
        });

        for (KhachHang kh : lst) {
            System.out.println(kh.toString());
        }
    }
}
