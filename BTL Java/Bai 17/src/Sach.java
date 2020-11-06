public class Sach {
    int maSach;
    String tenSach;
    String chuyenNganh;
    double giaBan;

    public Sach(int m, String t, String cn, double gia) {
        this.maSach = m;
        this.tenSach = t;
        this.chuyenNganh = cn;
        this.giaBan = gia;
    }

    public double getPrice() {
        return this.giaBan;
    }

    public String getName() {
        return this.tenSach;
    }

    public String getGroup() {return this.chuyenNganh; }

    @Override
    public String toString() {
        return maSach + " " + tenSach + " " + chuyenNganh + " " + giaBan;
    }
}
