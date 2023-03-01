/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J04019_LopTriangle1 {

    public static class Point {

        private double x;
        private double y;

        public Point(double x, double y) {
            this.x = x;
            this.y = y;
        }

        public static Point nextPoint(Scanner sc) {
            return new Point(sc.nextDouble(), sc.nextDouble());
        }
    }

    public static class Triangle {

        private Point p1;
        private Point p2;
        private Point p3;

        private static double length1;
        private static double length2;
        private static double length3;

        public Triangle(Point p1, Point p2, Point p3) {
            this.p1 = p1;
            this.p2 = p2;
            this.p3 = p3;

            this.length1 = length(p1, p2);
            this.length2 = length(p1, p3);
            this.length3 = length(p2, p3);
        }

        public static boolean valid() {
            if ((length1 + length2 > length3) && (length1 + length3 > length2) && (length2 + length3 > length1)) {
                return true;
            }
            return false;
        }

        public static String getPerimeter() {
            double chuvi = length1 + length2 + length3;
            return String.format("%.3f", chuvi);
        }

        public double length(Point p1, Point p2) {
            return Math.sqrt(Math.pow(p1.x - p2.x, 2) + Math.pow(p1.y - p2.y, 2));
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            Triangle a = new Triangle(Point.nextPoint(sc), Point.nextPoint(sc), Point.nextPoint(sc));
            if (!a.valid()) {
                System.out.println("INVALID");
            } else {
                System.out.println(a.getPerimeter());
            }
        }
    }
}
