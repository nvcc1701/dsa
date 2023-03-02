import java.util.Scanner;

public class Matrix {
    float[][] a;
    public int rows;
    public int cols;

    Scanner sc = new Scanner(System.in);

    public Matrix() {
        a = new float[3][3];
        this.cols = 3;
        this.rows = 3;
    }

    public Matrix(int rows, int cols) {
        a = new float[rows][cols];
        this.rows = rows;
        this.cols = cols;
    }

    public Matrix add(Matrix m) {
        Matrix mres;
        if(this.rows == m.rows && this.cols == m.cols) {
            mres = new Matrix(this.rows, this.cols);
            for(int i = 0; i < rows; i++) {
                for(int j = 0; j < cols; j++) {
                    mres.a[i][j] = this.a[i][j] + m.a[i][j];
                }
            }
        } else return mres = new Matrix();
        return mres;
    }

    public Matrix sub(Matrix m) {
        Matrix mres;
        if(this.rows == m.rows && this.cols == m.cols) {
            mres = new Matrix(this.rows, this.cols);
            for(int i = 0; i < rows; i++) {
                for(int j = 0; j < cols; j++) {
                    mres.a[i][j] = this.a[i][j] - m.a[i][j];
                }
            }
        } else return mres = new Matrix();
        return mres;
    }

    public Matrix neg() {
        Matrix neg = new Matrix(this.rows, this.cols);
        for(int i = 0; i < neg.rows; i++) {
            for(int j = 0; j < neg.cols; j++) {
                neg.a[i][j] = -this.a[i][j];
            }
        }
        return neg;
    }

    public Matrix transpose() {
        Matrix transpose = new Matrix(this.cols, this.rows);
        for(int i = 0; i < cols; i++) {
            for(int j = 0; j < rows; j++) {
                transpose.a[i][j] = this.a[i][j];
            }
        }
        return transpose;
    }

    public Matrix mul(Matrix m) {
        Matrix mul;
        if(this.rows == m.cols || this.cols == m.rows) {
            mul = new Matrix(this.rows, this.cols);
            for(int i = 0; i < this.cols; i++) {
                for(int j = 0; j < this.rows; j++) {
                    mul.a[i][j] = this.a[i][j] * m.a[j][i];
                }
            }
        } else mul = new Matrix();
        return mul;
    }

    public void print() {
        for(int i = 0; i < this.rows; i++) {
            for(int j = 0; j < this.cols; j++) {
                System.out.print(this.a[i][j] + " ");
            }
            System.out.println();
        }
    }

    public void input() {
        for(int i = 0; i < this.rows; i++) {
            for(int j = 0; j < this.cols; j++) {
                this.a[i][j] = sc.nextInt();
            }
        }
    }
}
