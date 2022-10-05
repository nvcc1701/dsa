/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.KhaiBaoNhanVien_J04007;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

/**
 *
 * @author nhokt
 */
public class NhanVien {

    private String maNhanVien,ten,gioiTinh,ngaySinh,diaChi,maSoThue,ngayKiHopDong;

    public NhanVien(String maNhanVien, String ten, String gioiTinh, String ngaySinh, String diaChi, String maSoThue, String ngayKiHopDong) {
        this.maNhanVien = maNhanVien;
        this.ten = ten;
        this.gioiTinh = gioiTinh;
        this.ngaySinh = ngaySinh;
        this.diaChi = diaChi;
        this.maSoThue = maSoThue;
        this.ngayKiHopDong = ngayKiHopDong;
    }
    public String toString(){
        return String.format("%s %s %s %s %s %s %s",maNhanVien,ten,gioiTinh,ngaySinh,diaChi,maSoThue,ngayKiHopDong);
    }
}
