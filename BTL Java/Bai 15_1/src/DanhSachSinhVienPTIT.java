/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.File;
import java.io.FileNotFoundException;
import java.text.Collator;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Locale;
import java.util.Scanner;
import java.util.stream.Collectors;

public class DanhSachSinhVienPTIT {
    private ArrayList<SinhVienPTIT> dssv;

    public DanhSachSinhVienPTIT() {
        this.dssv = new ArrayList<>();
    }
    
    public void nhap(){
        try{
        Scanner sc = new Scanner(new File("SV.INP"));
        IOFileSinhVienPTIT.docFile(this.dssv,"SV.INP");
        }
        catch(FileNotFoundException ex){   
        }
    }
    
    public void xuat(){
        for(SinhVienPTIT sv : dssv) System.out.println(sv.toString());
    }
    
    public void sapXep(){
       Collections.sort(dssv, (SinhVienPTIT sv1, SinhVienPTIT sv2) -> {
           if(sv1.getLop().compareTo(sv2.getLop()) == 0)
               return  (sv2.getDiemtb()+"").compareTo("" + sv1.getDiemtb());
           return sv1.getLop().compareTo(sv2.getLop());
       });
       IOFileSinhVienPTIT.ghiFile(dssv,"SV.OUT");
    }
    
    public void sapXepTheoTen() {
        Collections.sort(dssv, (SinhVienPTIT sv1, SinhVienPTIT sv2) -> {
            String name1 = sv1.getTen();
            String name2 = sv2.getTen();
            for (int i = name1.length() - 1; i >= 0; i--) {
                if (name1.charAt(i) == ' ') {
                    name1 = name1.substring(i+1) + " " + name1.substring(0, i);
                    break;
                }
            }
            for (int i = name2.length() - 1; i >= 0; i--) {
                if (name2.charAt(i) == ' ') {
                    name2 = name2.substring(i+1) + " " + name2.substring(0, i);
                    break;
                }
            }
            return Collator.getInstance(new Locale("vi")).compare(name1, name2);
        });
    }
    
    public void phanLoai(){
        sapXepTheoTen();
        ArrayList<SinhVienPTIT> dsGioi = new ArrayList<>(dssv.stream().filter(sv ->sv.getDiemtb() > 8.0).collect(Collectors.toList()));
        ArrayList<SinhVienPTIT> dsKha = new ArrayList<>(dssv.stream().filter(sv ->sv.getDiemtb() > 7.0 && sv.getDiemtb() < 8.0).collect(Collectors.toList()));
        ArrayList<SinhVienPTIT> dsTrungBinh = new ArrayList<>(dssv.stream().filter(sv ->sv.getDiemtb() > 5.0 && sv.getDiemtb() < 7.0).collect(Collectors.toList()));
        ArrayList<SinhVienPTIT> dsYeu = new ArrayList<>(dssv.stream().filter(sv ->sv.getDiemtb() < 5.0).collect(Collectors.toList()));
        IOFileSinhVienPTIT.ghiFilePhanLoai(dsGioi, dsKha, dsTrungBinh, dsYeu, "SAPXEP.OUT");
    }
}
