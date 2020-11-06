public class MonHoc {
    private int maMon;
    private String tenMon;
    private String nhomMon;
    private int soTinChi;

    public MonHoc(int m, String t, String nhom, int so) {
        this.maMon = m;
        this.tenMon = t;
        this.nhomMon = nhom;
        this.soTinChi = so;
    }

    public int getCredit() {
        return this.soTinChi;
    }

    public String getName() {
        return this.tenMon;
    }

    public String getGroup() {
        return this.nhomMon;
    }

    @Override
    public String toString() {
        return maMon + " " + tenMon + " " + nhomMon + " " + soTinChi;
    }
}
