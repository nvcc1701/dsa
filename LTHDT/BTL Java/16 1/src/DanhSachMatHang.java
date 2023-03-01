/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.File;
import java.io.FileNotFoundException;
import java.text.Collator;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Locale;
import java.util.Scanner;
import java.util.stream.Collectors;

/**
 *
 * @author ELITEBOOK 8570W
 */
public class DanhSachMatHang {

    private ArrayList<MatHang> dsmh;

    public DanhSachMatHang() {
        dsmh = new ArrayList<>();
    }

    public void nhap() {
        try {
            Scanner sc = new Scanner(new File("MH.INP"));
            IOFileMatHang.docFile(dsmh, "MH.INP");
        } catch (FileNotFoundException ex) {

        }
    }

    public void xuat() {
        for (MatHang mh : dsmh) {
            System.out.println(mh.toString());
        }
    }

    public void sapXepTheoGia() {
        Collections.sort(dsmh, new Comparator<MatHang>() {
            @Override
            public int compare(MatHang mh1, MatHang mh2) {
                return (mh1.getGiaBan() > mh2.getGiaBan() ? -1 : 1);
            }
        });
        IOFileMatHang.ghiFile(dsmh, "SX.OUT");
    }
    
    public void sapXepTheoTen(){
        Collections.sort(dsmh, new Comparator<MatHang>(){
            @Override
            public int compare(MatHang mh1, MatHang mh2){
                return Collator.getInstance(new Locale("vi")).compare(mh1.getTen(), mh2.getTen());
            }
        });
    }
    
    public void phanLoai(){
        sapXepTheoTen();
        ArrayList<MatHang> dsTieuDung = new ArrayList<>(dsmh.stream().filter(mh -> mh.getNhom().equals("hàng tiêu dùng")).collect(Collectors.toList()));
        ArrayList<MatHang> dsThoiTrang = new ArrayList<>(dsmh.stream().filter(mh -> mh.getNhom().equals("hàng thời trang")).collect(Collectors.toList()));
        ArrayList<MatHang> dsDien = new ArrayList<>(dsmh.stream().filter(mh -> mh.getNhom().equals("hàng điện tử - điện lạnh")).collect(Collectors.toList()));
        IOFileMatHang.ghiFilePhanLoai(dsTieuDung, dsThoiTrang, dsDien, "NHOM.OUT");
    }
}
