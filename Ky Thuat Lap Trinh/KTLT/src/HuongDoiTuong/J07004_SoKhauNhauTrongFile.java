/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.TreeMap;

/**
 *
 * @author anhnguyen
 */
public class J07004_SoKhauNhauTrongFile {

    public static void main(String[] args) throws FileNotFoundException {
        File file = new File("DATA.in");
        Scanner sc = new Scanner(file);
        TreeMap<Integer, Integer> map = new TreeMap<>();
        while (sc.hasNextLine()) {
            StringTokenizer st = new StringTokenizer(sc.nextLine());
            while (st.hasMoreTokens()) {
                int x = Integer.parseInt(st.nextToken());
                if (map.containsKey(x)) {
                    map.put(x, map.get(x) + 1);
                } else {
                    map.put(x, 1);
                }
            }
        }

        map.forEach((k, v) -> {
            System.out.println(k + " " + v);
        });
    }
}
