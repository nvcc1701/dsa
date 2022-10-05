/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J05012_TinhTien;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nhokt
 */
public class Main {

    public static void main(String[] args) {
        int dem = 0;
        Scanner in = new Scanner(System.in);
        List<MatHang> list = new ArrayList<MatHang>();
        int somh = Integer.parseInt(in.nextLine());
        while (somh-- > 0) {
            //MatHang mh = new MatHang(dem, in.nextLine(), in.nextLine(), Long.parseLong(in.nextLine()), Long.parseLong(in.nextLine()), Long.parseLong(in.nextLine()));
            MatHang mh = new MatHang(in.nextLine(), in.nextLine(), Long.parseLong(in.nextLine()), Long.parseLong(in.nextLine()), Long.parseLong(in.nextLine()));
            //in.nextLine();
            list.add(mh);
        }
        Collections.sort(list, new Comparator<MatHang>() {
            @Override
            public int compare(MatHang o1, MatHang o2) {
                if ((o2.getTongtien() - o1.getTongtien()) > 0) {
                    return 1;
                }
                if ((o2.getTongtien() - o1.getTongtien()) == 0) {
                    String s1 = String.format("%.1f", o1.getTongtien());
                    String s2 = String.format("%.1f", o2.getTongtien());
                    return s1.compareTo(s2);
                }
                return -1;
            }
        });
        for (MatHang matHang : list) {
            System.out.println(matHang
            );
        }
    }
}
/*
3
ML01
May lanh SANYO
12
4000000
2400000
ML02
May lanh HITACHI
4
2550000000
0
ML03
May lanh NATIONAL
5
3000000
150000
 */
