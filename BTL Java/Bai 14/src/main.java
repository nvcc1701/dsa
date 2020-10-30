import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        SoPhuc sp1 = new SoPhuc();
        SoPhuc sp2 = new SoPhuc();

        System.out.println("Nhap vao so phuc 1: ");
        sp1.nhap();
        System.out.println("Nhap vao so phuc 2: ");
        sp2.nhap();

        System.out.print("Tong: "); sp1.cong(sp2).hien();
        System.out.print("Hieu: "); sp1.tru(sp2).hien();
        System.out.print("Tich: "); sp1.nhan(sp2).hien();
        System.out.print("Thuong: "); sp1.chia(sp2).hien();
        System.out.print("Nghich dao: "); sp1.nghichDao().hien();
        soSanh(sp1, sp2);
    }

    static void soSanh(SoPhuc sp1, SoPhuc sp2) {
        if(sp1.bangNhau(sp2)) System.out.println("2 so phuc bang nhau");
        if(sp1.lonHon(sp2)) System.out.println("so phuc 1 lon hon so phuc 2");
        else System.out.println("so phuc 1 nho hon so phuc 2");
    }
}
