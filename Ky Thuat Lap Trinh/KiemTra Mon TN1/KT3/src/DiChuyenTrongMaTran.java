
import java.io.File;
import java.io.FileNotFoundException;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
/**
 *
 * @author anhnguyen
 */
public class DiChuyenTrongMaTran {

    public static class Pair {

        public int num1;
        public int num2;

        public Pair(int num1, int num2) {
            this.num1 = num1;
            this.num2 = num2;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("DATA.in"));
        int n = sc.nextInt();
        int m = sc.nextInt();

        int a[][] = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                a[i][j] = sc.nextInt();
            }
        }

        int step = 0;
        boolean check[][] = new boolean[n][m];
        Queue<Pair> q = new LinkedList<>();
        q.offer(new Pair(0, 0));

        while (!q.isEmpty()) {
            int s = q.size();

            while (s-- > 0) {
                Pair p = q.peek();
                q.poll();

                if (check[p.num1][p.num2]) {
                    continue;
                }

                if (p.num1 == n - 1 && (p.num2 == m - 1)) {
                    System.out.println(step);
                    break;
                }

                check[p.num1][p.num2] = true;
                if (p.num1 + a[p.num1][p.num2] < n) {
                    q.offer(new Pair(p.num1 + a[p.num1][p.num2], p.num2));
                }

                if (p.num2 + a[p.num1][p.num2] < m) {
                    q.offer(new Pair(p.num1, p.num2 + a[p.num1][p.num2]));
                }
            }
            
            step++;
        }
    }
}
