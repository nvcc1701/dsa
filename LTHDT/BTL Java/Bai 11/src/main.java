import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap vao 3 diem: ");
        MyPoint point1;
        MyPoint point2;
        MyPoint point3;
        MyPoint caculate = new MyPoint(1, 1);
        double x, y;

        System.out.println("Nhap vao diem thu 1");
        x = sc.nextDouble(); y = sc.nextDouble();
        point1 = new MyPoint(x, y);
        System.out.println("Nhap vao diem thu 2");
        x = sc.nextDouble(); y = sc.nextDouble();
        point2 = new MyPoint(x, y);
        System.out.println("Nhap vao diem thu 3");
        x = sc.nextDouble(); y = sc.nextDouble();
        point3 = new MyPoint(x, y);

        double a, b, c;
        a = caculate.distance(point1, point2);
        b = caculate.distance(point1, point3);
        c = caculate.distance(point2, point3);

        if((a+b == c) || (b+c == a) || (a+c == b)) System.out.println("Ko phai tam giac");
        else if( a == b && b == c && c == a ) System.out.println("Tam giac deu");
        else if((a == b || b == c || c == a) && ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)))
            System.out.println("Tam giac vuong can");
        else if(a == b || b == c || c == a) System.out.println("Tam giac can");
        else if((a*a == b*b+c*c) || (b*b == a*a+c*c) || (c*c == a*a+b*b)) System.out.println("Tam giac vuong");
        else System.out.println("Tam giac thuong");
    }
}
