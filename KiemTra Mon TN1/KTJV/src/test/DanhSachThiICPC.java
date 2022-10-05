/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package test;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class DanhSachThiICPC {

    public static class Team implements Serializable {

        private String ma;
        private String tenteam;
        private String tentruong;
        private static int sma = 1;

        public Team(String tenteam, String tentruong) {
            this.ma = String.format("Team%02d", sma++);
            this.tenteam = tenteam;
            this.tentruong = tentruong;
        }

        @Override
        public String toString() {
            return "Team{" + "ma=" + ma + ", tenteam=" + tenteam + ", tentruong=" + tentruong + '}';
        }

    }

    public static class ThiSinh implements Serializable {

        private String ma;
        private String hoten;
        private String mateam;
        private static int sma = 1;

        public ThiSinh(String hoten, String mateam) {
            this.ma = String.format("C%03d", sma++);
            this.hoten = hoten;
            this.mateam = mateam;
        }

        @Override
        public String toString() {
            return "ThiSinh{" + "ma=" + ma + ", hoten=" + hoten + ", mateam=" + mateam + '}';
        }
    }

    public static class ThiSinhTeam {

        private String ma;
        private String hoten;
        private String tenteam;
        private String tentruong;

        public ThiSinhTeam(String ma, String hoten, String tenteam, String tentruong) {
            this.ma = ma;
            this.hoten = hoten;
            this.tenteam = tenteam;
            this.tentruong = tentruong;
        }

        @Override
        public String toString() {
            String s = "";
            s += this.ma + " " + this.hoten + " " + this.tenteam + " " + this.tentruong;
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);

        ArrayList<Team> lstTeam = new ArrayList<>();
        ArrayList<ThiSinh> lstTS = new ArrayList<>();
        ArrayList<ThiSinhTeam> lst = new ArrayList<>();

        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            Team team = new Team(sc.nextLine(), sc.nextLine());
            lstTeam.add(team);
        }

        int n = Integer.parseInt(sc.nextLine());
        while (n-- > 0) {
            ThiSinh ts = new ThiSinh(sc.nextLine(), sc.nextLine());
            lstTS.add(ts);
        }

        for (ThiSinh x : lstTS) {
            String tenteam = "";
            String tentruong = "";

            for (Team y : lstTeam) {
                if (x.mateam.equalsIgnoreCase(y.ma)) {
                    tenteam = y.tenteam;
                    tentruong = y.tentruong;
                }
            }

            ThiSinhTeam tss = new ThiSinhTeam(x.ma, x.hoten, tenteam, tentruong);
            lst.add(tss);
        }

        Collections.sort(lst, new Comparator<ThiSinhTeam>() {
            @Override
            public int compare(ThiSinhTeam o1, ThiSinhTeam o2) {
                return o1.hoten.compareToIgnoreCase(o2.hoten);
            }
        });

        for (ThiSinhTeam x : lst) {
            System.out.println(x);
        }
    }
}
