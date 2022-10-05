public class SinhVien {
    int maSV;
    String ten;
    String lop;
    double dtb;

    public SinhVien(int m, String t, String l, double d) {
        this.maSV = m;
        this.ten = t;
        this.lop = l;
        this.dtb = d;
    }

    public String getLop() {
        return this.lop;
    }

    public double getDtb() {
        return this.dtb;
    }

    @Override
    public String toString() {
        return "SinhVien{" +
                "maSV=" + maSV +
                ", ten='" + ten + '\'' +
                ", lop='" + lop + '\'' +
                ", dtb=" + dtb +
                '}' + "\n";
    }

    public String toStringOut() {
        return (maSV + " " + ten + " " + lop + " " + dtb + "\n");
    }
}
