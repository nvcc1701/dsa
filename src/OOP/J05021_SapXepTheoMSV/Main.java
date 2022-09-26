/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J05021_SapXepTheoMSV;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class Main {

    public static void main(String[] args) {
        //int dem = 0;
        List<SinhVien> list = new ArrayList<SinhVien>();
        List<SinhVien> listResult = new ArrayList<>();
        Scanner in = new Scanner(System.in);
        //Scanner in = new Scanner(source);
        //int so = Integer.parseInt(in.nextLine());
        while (in.hasNext()) {
            String maSV = in.nextLine();
            String name = in.nextLine();
            String lop = in.nextLine();
            String email = in.nextLine();
            SinhVien sv = new SinhVien(maSV, name, lop, email);
            list.add(sv);
        }
        Collections.sort(list, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                return o1.getMaSV().compareTo(o2.getMaSV());
            }
        });
        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));

        }
    }
}
