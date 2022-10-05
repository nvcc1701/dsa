/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package de40.model;

import java.io.Serializable;

/**
 *
 * @author nvcc
 */
public class QuanLy implements Serializable {

    private NhanVien nv;
    private DichVu dv;
    private int soluong;

    public QuanLy() {

    }

    public QuanLy(NhanVien nv, DichVu dv, int soluong) {
        this.nv = nv;
        this.dv = dv;
        this.soluong = soluong;
    }

    public NhanVien getNv() {
        return nv;
    }

    public void setNv(NhanVien nv) {
        this.nv = nv;
    }

    public DichVu getDv() {
        return dv;
    }

    public void setDv(DichVu dv) {
        this.dv = dv;
    }

    public int getSoluong() {
        return soluong;
    }

    public int getMaMv() {
        return this.nv.getMa();
    }

    public double getTienCong() {
        double tiencong = dv.getChiPhi() + dv.getGiaCuoc();
        return tiencong * 0.02 * this.getSoluong();
    }

    public void setSoluong(int soluong) {
        this.soluong = soluong;
    }

    public Object[] toObjects() {
        return new Object[]{
            nv.getMa(),
            nv.getHoTen(),
            dv.getMa(),
            dv.getTen(), this.soluong
        };
    }

}
