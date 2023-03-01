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
import java.util.HashSet;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.TreeSet;

/**
 *
 * @author anhnguyen
 */
public class J07071_TenVietTat {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DANHSACH.in"));
        ArrayList<String> res = new ArrayList<>();
        ArrayList<String> lst = new ArrayList<>();
        HashMap<String, TreeSet<String>> map = new HashMap<>();

        int n = Integer.parseInt(sc.nextLine());
        while (n-- > 0) {
            String s = sc.nextLine();
            StringTokenizer st = new StringTokenizer(s);
            ArrayList<String> lstT = new ArrayList<>();

            while (st.hasMoreTokens()) {
                String nt = st.nextToken();
                lstT.add(nt.charAt(0) + "");
            }

            for (int i = 0; i < lstT.size(); i++) {
                String ss = "";
                for (int j = 0; j < lstT.size(); j++) {
                    if (j == i) {
                        ss += "*";
                    } else {
                        ss += lstT.get(j);
                    }
                    if (j != lstT.size() - 1) {
                        ss += ".";
                    }
                }

                if (map.containsKey(ss)) {
                    map.get(ss).add(s);
                } else {
                    TreeSet<String> set = new TreeSet();
                    set.add(s);
                    map.put(ss, set);
                }
            }
        }

        int m = Integer.parseInt(sc.nextLine());
        while (m-- > 0) {
            String s = sc.nextLine();
            for (String x : map.get(s)) {
                res.add(x);
            }

            Collections.sort(res, new Comparator<String>() {
                @Override
                public int compare(String o1, String o2) {
                    String[] s1 = o1.split("\\s+");
                    String[] s2 = o2.split("\\s+");

                    String ten1 = s1[s1.length - 1];
                    String ten2 = s2[s2.length - 1];
                    String ho1 = s1[0];
                    String ho2 = s2[0];

                    if (ten1.equalsIgnoreCase(ten2)) {
                        return ho2.compareToIgnoreCase(ho1);
                    }

                    return ten1.compareToIgnoreCase(ten2);
                }
            });

            for (String x : res) {
                System.out.println(x);
            }
            res.clear();
        }
    }
}
