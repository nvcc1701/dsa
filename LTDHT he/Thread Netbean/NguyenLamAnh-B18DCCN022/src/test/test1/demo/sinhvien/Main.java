package demo.sinhvien;

import java.io.BufferedReader;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        String filename = "src/demo/sinhvien/sv.dat";

        List<SinhVien> list = new ArrayList<>();

        try {
            BufferedReader br = new BufferedReader(new FileReader(filename));
            String line = null;
            while ((line = br.readLine()) != null) {
                String[] s = line.split("\\,\\s*");

                SinhVien sv = new SinhVien(Integer.parseInt(s[0]), s[1]);
                list.add(sv);
            }
            br.close();
        } catch (Exception e) {
            e.printStackTrace();
        }

        for (SinhVien i : list) {
            System.out.println(i);
        }
    }
}
