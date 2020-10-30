/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ELITEBOOK 8570W
 */
public class SinhVienPTIT {

    private int masv;
    private String ten;
    private String lop;
    private double diemtb;

    public SinhVienPTIT() {
    }

    public SinhVienPTIT(int masv, String ten, String lop, double diemtb) throws SinhVienPTITException {
        if (!kiemTraMaSV(masv)) {
            throw new SinhVienPTITException();
        }
        if (ten.length() == 0) {
            throw new SinhVienPTITException();
        }
        if (!kiemTraLop(lop)) {
            throw new SinhVienPTITException();
        }
        if (diemtb < 0 || diemtb > 10) {
            throw new SinhVienPTITException();
        }
        this.masv = masv;
        this.ten = ten;
        this.lop = lop;
        this.diemtb = diemtb;
    }

    public int getMasv() {
        return masv;
    }

    public String getTen() {
        return ten;
    }

    public String getLop() {
        return lop;
    }

    public double getDiemtb() {
        return diemtb;
    }
    
    
    @Override
    public String toString() {
        return masv + " " + ten + " " + lop + " " + diemtb;
    }

    private boolean kiemTraMaSV(int masv) {
        return !(masv < 1000 || masv > 9999);
    }

    private boolean kiemTraLop(String lop) {
        //Sử dụng regex, form: D18CQCN11-B
        String LOP_PATTERN = "[MDCLTBE][0-9]{2}(CQ|TC|TX|DN)(CS|IS|TE|EL|VT|DT|KD|XT|CN|MT|CP|KM|AM|QT|QM|QD|TH|KT|PT|TK|PU|TT|AT|MR|IM|TM|UD|TD)([0][1-9]|[1-9][0-9])\\-[BNK]";
        return lop.matches(LOP_PATTERN);
//        if (lop.length() != 11) {
//            return false;
//        }
//        String bac = "MCDLTBE"; //Các ký hiệu bậc đào tạo
//        if (!bac.contains("" + lop.charAt(0))) {
//            return false;
//        }
//        String khoaDaoTao = lop.substring(1, 3);
//        for (int i = 0; i < khoaDaoTao.length(); i++) {
//            if (!(khoaDaoTao.charAt(i) >= '0' && khoaDaoTao.charAt(i) <= '9')) {
//                return false;
//            }
//        }
//        if (Integer.parseInt(khoaDaoTao) == 0) {
//            return false;
//        }
//        String loaiHinhDaoTao = lop.substring(3, 5);
//        if (!(loaiHinhDaoTao.equals("CQ") || loaiHinhDaoTao.equals("TX") || loaiHinhDaoTao.equals("TC")
//                || loaiHinhDaoTao.equals("DN"))) {
//            return false;
//        }
//        String[] chuyenNganh = {"CS", "IS", "TE", "EL", "VT", "DT", "KD", "XT", "CN", "MT", "CP",
//             "KM", "AM", "QT", "QM", "QD", "TH", "KT", "PT", "TK", "PU", "TT", "AT", "MR", "IM", "TM", "UD", "TD"};
//        String nganhDaoTao = lop.substring(5, 7);
//        Arrays.sort(chuyenNganh);
//        if (Arrays.binarySearch(chuyenNganh, nganhDaoTao) == -1) {
//            return false;
//        }
//        String lopDaoTao = lop.substring(7, 9);
//        for (int i = 0; i < lopDaoTao.length(); i++) {
//            if (!(lopDaoTao.charAt(i) >= '0' && lopDaoTao.charAt(i) <= '9')) {
//                return false;
//            }
//        }
//        if (Integer.parseInt(lopDaoTao) == 0) {
//            return false;
//        }
//        if (lop.charAt(9) != '-') {
//            return false;
//        }
//        return lop.charAt(10) == 'B' || lop.charAt(10) == 'N' || lop.charAt(10) == 'K';
    }

}
