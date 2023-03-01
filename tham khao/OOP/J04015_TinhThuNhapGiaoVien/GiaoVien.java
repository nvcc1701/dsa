/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J04015_TinhThuNhapGiaoVien;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class GiaoVien {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String maNgach = sc.nextLine();
        String name = sc.nextLine();
        Long luongCoBan = Long.parseLong(sc.nextLine());
        String chucVu = String.valueOf(maNgach.charAt(0)) + String.valueOf(maNgach.charAt(1));
        long heSo = (maNgach.charAt(2) - '0') * 10 + maNgach.charAt(3) - '0';
        long phuCap = 0;
        if (chucVu.equals("HT")) {
            phuCap = 2000000;
        } else if (chucVu.equals("HP")) {
            phuCap = 900000;
        } else {
            phuCap = 500000;
        }
        System.out.format("%s %s %d %d %d\n", maNgach, name, heSo, phuCap, heSo * luongCoBan + phuCap);
    }


}
