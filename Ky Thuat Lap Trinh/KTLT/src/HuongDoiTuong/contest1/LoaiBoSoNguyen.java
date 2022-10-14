/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong.contest1;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class LoaiBoSoNguyen {

    public static void main(String[] args) throws FileNotFoundException, IOException {
        File src = new File("DATA.in");
        Scanner sc = new Scanner(src);
        ArrayList<String> lst;
        ArrayList<String> lstN;

        lst = new ArrayList<>();
        lstN = new ArrayList<>();

        while (sc.hasNextLine()) {
            StringTokenizer st = new StringTokenizer(sc.nextLine());
            while (st.hasMoreTokens()) {
                String token = st.nextToken();
                try {
                    Integer.parseInt(token);
                } catch (Exception e) {
                    if (token.matches("\\d+")) {
                        lstN.add(token);
                    } else {
                        lst.add(token);
                    }
                }
            }
        }

        Collections.sort(lstN);
        Collections.sort(lst);

        StringBuilder sb = new StringBuilder();
        for (String z : lstN) {
            sb.append(z);
            sb.append(" ");
        }

        for (String x : lst) {
            sb.append(x);
            sb.append(" ");
        }
        System.out.println(sb.toString());
    }
}
