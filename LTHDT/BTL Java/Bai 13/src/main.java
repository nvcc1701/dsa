import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        PhanSo ps1 = new PhanSo();
        PhanSo ps2 = new PhanSo();

        System.out.println("Nhap vao ps 1: ");
        ps1.nhap();
        System.out.println("Nhap vao ps 2: ");
        ps2.nhap();

        System.out.print("Tong: "); ps1.cong(ps2).hien();
        System.out.print("Hieu: "); ps1.tru(ps2).hien();
        System.out.print("Tich: "); ps1.nhan(ps2).hien();
        System.out.print("Thuong: "); ps1.chia(ps2);
        System.out.print("2 phan so toi gian: "); ps1.toiGian().hien(); ps2.toiGian().hien();
        System.out.print("So sanh 2 ps: ");
        if(ps1.bangNhau(ps2)) System.out.print("ps1 bang ps2");
        else if(ps1.lonHon(ps2)) System.out.print("ps1 lon hon ps2");
        else System.out.print("ps1 nho hon ps2");
    }
}
