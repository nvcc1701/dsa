/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class TN02018_TinhGioChuanChoTungGiangVien {

    public static class MonHoc {

        private String mamon;
        private String tenmon;

        public MonHoc(String mamon, String tenmon) {
            this.mamon = mamon;
            this.tenmon = tenmon;
        }

    }

    public static class GiangVien {

        private String magv;
        private String tengv;

        public GiangVien(String magv, String tengv) {
            this.magv = magv;
            this.tengv = tengv;
        }

    }

    private static class LopHocPhan {

        private String magv;
        private String mamon;
        private Double giochuan;

        public LopHocPhan(String magv, String mamon, String giochuan) {
            this.magv = magv;
            this.mamon = mamon;
            this.giochuan = Double.parseDouble(giochuan);
        }

    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);

        HashMap<String, String> map1 = new HashMap<>();
        HashMap<String, String> map2 = new HashMap<>();

        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            StringTokenizer st = new StringTokenizer(sc.nextLine());
            String ma = st.nextToken();
            String ten = "";

            while (st.hasMoreTokens()) {
                ten += st.nextToken() + " ";
            }

            MonHoc mh = new MonHoc(ma, ten.trim());
            map1.put(mh.mamon, mh.tenmon);
        }

        t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            StringTokenizer st = new StringTokenizer(sc.nextLine());
            String ma = st.nextToken();
            String ten = "";

            while (st.hasMoreTokens()) {
                ten += st.nextToken() + " ";
            }
            GiangVien gv = new GiangVien(ma, ten.trim());
            map2.put(gv.magv, gv.tengv);
        }

        ArrayList<LopHocPhan> lst = new ArrayList<>();
        t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            StringTokenizer st = new StringTokenizer(sc.nextLine());
            LopHocPhan lhp = new LopHocPhan(st.nextToken(), st.nextToken(), st.nextToken());
            lst.add(lhp);
        }

        String key = sc.nextLine();

        System.out.println("Giang vien: " + map2.get(key));
        double tong = 0;
        for (LopHocPhan lhp : lst) {
            if (lhp.magv.equalsIgnoreCase(key)) {
                System.out.println(map1.get(lhp.mamon) + " " + lhp.giochuan);
                tong += lhp.giochuan;
            }
        }

        String s = String.format("%.02f", tong);
        System.out.println("Tong: " + s);
    }
}
