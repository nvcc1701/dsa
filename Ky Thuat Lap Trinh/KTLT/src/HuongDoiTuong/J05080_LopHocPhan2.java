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
import java.util.HashMap;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J05080_LopHocPhan2 {

    public static class LopHocPhan {

        private String ma;
        private String ten;
        private String nhom;
        private String tengv;

        public LopHocPhan(String ma, String ten, String nhom, String tengv) {
            this.ma = ma;
            this.ten = ten;
            this.nhom = nhom;
            this.tengv = tengv;
        }

        @Override
        public String toString() {
            String s = ma + " " + ten + " " + nhom;
            return s;
        }

    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        int t = Integer.parseInt(sc.nextLine());

        ArrayList<LopHocPhan> lst = new ArrayList<>();
        HashMap<String, String> map = new HashMap<>();
        while (t-- > 0) {
            LopHocPhan lhp = new LopHocPhan(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            map.put(lhp.ma, lhp.ten);
            lst.add(lhp);
        }

        Collections.sort(lst, new Comparator<LopHocPhan>() {
            @Override
            public int compare(LopHocPhan o1, LopHocPhan o2) {
                if (o1.ma.compareToIgnoreCase(o2.ma) == 0) {
                    int nhom1 = Integer.parseInt(o1.nhom);
                    int nhom2 = Integer.parseInt(o2.nhom);
                    return Integer.compare(nhom1, nhom2);
                }
                return o1.ma.compareToIgnoreCase(o2.ma);
            }
        });

        int m = Integer.parseInt(sc.nextLine());
        while (m-- > 0) {
            String s = sc.nextLine();
            System.out.println("Danh sach cho giang vien " + s + ":");
            for (LopHocPhan lhp : lst) {
                if (lhp.tengv.equalsIgnoreCase(s)) {
                    System.out.println(lhp.toString());
                }
            }
        }
    }
}
