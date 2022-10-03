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
public class J05011_TinhGio {

    public static class GameThu {

        private String ma;
        private String ten;
        private double giovao;
        private double giora;
        private double thoigianchoi;

        public GameThu(String ma, String ten, String giovao, String giora) {
            this.ma = ma;
            this.ten = ten;

            String[] arr1 = giovao.split("\\:");
            String[] arr2 = giora.split("\\:");

            this.giovao = Double.parseDouble(arr1[0]) + (Double.parseDouble(arr1[1]) / 60);
            this.giora = Double.parseDouble(arr2[0]) + (Double.parseDouble(arr2[1]) / 60);

            this.thoigianchoi = this.giora - this.giovao;
        }

        @Override
        public String toString() {
            String s = "";
            int gio = (int) this.thoigianchoi;
            double phut = (this.thoigianchoi - gio) * 60;

            s += this.ma + " " + this.ten + " " + gio + " " + "gio" + " " + (int) Math.round(phut) + " " + "phut";
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));

        int t = Integer.parseInt(sc.nextLine());
        ArrayList<GameThu> lst = new ArrayList<>();

        while (t-- > 0) {
            GameThu gt = new GameThu(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            lst.add(gt);
        }

        Collections.sort(lst, new Comparator<GameThu>() {
            @Override
            public int compare(GameThu o1, GameThu o2) {
                return Double.compare(o2.thoigianchoi, o1.thoigianchoi);
            }
        });

        for (GameThu x : lst) {
            System.out.println(x);
        }
    }
}
