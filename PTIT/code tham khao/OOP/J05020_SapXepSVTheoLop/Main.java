/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J05020_SapXepSVTheoLop;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class Main {

    public static void main(String[] args) {
        //int dem = 0;
        List<SinhVien> list = new ArrayList<SinhVien>();
        Scanner in = new Scanner(System.in);
        int so = Integer.parseInt(in.nextLine());
        while (so-- > 0) {
            SinhVien sv = new SinhVien(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine());
            list.add(sv);
        }
        Collections.sort(list, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                if ((o1.getLop().compareTo(o2.getLop())) > 0) {
                    return 1;
                }
                if ((o1.getLop().compareTo(o2.getLop())) == 0) {

                    return o1.getMaSV().compareTo(o2.getMaSV());
                }
                return -1;
            }
        });
        for (SinhVien i : list) {
            System.out.println(i);
        }
    }
}
/*
4
B16DCCN011
Nguyen Trong Duc Anh
D16CNPM1
sv1@stu.ptit.edu.vn
B15DCCN215
To Ngoc Hieu
D15CNPM3
sv2@stu.ptit.edu.vn
B15DCKT150
Nguyen Ngoc Son
D15CQKT02-B
sv3@stu.ptit.edu.vn
B15DCKT199
Nguyen Trong Tung
D15CQKT03-B
sv4@stu.ptit.edu.vn
*/
