/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.Scanner;

/**
 *
 * @author nhokt
 */
public class T208_SoFibonacciThuN {
     public static int n, mod = (int) 1e9 + 7;

    public static class Matrix {

        long[][] A = new long[3][3];

        public Matrix() {
            A[0][0] = 0;
            A[0][1] = A[1][0] = A[1][1] = 1;
        }
    }

    public static Matrix multiply(Matrix a, Matrix b) {
        Matrix res = new Matrix();
        for (int i = 0; i <= 1; i++) {
            for (int j = 0; j <= 1; j++) {
                res.A[i][j] = 0;
                for (int k = 0; k <= 1; k++) {
                    res.A[i][j] = (res.A[i][j] + a.A[i][k] * b.A[k][j]) % mod;
                }
            }
        }
        return res;
    }

    public static Matrix power(Matrix a, long k) {
        if (k == 1) {
            return a;
        }
        Matrix x = power(a, k / 2);
        x = multiply(x, x);
        if (k % 2 == 1) {
            x = multiply(x, a);
        }
        return x;

    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            n = in.nextInt();
            Matrix x = new Matrix();
            x = power(x, n);
            System.out.println(x.A[0][1]);
        }
    }
}
