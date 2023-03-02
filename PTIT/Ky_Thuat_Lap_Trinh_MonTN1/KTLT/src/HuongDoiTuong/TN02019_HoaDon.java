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
import java.util.Date;
import java.util.HashMap;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class TN02019_HoaDon {

    public static HashMap<String, KhachHang> mapKH = new HashMap<>();
    public static HashMap<String, MatHang> mapMH = new HashMap<>();

    public static class KhachHang implements Serializable {

        private String makh;
        private String tenkh;
        private String gioitinh;
        private Date ngaysinh;
        private String diachi;
        private static int sma = 1;

        public KhachHang(String tenkh, String gioitinh, String ngaysinh, String diachi) throws ParseException {
            this.makh = String.format("KH%03d", sma++);

            StringTokenizer st = new StringTokenizer(tenkh);
            StringBuilder sb = new StringBuilder();

            while (st.hasMoreTokens()) {
                String s = st.nextToken().toLowerCase();
                sb.append(Character.toUpperCase(s.charAt(0)));
                for (int i = 1; i < s.length(); i++) {
                    sb.append(s.charAt(i));
                }
                sb.append(" ");
            }

            this.tenkh = sb.toString().trim();
            this.gioitinh = gioitinh;
            this.ngaysinh = new SimpleDateFormat("dd/MM/yyyy").parse(ngaysinh);
            this.diachi = diachi;
        }
    }

    public static class MatHang implements Serializable {

        private String mamh;
        private String tenmh;
        private String donvitinh;
        private int giamua;
        private int giaban;
        private static int sma = 1;

        public MatHang(String tenmh, String donvitinh, String giamua, String giaban) {
            this.mamh = String.format("MH%03d", sma++);
            this.tenmh = tenmh;
            this.donvitinh = donvitinh;
            this.giamua = Integer.parseInt(giamua);
            this.giaban = Integer.parseInt(giaban);
        }

    }

    public static class HoaDon implements Serializable {

        private String mahd;
        private KhachHang khachhang;
        private MatHang mathang;
        private int soluon;
        private static int sma = 1;

        public HoaDon(String khachhang, String mathang, String soluon) {
            this.mahd = String.format("HD%03d", sma++);
            this.khachhang = mapKH.get(khachhang);
            this.mathang = mapMH.get(mathang);
            this.soluon = Integer.parseInt(soluon);
        }

        @Override
        public String toString() {
            String s = "";
            s += mahd + " " + khachhang.tenkh + " "
                    + khachhang.diachi + " " + mathang.tenmh + " "
                    + mathang.donvitinh + " " + mathang.giamua + " " + mathang.giaban + " "
                    + soluon + " "
                    + soluon * mathang.giaban;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));

        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            KhachHang kh = new KhachHang(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            mapKH.put(kh.makh, kh);
        }

        t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            MatHang mh = new MatHang(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            mapMH.put(mh.mamh, mh);
        }

        ArrayList<HoaDon> lst = new ArrayList<>();
        t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            StringTokenizer st = new StringTokenizer(sc.nextLine());
            HoaDon hd = new HoaDon(st.nextToken(), st.nextToken(), st.nextToken());
            lst.add(hd);
        }

        for (HoaDon hd : lst) {
            System.out.println(hd.toString());
        }
    }
}
