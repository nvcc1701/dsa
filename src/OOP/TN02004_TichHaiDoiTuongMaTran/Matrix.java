/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP.TN02004_TichHaiDoiTuongMaTran;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class Matrix {

    private final int SIZE = 50;

    // Thuoc tinh
    private int M; // so hang
    private int N; // so cot
    private int[][] a;

    public Matrix(int e, int f) {
        a = new int[e][f];

        this.M = e;
        this.N = f;
    }

    private Matrix(Matrix A) {
        this(A.a);
    }

    public Matrix(int[][] a) {
        M = a.length;
        N = a[0].length;
        this.a = new int[M][N];
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                this.a[i][j] = a[i][j];
            }
        }
    }

    public Matrix mul(Matrix C) {
        Matrix A = this;
//        if (A.N != C.M) {
//            throw new RuntimeException("Illegal matrix dimensions.");
//        }
        Matrix D = new Matrix(A.M, C.N);
        for (int i = 0; i < D.M; i++) {
            for (int j = 0; j < D.N; j++) {
                for (int k = 0; k < A.N; k++) {
                    D.a[i][j] += (A.a[i][k] * C.a[k][j]);
                }
            }
        }
        return D;
    }

    public void nextMatrix(Scanner sc) {
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                a[i][j] = sc.nextInt();
            }
        }

    }

    @Override
    public String toString() {
        String tmp = "";
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                tmp += a[i][j] + " ";
            }
            tmp += "\n";
        }
        return tmp;
    }
}
