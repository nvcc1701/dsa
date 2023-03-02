public class MatHang {
    int maHang;
    String ten;
    String nhom;
    double giaBan;

    public MatHang(int m, String t, String nhom, double gia) {
        this.maHang = m;
        this.ten = t;
        this.nhom = nhom;
        this.giaBan = gia;
    }

    public double getGiaBan() {
        return this.giaBan;
    }

    @Override
    public String toString() {
        return maHang + " " + ten + " " + nhom + " " + giaBan + "\n";
    }
}
