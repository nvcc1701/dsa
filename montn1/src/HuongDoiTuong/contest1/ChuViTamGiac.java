/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong.contest1;

import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class ChuViTamGiac {

    public static class Point {

        private double x;
        private double y;

        public Point() {
        }

        public Point(double x, double y) {
            this.x = x;
            this.y = y;
        }

        public double getX() {
            return x;
        }

        public double getY() {
            return y;
        }

        //p1 -> p2 == v2((x1-x2)^2 + (x1-y2)^2);
        public double distance(Point secondPoint) {
            double res = Math.pow((this.x - secondPoint.x), 2) + Math.pow(this.y - secondPoint.y, 2);
            return Math.sqrt(res);
        }

        public double distance(Point p1, Point p2) {
            double res = Math.pow((p1.x - p2.x), 2) + Math.pow(p1.y - p2.y, 2);
            return Math.sqrt(res);
        }

        @Override
        public String toString() {
            return "Point{" + "x=" + x + ", y=" + y + '}';
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            Point p1 = new Point(sc.nextDouble(), sc.nextDouble());
            Point p2 = new Point(sc.nextDouble(), sc.nextDouble());
            Point p3 = new Point(sc.nextDouble(), sc.nextDouble());

            double a = p1.distance(p2);
            double b = p1.distance(p3);
            double c = p2.distance(p3);

            if (a + b > c && a + c > b && b + c > a) {
                System.out.println(String.format("%.3f", a + b + c));
            } else {
                System.out.println("INVALID");
                continue;
            }
        }
    }
}
