/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class TN02014_LopTriangle2 {

    private static class Dot {

        private double x;
        private double y;

        public Dot(String x, String y) {
            this.x = Double.parseDouble(x);
            this.y = Double.parseDouble(y);
        }
    }

    public static class Triangle {

        private Dot a;
        private Dot b;
        private Dot c;
        private Double canh_a;
        private Double canh_b;
        private Double canh_c;

        public Triangle(String s) {
            StringTokenizer st = new StringTokenizer(s);

            while (st.hasMoreTokens()) {
                a = new Dot(st.nextToken(), st.nextToken());
                b = new Dot(st.nextToken(), st.nextToken());
                c = new Dot(st.nextToken(), st.nextToken());
            }
        }

        public boolean valid() {
            canh_a = Math.sqrt(Math.pow(Math.abs(a.x - b.x), 2) + Math.pow(Math.abs(a.y - b.y), 2));
            canh_b = Math.sqrt(Math.pow(Math.abs(b.x - c.x), 2) + Math.pow(Math.abs(b.y - c.y), 2));
            canh_c = Math.sqrt(Math.pow(Math.abs(c.x - a.x), 2) + Math.pow(Math.abs(c.y - a.y), 2));

//            System.out.println(canh_a + " " + canh_b + " " + canh_c);
            if (canh_a + canh_b <= canh_c) {
                return false;
            } else if (canh_b + canh_c <= canh_a) {
                return false;
            } else if (canh_c + canh_a <= canh_b) {
                return false;
            }

            return true;
        }

        public String getPerimeter() {
            Double cv = canh_a + canh_b + canh_c;
            return String.format("%.03f", cv);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            Triangle a = new Triangle(sc.nextLine());
            if (!a.valid()) {
                System.out.println("INVALID");
            } else {
                System.out.println(a.getPerimeter());
            }
        }
    }
}
