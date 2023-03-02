import java.util.Arrays;

public class _566_Reshape_the_Matrix {
    public static int[][] matrixReshape(int[][] mat, int r, int c) {
        int m = mat.length, n = mat[0].length;

        if (r * c != m * n)
            return mat;

        int[][] res = new int[r][c];
        int row = 0, col = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                res[row][col] = mat[i][j];
                col++;

                if (col == c) {
                    col = 0;
                    row++;
                }
            }
        }

        return res;
    }

    public static void main(String[] args) {
        int[][] input = { { 1, 2 }, { 3, 4 } };
        int[][] res = matrixReshape(input, 2, 4);

        System.out.println(Arrays.deepToString(res));
    }
}