/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package de40.model;

import de40.controller.TrongException;
import java.io.Serializable;

/**
 *
 * @author nvcc
 */
public class DichVu implements Serializable {

    private int ma;
    private String ten, nhom;
    private double chiPhi, giaCuoc;
    private static int sma = 1000;

    public DichVu() {

    }

    public DichVu(String ten, String nhom, double chiPhi, double giaCuoc) throws TrongException {
        if (ten.isEmpty()) {
            throw new TrongException();
        }

        this.ma = sma++;
        this.ten = ten;
        this.nhom = nhom;
        this.chiPhi = chiPhi;
        this.giaCuoc = giaCuoc;
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

    public String getNhom() {
        return nhom;
    }

    public void setNhom(String nhom) {
        this.nhom = nhom;
    }

    public double getChiPhi() {
        return chiPhi;
    }

    public void setChiPhi(double chiPhi) {
        this.chiPhi = chiPhi;
    }

    public double getGiaCuoc() {
        return giaCuoc;
    }

    public void setGiaCuoc(double giaCuoc) {
        this.giaCuoc = giaCuoc;
    }

    public static int getSma() {
        return sma;
    }

    public static void setSma(int sma) {
        DichVu.sma = sma;
    }

    public Object[] toObjects() {
        return new Object[]{
            ma, ten, nhom, chiPhi, giaCuoc
        };
    }

    @Override
    public String toString() {
        return "DichVu{" + "ma=" + ma + ", ten=" + ten + ", nhom=" + nhom + ", chiPhi=" + chiPhi + ", giaCuoc=" + giaCuoc + '}';
    }

}
