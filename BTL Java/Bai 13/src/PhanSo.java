import java.util.Scanner;

public class PhanSo {
    int ts;
    int ms;
    Scanner sc = new Scanner(System.in);

    public PhanSo() {
        this.ts = 0;
        this.ms = 1;
    }

    public PhanSo(int ts, int ms) {
        this.ts = ts;
        this.ms = ms;
    }

    public PhanSo cong(PhanSo sp2) {
        PhanSo res;
        if(this.ms == sp2.ms) {
            res = new PhanSo(this.ts + sp2.ts, this.ms);
        } else {
            int ms = this.ms * sp2.ms;
            int ts = this.ts*sp2.ms + sp2.ts*this.ms;
            res = new PhanSo(ts, ms);
        }
        return res;
    }

    public PhanSo tru(PhanSo sp2) {
        PhanSo res;
        if(this.ms == sp2.ms) {
            res = new PhanSo(this.ts + sp2.ts, this.ms);
        } else {
            int ms = this.ms * sp2.ms;
            int ts = this.ts*sp2.ms - sp2.ts*this.ms;
            ts = Math.abs(ts);
            res = new PhanSo(ts, ms);
        }
        return res;
    }

    public PhanSo nhan(PhanSo sp2) {
        PhanSo res;
        int ts = this.ts * sp2.ts;
        int ms = this.ms * sp2.ms;
        return res = new PhanSo(ts, ms);
    }

    public PhanSo chia(PhanSo sp2) {
        PhanSo res;
        int ts = this.ts * sp2.ms;
        int ms = this.ms * sp2.ts;

        return res = new PhanSo(ts, ms);
    }

    public PhanSo nghichDao() {
        PhanSo res;
        int ts = this.ms;
        int ms = this.ts;
        return res = new PhanSo(ts, ms);
    }

    public PhanSo doiDau() {
        PhanSo res;
        int ts = -this.ts;
        int ms = this.ms;
        return res = new PhanSo(ts, ms);
    }

    public PhanSo toiGian() {
        int gcd = gcd(this.ts, this.ms);
        PhanSo res;
        int ts = this.ts/gcd;
        int ms = this.ms/gcd;

        return res = new PhanSo(ts, ms);
    }

    public boolean bangNhau(PhanSo sp2) {
        return this.ts/this.ms == sp2.ts/sp2.ms;
    }

    public boolean lonHon(PhanSo sp2) {
        return this.ts/this.ms > sp2.ts/sp2.ms;
    }

    public boolean nhoHon(PhanSo sp2) {
        return this.ts/this.ms < sp2.ts/sp2.ms;
    }

    public void hien() {
        System.out.println(this.ts + "/" + this.ms);
    }

    public void nhap() {
        this.ts = sc.nextInt();
        this.ms = sc.nextInt();
    }

    public int gcd(int a, int b) {
        if(b == 0) return a;
        else return gcd(b, a%b);
    }
}
