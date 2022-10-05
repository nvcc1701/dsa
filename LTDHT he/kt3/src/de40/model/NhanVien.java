/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package de40.model;

import de40.controller.DienThoaiException;
import de40.controller.TrongException;
import java.io.Serializable;

/**
 *
 * @author nvcc
 */
public class NhanVien implements Serializable {

    private int ma;
    private String hoTen, diaChi, dienThoai;
    private static int sma = 1000;

    public NhanVien() {

    }

    public NhanVien(int ma, String hoTen, String diaChi, String dienThoai) {
        this.ma = ma;
        this.hoTen = hoTen;
        this.diaChi = diaChi;
        this.dienThoai = dienThoai;
    }

    public NhanVien(String hoTen, String diaChi, String dienThoai) throws TrongException, DienThoaiException {
        if (hoTen.isEmpty() || diaChi.isEmpty()) {
            throw new TrongException();
        }

        if (!dienThoai.matches("\\d+")) {
            throw new DienThoaiException();
        }

        this.ma = sma++;
        this.hoTen = hoTen;
        this.diaChi = diaChi;
        this.dienThoai = dienThoai;
    }

    public int getMa() {
        return ma;
    }

    public void setMa(int ma) {
        this.ma = ma;
    }

    public String getHoTen() {
        return hoTen;
    }

    public void setHoTen(String hoTen) {
        this.hoTen = hoTen;
    }

    public String getDiaChi() {
        return diaChi;
    }

    public void setDiaChi(String diaChi) {
        this.diaChi = diaChi;
    }

    public String getDienThoai() {
        return dienThoai;
    }

    public void setDienThoai(String dienThoai) {
        this.dienThoai = dienThoai;
    }

    public static int getSma() {
        return sma;
    }

    public static void setSma(int sma) {
        NhanVien.sma = sma;
    }

    public Object[] toObjects() {
        return new Object[]{
            ma, hoTen, diaChi, dienThoai
        };
    }

}
