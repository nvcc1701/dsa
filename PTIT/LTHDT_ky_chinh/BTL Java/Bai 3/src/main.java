import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap vao chieu rong, chieu dai, mau sac: ");
        double dai;
        double rong;
        String mau;
        rong = sc.nextDouble();
        dai = sc.nextDouble();
        mau = sc.next();
        Rectangle rect = new Rectangle(rong, dai, mau);

        System.out.println("Dai: " + rect.getWidth());
        System.out.println("Rong: " + rect.getHeight());
        System.out.println("Mau: " + rect.getColor());
        System.out.println("Dien tich: " + rect.findArena());
        System.out.println("Chu vi: " + rect.findPerimeter());
    }
}
