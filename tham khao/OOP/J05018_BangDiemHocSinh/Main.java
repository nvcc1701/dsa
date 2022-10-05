/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J05018_BangDiemHocSinh;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class Main {

    public static void main(String[] args) {
        int dem = 0;
        Scanner in = new Scanner(System.in);
        List<BangDiem> list = new ArrayList<BangDiem>();
        int so = Integer.parseInt(in.nextLine());
        while (so-- > 0) {
            dem++;
            BangDiem bd = new BangDiem(dem, in.nextLine(), in.nextFloat(), in.nextFloat(), in.nextFloat(), in.nextFloat(), in.nextFloat(), in.nextFloat(), in.nextFloat(), in.nextFloat(), in.nextFloat(), in.nextFloat());
            in.nextLine();

            list.add(bd);
        }
        Collections.sort(list, new Comparator<BangDiem>() {
            @Override
            public int compare(BangDiem o1, BangDiem o2) {
                if ((o2.getDiemTB() - o1.getDiemTB()) > 0) {
                    return 1;
                }
                if ((o2.getDiemTB() - o1.getDiemTB()) == 0) {
                    String s1 = String.format("%.1f", o1.getDiemTB());
                    String s2 = String.format("%.1f", o2.getDiemTB());
                    return s1.compareTo(s2);
                }
                return -1;
            }
        });
        for (BangDiem i : list) {
            System.out.println(i);
        }
    }
}
/*
3
Luu Thuy Nhi
9.3  9.0  7.1  6.5  6.2  6.0  8.2  6.7  4.8  5.5
Le Van Tam
8.0  8.0  5.5  9.0  6.8  9.0  7.2  8.3  7.2  6.8
Nguyen Thai Binh
9.0  6.4  6.0  7.5  6.7  5.5  5.0  6.0  6.0  6.0
 */
