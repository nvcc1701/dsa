/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong.contest1;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class ChuanHoaVaSapXep {

    public static void main(String[] args) throws FileNotFoundException {
        File file = new File("DANHSACH.in");
        Scanner sc = new Scanner(file);
        ArrayList<String> lst = new ArrayList<>();

        while (sc.hasNextLine()) {
            StringTokenizer st = new StringTokenizer(sc.nextLine());
            StringBuilder sb = new StringBuilder();
            while (st.hasMoreTokens()) {
                String token = st.nextToken().toLowerCase();
                sb.append(Character.toUpperCase(token.charAt(0)));
                for (int i = 1; i < token.length(); i++) {
                    sb.append(token.charAt(i));
                }
                sb.append(" ");
            }

            lst.add(sb.toString());
        }

        Collections.sort(lst, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                String st1[] = o1.split("\\s+");
                String st2[] = o2.split("\\s+");

                String ho1 = st1[0];
                String ho2 = st2[0];
                String dem1 = "";
                String dem2 = "";

                if (o1.length() == 1) {
                    dem1 = st1[0];
                } else {
                    for (int i = 1; i < st1.length - 1; i++) {
                        dem1 += st1[i];
                        dem1 += " ";
                    }
                }

                if (o2.length() == 1) {
                    dem2 = st2[0];
                } else {
                    for (int i = 1; i < st2.length - 1; i++) {
                        dem2 += st2[i];
                        dem2 += " ";
                    }
                }

                String ten1 = st1[st1.length - 1];
                String ten2 = st2[st2.length - 1];

                if (ten1.equalsIgnoreCase(ten2)) {
                    if (ho1.equalsIgnoreCase(ho2)) {
                        return dem1.compareToIgnoreCase(dem2);
                    }
                    return ho1.compareToIgnoreCase(ho2);
                }
                return ten1.compareToIgnoreCase(ten2);
            }
        }
        );

        for (String x : lst) {
            System.out.println(x);
        }
    }
}
