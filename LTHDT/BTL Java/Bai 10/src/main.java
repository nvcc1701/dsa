import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap n cac diem: ");
        int n = sc.nextInt();
        double x, y;
        MyPoint[] points = new MyPoint[n];
        MyPoint point = new MyPoint(1, 1);
        for(int i = 0; i < n; i++) {
            System.out.println("Nhap x, y cua diem thu " + i+1);
            x = sc.nextFloat(); y = sc.nextDouble();
            points[i] = new MyPoint(x, y);
        }

        double max = -99;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                double temp = point.distance(points[i], points[j]);
                if(temp > max) {
                    max = temp;
                    point.setLocation(i, j);
                }
            }
        }

        System.out.println("Toa do diem 1: " + points[point.maxX].getX() + " " + points[point.maxX].getY());
        System.out.println("Toa do diem 2: " + points[point.maxY].getX() + " " + points[point.maxY].getY());
        System.out.println("Khoang cach: " + max);
    }
}
