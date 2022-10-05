/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.J05018_BangDiemHocSinh;

/**
 *
 * @author nhokt
 */
public class BangDiem {

    private String maHS;
    private String hoTen;
    private float toan, tiengViet, nn, vatLy, hoaHoc, sinhHoc, lichSu, diaLy, gdcd, congNghe, diemTB;
    private String xepLoai;

    public BangDiem(int maHS, String hoTen, float toan, float tiengViet, float nn, float vatLy, float hoaHoc, float sinhHoc, float lichSu, float diaLy, float gdcd, float congNghe) {
        this.maHS = String.format("HS%02d", maHS);
        this.hoTen = hoTen;
        this.toan = toan;
        this.tiengViet = tiengViet;
        this.nn = nn;
        this.vatLy = vatLy;
        this.hoaHoc = hoaHoc;
        this.sinhHoc = sinhHoc;
        this.lichSu = lichSu;
        this.diaLy = diaLy;
        this.gdcd = gdcd;
        this.congNghe = congNghe;
        this.tinhDiemTB(toan, tiengViet, nn, vatLy, hoaHoc, sinhHoc, lichSu, diaLy, gdcd, congNghe);
        xeploaiHS(tinhDiemTB(toan, tiengViet, nn, vatLy, hoaHoc, sinhHoc, lichSu, diaLy, gdcd, congNghe));
    }

    public float getDiemTB() {
        return diemTB;
    }

    public void setDiemTB(float diemTB) {
        this.diemTB = diemTB;
    }

    public String getXepLoai() {
        return xepLoai;
    }

    public void setXepLoai(String xepLoai) {
        this.xepLoai = xepLoai;
    }

    public String getHoTen() {
        return hoTen;
    }

    public void setHoTen(String hoTen) {
        this.hoTen = hoTen;
    }

    public String getMaHS() {
        return maHS;
    }

    public void setMaHS(String maHS) {
        this.maHS = maHS;
    }

    private float tinhDiemTB(float toan, float tiengViet, float nn, float vatLy, float hoaHoc, float sinhHoc, float lichSu, float diaLy, float gdcd, float congNghe) {
        diemTB = (float) Math.round(((toan * 2 + tiengViet * 2 + nn + vatLy + hoaHoc + sinhHoc + lichSu + diaLy + gdcd + congNghe) / 12) * 10f
        ) / 10f;
        return diemTB;
    }

    private void xeploaiHS(float diemTB) {
        if (diemTB >= 9) {
            xepLoai = "XUAT SAC";
        }
        if (diemTB >= 8 && diemTB < 9) {
            xepLoai = "GIOI";
        }
        if (diemTB >= 7 && diemTB < 8) {
            xepLoai = "KHA";
        }
        if (diemTB >= 5 && diemTB < 7) {
            xepLoai = "TB";
        }
        if (diemTB < 5) {
            xepLoai = "YEU";
        }
    }

    @Override
    public String toString() {
        return maHS + " " + hoTen + " " + diemTB + " " + xepLoai;
        //"HS" +
    }

}
