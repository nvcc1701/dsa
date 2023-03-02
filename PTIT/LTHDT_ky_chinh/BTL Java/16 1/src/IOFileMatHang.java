/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author ELITEBOOK 8570W
 */
public class IOFileMatHang {

    public static void ghiFile(ArrayList<MatHang> dsmh, String tenFile) {
        try {
            try (PrintWriter out = new PrintWriter(tenFile)) {
                dsmh.forEach(matHang -> {
                    out.println(matHang.toString());
                });
                out.close();
            }
        } catch (FileNotFoundException e) {

        }
    }
    
    public static void ghiFilePhanLoai(ArrayList<MatHang> dstd, ArrayList<MatHang> dstt, ArrayList<MatHang> dsdt, String tenFile) {
        try {
            try (PrintWriter out = new PrintWriter(tenFile)) {
                out.println("******DANH SÁCH HÀNG TIÊU DÙNG******");
                dstd.forEach(matHang -> {
                    out.println(matHang.toString());
                });
                out.println("******DANH SÁCH HÀNG THỜI TRANG******");
                dstt.forEach(matHang -> {
                    out.println(matHang.toString());
                });
                out.println("******DANH SÁCH HÀNG ĐIỆN TỬ - ĐIỆN LẠNH******");
                dsdt.forEach(matHang -> {
                    out.println(matHang.toString());
                });
                out.close();
            }
        } catch (FileNotFoundException e) {

        }
    }

    public static void docFile(ArrayList<MatHang> dsmh, String tenFile) {
        try {
            try (Scanner sc = new Scanner(new File(tenFile))) {
                while (sc.hasNextLine()) {
                    String maHang_str, ten, nhom, giaBan_str;
                    maHang_str = sc.nextLine();
                    ten = sc.nextLine();
                    nhom = sc.nextLine();
                    giaBan_str = sc.nextLine();
                    //System.out.println(maHang_str + " " + ten + " " + nhom + " " + giaBan_str);
                    try {
                        int maHang = Integer.parseInt(maHang_str);
                        double giaBan = Double.parseDouble(giaBan_str);
                        try {
                            MatHang matHang = new MatHang(maHang, ten, nhom, giaBan);
                            dsmh.add(matHang);
                        } catch (MatHangException ex) {
                            //ex.printStackTrace();
                        }
                    } catch (NumberFormatException ex) {

                    }
                }
            }
        } catch (FileNotFoundException ex) {
               ex.printStackTrace();
        } catch (Exception ex) {
               ex.printStackTrace();
        }
    }
}
