/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J05081_DanhSachMatHang;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int dem = 0;
        List<MatHang> list = new ArrayList<MatHang>();
        int m = Integer.parseInt(in.nextLine());
        while (m-- > 0) {
            dem++;
            MatHang mh = new MatHang(dem, in.nextLine(), in.nextLine(), Integer.parseInt(in.nextLine()),Integer.parseInt(in.nextLine()));
            list.add(mh);
        }
        Collections.sort(list, new Comparator<MatHang>() {
            @Override
            public int compare(MatHang o1, MatHang o2) {
                if ((o2.getLoiNhuan() - o1.getLoiNhuan()) > 0) {
                    return 1;
                }
                if ((o2.getLoiNhuan() - o1.getLoiNhuan()) == 0) {
                    String s1 = o1.getMaHang();
                    String s2 = o2.getMaHang();
                    return s1.compareTo(s2);
                }
                return -1;
            }
        });
        for (MatHang i : list) {
            System.out.println(i);
        }
    }
}
/*
2
Ao phong tre em
Cai
25000
41000
Ao khoac nam
Cai
240000
515000
*/
