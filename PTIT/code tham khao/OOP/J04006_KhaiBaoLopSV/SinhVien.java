/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J04006_KhaiBaoLopSV;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

/**
 *
 * @author nhokt
 */
public class SinhVien {

    private String msv, tenSV, lop;
    private Date ngaySinh;
    private float gpa;

    public SinhVien(String maSv, String tenSV, String lop, String ngaySinh, Float gpa) throws ParseException {
        this.tenSV = tenSV;
        this.lop = lop;
        this.ngaySinh = new SimpleDateFormat("dd/MM/yyyy").parse(ngaySinh);
        this.gpa = gpa;
    }

    @Override
    public String toString() {
        return String.format("B20DCCN001 %s %s %s %.2f", tenSV.toString(), lop.toString(), new SimpleDateFormat("dd/MM/yyyy").format(ngaySinh), gpa);
    }

}
