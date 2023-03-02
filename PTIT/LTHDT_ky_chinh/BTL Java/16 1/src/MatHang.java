/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.text.DecimalFormat;

/**
 *
 * @author ELITEBOOK 8570W
 */
public class MatHang {
    private int maHang;
    private String ten;
    private String nhom;
    private double giaBan;

    public MatHang() {
    }

    public MatHang(int maHang, String ten, String nhom, double giaBan) throws MatHangException {
        if(kiemTraMaHang(maHang)) throw new MatHangException();
        if(ten.length()==0) throw new MatHangException();
        if(!kiemTraNhomHang(nhom)) throw new MatHangException();
        if(!kiemTraGiaBan(giaBan)) throw new MatHangException();
        this.maHang = maHang;
        this.ten = ten;
        this.nhom = nhom;
        this.giaBan = giaBan;
    }

    public int getMaHang() {
        return maHang;
    }

    public String getTen() {
        return ten;
    }

    public String getNhom() {
        return nhom;
    }

    public double getGiaBan() {
        return giaBan;
    }

    @Override
    public String toString() {
        return maHang + " " + ten + " " + nhom + " " + new DecimalFormat("0").format(giaBan);
    }
    
    private boolean kiemTraMaHang(int maHang){
        return maHang <1000 || maHang > 9999; 
    }
    
    private boolean kiemTraNhomHang(String nhom){
        //System.out.println(nhom);
        return nhom.equals("hàng tiêu dùng") || nhom.equals("hàng thời trang") || nhom.equals("hàng điện tử - điện lạnh");
    }
    
    private boolean kiemTraGiaBan(double giaBan){
        return giaBan > 0;
    }
}
