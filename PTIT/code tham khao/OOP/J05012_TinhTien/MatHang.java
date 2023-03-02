/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J05012_TinhTien;

/**
 *
 * @author nhokt
 */
public class MatHang {

    private String tenMH, maMH;
    private long sl, donGia, chietKhau, tongtien;

    public MatHang(String maMH, String tenMH, long sl, long donGia, long chietKhau) {
//        this.maMH = String.format("ML%02d", maMH);
        this.maMH = maMH;
        this.tenMH = tenMH;
        this.sl = sl;
        this.donGia = donGia;
        this.chietKhau = chietKhau;
        this.tinhTongTien(donGia, sl, chietKhau);
    }

    public long getTongtien() {
        return tongtien;
    }

    private long tinhTongTien(long donGia, long sl, long chietKhau) {
        tongtien = (long) (donGia * sl - chietKhau);
        return tongtien;
    }

    @Override
    public String toString() {
        return maMH + " " + tenMH + " " + sl + " " + donGia + " " + chietKhau + " " + tongtien;
        //"ML" +
    }

}
