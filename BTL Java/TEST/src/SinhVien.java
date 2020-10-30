public class SinhVien {
    int maSV;
    String ten;
    String lop;
    float dtb;
    public boolean check = true;

    public SinhVien() {}

    public SinhVien(int m, String t, String l, float d) {
        this.maSV = m;
        this.ten = t;
        this.lop = l;
        this.dtb = d;
    }

    public void show() {
        System.out.println(this.maSV + "\t" + this.ten + "\t" + this.lop + "\t" + this.dtb);
    }
}
