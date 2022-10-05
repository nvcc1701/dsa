/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package test;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class KhaiBaoLopHCN {

    public static class Rectange {

        private double width;
        private double height;
        private String color;

        public Rectange() {
            this.width = 1;
            this.height = 1;
        }

        public Rectange(double width, double height, String color) {
            this.width = width;
            this.height = height;
            this.color = color;
        }

        public double getWidth() {
            return width;
        }

        public void setWidth(double width) {
            this.width = width;
        }

        public double getHeight() {
            return height;
        }

        public void setHeight(double height) {
            this.height = height;
        }

        public String getColor() {
            return color;
        }

        public void setColor(String color) {
            this.color = color;
        }

        public double findArea() {
            return this.height * this.width;
        }

        public double findPerimeter() {
            return (this.height + this.width) * 2;
        }

        @Override
        public String toString() {
            String s = "";
            s = String.format("%.1f %.1f %s", this.findPerimeter(), this.findArea(), this.color);
            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
//        Scanner sc = new Scanner(System.in);

        String s1 = sc.next();
        String s2 = sc.next();
        String s3 = sc.next().toLowerCase();

        try {
            String ss = "";
            ss += Character.toUpperCase(s3.charAt(0));
            for (int i = 1; i < s3.length(); i++) {
                ss += s3.charAt(i);
            }
            Rectange r = new Rectange(Double.parseDouble(s1), Double.parseDouble(s2), ss);
            System.out.println(r);
        } catch (Exception e) {
            System.out.println("INVALID");
        }

    }
}
