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
public class IOFileSinhVienPTIT {

    public static void ghiFile(ArrayList<SinhVienPTIT> dssv, String tenFile) {
        try {
            try (PrintWriter out = new PrintWriter(tenFile)) {
                dssv.forEach(sv -> {
                    out.println(sv.toString());
                });
                out.close();
            }
        } catch (FileNotFoundException e) {
        }
    }
    
    public static void ghiFilePhanLoai(ArrayList<SinhVienPTIT> dssv_gioi, ArrayList<SinhVienPTIT> dssv_kha, ArrayList<SinhVienPTIT> dssv_tbinh, ArrayList<SinhVienPTIT> dssv_yeu, String tenFile) {
        try {
            try (PrintWriter out = new PrintWriter(tenFile)) {
                out.println("*****DANH SÁCH SINH VIÊN LOẠI GIỎI*****");
                dssv_gioi.forEach(sv -> {
                    out.println(sv.toString());
                });
                out.println("*****DANH SÁCH SINH VIÊN LOẠI KHÁ*****");
                dssv_kha.forEach(sv -> {
                    out.println(sv.toString());
                });
                out.println("*****DANH SÁCH SINH VIÊN LOẠI TRUNG BÌNH*****");
                dssv_tbinh.forEach(sv -> {
                    out.println(sv.toString());
                });
                out.println("*****DANH SÁCH SINH VIÊN LOẠI YẾU*****");
                dssv_yeu.forEach(sv -> {
                    out.println(sv.toString());
                });
                out.close();
            }
        } catch (FileNotFoundException e) {
        }
    }

    public static void docFile(ArrayList<SinhVienPTIT> dssv, String tenFile) {
        try {
            try (Scanner sc = new Scanner(new File(tenFile))) {
                while (sc.hasNextLine()) {
                    String masv_str, ten, lop, diemtb_str;
                    masv_str = sc.nextLine();
                    ten = sc.nextLine();
                    lop = sc.nextLine();
                    diemtb_str = sc.nextLine();  
                    //System.out.println(masv_str + " "+ ten + " " +  lop + " "+ diemtb_str);
                    try {
                        int masv = Integer.parseInt(masv_str);
                        double diemtb = Double.parseDouble(diemtb_str);
                        //System.out.println(masv + " "+ ten + " " +  lop + " "+ diemtb);
                        try {
                            SinhVienPTIT sv = new SinhVienPTIT(masv, ten, lop, diemtb);
                           // System.out.println(sv.toString());
                            dssv.add(sv);
                        } catch (SinhVienPTITException ex) {
                           // ex.printStackTrace();
                        }
                    } catch (NumberFormatException ex) {
                        
                    }
                }
            }
        } catch (FileNotFoundException ex) {
            //ex.printStackTrace();
        }
        catch (Exception ex) {
            //ex.printStackTrace();
        }
    }
}
