/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J05081_DanhSachMatHang;

import java.io.*;

/**
 *
 * @author nhokt
 */
public class MatHang implements Serializable {

    //Scanner in = new Scanner(System.in);
    private String maHang;
    private String tenMH, dvTinh;
    private int giaMua, giaBan, loiNhuan;

    public MatHang(int maHang, String tenMH, String dvTinh, int giaMua, int giaBan) {
        this.maHang = String.format("MH%03d", maHang);
        this.tenMH = tenMH;
        this.dvTinh = dvTinh;
        this.giaMua = giaMua;
        this.giaBan = giaBan;
        tinhloinhuan(giaMua, giaBan);
    }

    public String getMaHang() {
        return maHang;
    }

    public void setMaHang(String maHang) {
        this.maHang = maHang;
    }

    public double getLoiNhuan() {
        return loiNhuan;
    }

    public void setLoiNhuan(int loiNhuan) {
        this.loiNhuan = loiNhuan;
    }

    private int tinhloinhuan(int giaMua, int giaBan) {
        loiNhuan = giaBan - giaMua;
        return loiNhuan;
    }

//    public void nhapMH(Scanner in) {
//        int j = 0;
//        maHang = String.valueOf(j++);
//        tenMH = in.nextLine();
//        dvTinh = in.nextLine();
//        giaMua = Double.parseDouble(in.nextLine());
//        giaBan = Double.parseDouble(in.nextLine());
//        tinhloinhuan(giaMua, giaBan);
//    }
    @Override
    public String toString() {
        return maHang + " " + tenMH + " " + dvTinh + " " + giaMua + " " + giaBan + " " + loiNhuan;
        //"MH" +
    }

}
