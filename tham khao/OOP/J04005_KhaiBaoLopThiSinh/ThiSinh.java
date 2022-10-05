/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J04005_KhaiBaoLopThiSinh;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

/**
 *
 * @author nhokt
 */
public class ThiSinh {

    private String hoTen;
    private Date ngaySinh;
    private Float diem1;
    private Float diem2;
    private Float diem3;

    public ThiSinh(String hoTen, String ngaySinh, Float diem1, Float diem2, Float diem3) throws ParseException{
        this.hoTen = hoTen;
        this.ngaySinh = new SimpleDateFormat("dd/MM/yyyy").parse(ngaySinh);
        this.diem1 = diem1;
        this.diem2 = diem2;
        this.diem3 = diem3;
    }

    public ThiSinh() {
    }

    public String getHoTen() {
        return hoTen;
    }

    public void setHoTen(String hoTen) {
        this.hoTen = hoTen;
    }

    public Date getNgaySinh() {
        return ngaySinh;
    }

    public void setNgaySinh(Date ngaySinh) {
        this.ngaySinh = ngaySinh;
    }

    public Float getDiem1() {
        return diem1;
    }

    public void setDiem1(Float diem1) {
        this.diem1 = diem1;
    }

    public Float getDiem2() {
        return diem2;
    }

    public void setDiem2(Float diem2) {
        this.diem2 = diem2;
    }

    public Float getDiem3() {
        return diem3;
    }

    public void setDiem3(Float diem3) {
        this.diem3 = diem3;
    }

   public float tinhTongDiem(){
       return (diem1+diem2+diem3);
   }

    @Override
    public String toString() {
        //return "ThiSinh{" + "hoTen=" + hoTen + ", ngaySinh=" + ngaySinh + ", diem1=" + diem1 + ", diem2=" + diem2 + ", diem3=" + diem3 + ", tongDiem=" + tongDiem + '}';
        return hoTen + " " + new SimpleDateFormat("dd/MM/yyyy").format(ngaySinh) + " " + tinhTongDiem();

    }
//    public void nhapthongtin(Scanner in){
//        hoTen=in.nextLine();
//        
//    }

}
