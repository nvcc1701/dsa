/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package NguyenLamAnh.model;

import java.io.Serializable;

/**
 *
 * @author nvcc
 */
public class Sach implements Serializable {

    private int ma;
    private String ten, chuyeNganh, namXuatBan;
    private static int sma = 10000;

    public Sach() {

    }

    public Sach(String ten, String chuyeNganh, String namXuatBan) {
        this.ma = sma++;
        this.ten = ten;
        this.chuyeNganh = chuyeNganh;
        this.namXuatBan = namXuatBan;
    }

    public int getMa() {
        return ma;
    }

    public void setMa(int ma) {
        this.ma = ma;
    }

    public String getTen() {
        return ten;
    }

    public void setTen(String ten) {
        this.ten = ten;
    }

    public String getChuyeNganh() {
        return chuyeNganh;
    }

    public void setChuyeNganh(String chuyeNganh) {
        this.chuyeNganh = chuyeNganh;
    }

    public String getNamXuatBan() {
        return namXuatBan;
    }

    public void setNamXuatBan(String namXuatBan) {
        this.namXuatBan = namXuatBan;
    }

    public static int getSma() {
        return sma;
    }

    public static void setSma(int sma) {
        Sach.sma = sma;
    }

    public Object[] toObject() {
        return new Object[]{
            ma, ten, ten, chuyeNganh, namXuatBan
        };
    }

    @Override
    public String toString() {
        return "Sach{" + "ma=" + ma + ", ten=" + ten + ", chuyeNganh=" + chuyeNganh + ", namXuatBan=" + namXuatBan + '}';
    }

}
