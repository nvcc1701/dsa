/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package test;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author anhnguyen
 */
public class SapXepMaTran {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("MATRIX.in"));
        int t = Integer.parseInt(sc.nextLine());

        int arr[][];
        while (t-- > 0) {
            StringTokenizer st1 = new StringTokenizer(sc.nextLine());
            int n = Integer.parseInt(st1.nextToken());
            int m = Integer.parseInt(st1.nextToken());
            int i = Integer.parseInt(st1.nextToken());
            StringTokenizer st2 = new StringTokenizer(sc.nextLine());
            arr = new int[n + 1][m + 1];

            for (int k = 1; k <= n; k++) {
                for (int j = 1; j <= m; j++) {
                    arr[k][j] = Integer.parseInt(st2.nextToken());
                }
            }

            for (int l = 1; l <= m; l++) {
                System.out.print(arr[i][l] + " ");
            }
        }
    }
}
