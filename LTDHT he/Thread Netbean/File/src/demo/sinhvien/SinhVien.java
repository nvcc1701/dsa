package demo.sinhvien;

public class SinhVien {
    private int ma;
    private String ten;

    public SinhVien() {

    }

    public SinhVien(int ma, String ten) {
        this.ma = ma;
        this.ten = ten;
    }

    public String toString() {
        return ma + " " + ten;
    }
}
