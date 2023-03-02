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
public class TN02004_TichHaiDoiTuongMaTran {

    private static class Matrix {

        private static int n;
        private static int m;
        private static int[][] a;

        public Matrix(int n, int m) {
            this.n = n;
            this.m = m;
            a = new int[n][m];
        }

        public static void nextMatrix(Scanner sc) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    a[i][j] = sc.nextInt();
                }
            }
        }

        public static String mul(Matrix m2) {
            String s = "";
            int nr = n;
            int mr = m;
            int pr = m2.m;
            int[][] res = new int[nr][pr];

            for (int i = 0; i < nr; i++) {
                for (int j = 0; j < pr; j++) {
                    res[i][j] = 0;
                    for (int k = 0; k < mr; k++) {
                        res[i][j] += a[i][k] * m2.a[k][j];
                    }
                }
            }

            for (int i = 0; i < nr; i++) {
                for (int j = 0; j < pr; j++) {
                    s += res[i][j];
                    s += " ";
                }
                s += "\n";
            }

            return s;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        int n = sc.nextInt(), m = sc.nextInt(), p = sc.nextInt();
        Matrix a = new Matrix(n, m);
        a.nextMatrix(sc);
        Matrix b = new Matrix(m, p);
        b.nextMatrix(sc);
        System.out.println(a.mul(b));
    }

}
