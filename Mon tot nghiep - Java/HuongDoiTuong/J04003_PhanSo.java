import java.util.Scanner;

public class J04003_PhanSo {
    public static class PhanSo {
        private long tuso;
        private long mauso;

        public PhanSo(long a, long b) {
            tuso = a;
            mauso = b;
        }

        public PhanSo() {

        }

        public void print() {
            System.out.println(this.tuso + "/" + this.mauso);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();

        long gcd = gcd(a, b);
        PhanSo ps = new PhanSo(a / gcd, b / gcd);
        ps.print();

    }

    public static long gcd(long a, long b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
}
