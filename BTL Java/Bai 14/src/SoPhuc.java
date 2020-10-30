import java.lang.ref.PhantomReference;
import java.util.Scanner;

public class SoPhuc {
    float a; //phan thuc
    float b; //phan ao

    Scanner sc = new Scanner(System.in);

    public SoPhuc() {
        this.a = 0;
        this.b = 0;
    }

    public SoPhuc(float thuc, float ao) {
        this.a = thuc;
        this.b = ao;
    }

    public SoPhuc cong(SoPhuc sp2) {
        SoPhuc sp;
        float thuc = this.a + sp2.a;
        float ao = this.b + sp2.b;
        return sp = new SoPhuc(thuc, ao);
    }

    public SoPhuc tru(SoPhuc sp2) {
        SoPhuc sp;
        float thuc = this.a - sp2.a;
        float ao = this.b - sp2.b;
        return sp = new SoPhuc(thuc, ao);
    }

    public SoPhuc nhan(SoPhuc sp2) {
        float thuc = this.a*sp2.a - this.b*sp2.b;
        float ao = this.a*sp2.b + sp2.a*this.b;
        SoPhuc sp = new SoPhuc(thuc, ao);
        return sp;
    }

    public SoPhuc chia(SoPhuc sp2) {
        float mau = this.a*this.a + this.b*this.b;
        float thuc = (this.a*sp2.a + this.b*sp2.b)/mau;
        float ao =  (this.a*sp2.b - sp2.a*this.b)/mau;
        SoPhuc sp = new SoPhuc(thuc, ao);
        return sp;
    }

    public SoPhuc nghichDao() {
        SoPhuc res = new SoPhuc();
        float mau = this.a*this.a + this.b*this.b;
        res.a = this.a/mau;
        res.b = this.b/mau;
        return res;
    }

    public boolean bangNhau(SoPhuc sp2) {
        if(this.a == sp2.a && this.b == sp2.b) return true;
        else return false;
    }

    public boolean lonHon(SoPhuc sp2){
        double modula = Math.sqrt(Math.pow(this.a,2) + Math.pow(this.b, 2));
        double modulb = Math.sqrt(Math.pow(sp2.a,2) + Math.pow(sp2.b, 2));
        modula = Math.abs(modula);
        modulb = Math.abs(modulb);

        if(modula > modulb) return true;
        else return false;
    }

    public boolean nhoHon(SoPhuc sp2){
        double modula = Math.sqrt(Math.pow(this.a,2) + Math.pow(this.b, 2));
        double modulb = Math.sqrt(Math.pow(sp2.a,2) + Math.pow(sp2.b, 2));
        modula = Math.abs(modula);
        modulb = Math.abs(modulb);

        if(modula < modulb) return true;
        else return false;
    }

    public void hien() {
        System.out.println(this.a + " + j" + this.b);
    }

    public void nhap() {
        this.a = sc.nextFloat();
        this.b = sc.nextFloat();
    }
}
