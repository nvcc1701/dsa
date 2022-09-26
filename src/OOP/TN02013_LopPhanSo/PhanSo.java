/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.TN02013_LopPhanSo;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class PhanSo {

    Scanner in = new Scanner(System.in);
    private long tu, mau;
    private PhanSo phanso;

    public PhanSo() {
    }

    public PhanSo(long tu, long mau) {
        this.tu = tu;
        this.mau = mau;

    }

    public PhanSo(String nhap) {
        //nhap = in.nextLine();
        String[] splited = nhap.split("\\s+");
        tu = Integer.parseInt(splited[0]);
        mau = Integer.parseInt(splited[1]);

    }

    public PhanSo cong(PhanSo B) {
        PhanSo kq = new PhanSo();
        kq.tu = tu * B.mau + mau * B.tu;
        kq.mau = mau * B.mau;
        kq.toiGian();
        return kq;

    }

    public PhanSo nhan(PhanSo B) {
        PhanSo kq = new PhanSo();
        kq.tu = tu * B.tu;
        kq.mau = mau * B.mau;
        kq.toiGian();
        return kq;

    }

    public long USCLN(long a, long b) {
        if (b == 0) {
            return a;
        }
        return USCLN(b, a % b);

    }

    public void toiGian() {
        long i = USCLN(tu, mau);
        tu /= i;
        mau /= i;

    }

    @Override
    public String toString() {
        return tu + "/" + mau;
    }

}
