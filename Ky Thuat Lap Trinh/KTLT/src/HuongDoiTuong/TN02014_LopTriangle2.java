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

        public Triangle(Scanner sc) {

            this.a = new Dot(sc.next(), sc.next());
            this.b = new Dot(sc.next(), sc.next());
            this.c = new Dot(sc.next(), sc.next());
        }

    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("DATA.in"));

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
