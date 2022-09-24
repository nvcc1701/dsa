/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package CoBan;

import java.util.Scanner;

// kiểm tra mảng đảo ngược
// dùng vòng lặp for duyệt i = 0 đến i < n / 2
// nếu A[i] != A[n - i -1]
// thì mảng đó không phải mảng đối xứng
public class J02004_MangDoiXung {

    static int[] arr;
    static int n;

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            n = in.nextInt();
            arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = in.nextInt();
            }
            // ktra doi xung
            int check = 1;
            for (int i = 0; i <= n / 2; i++) {
                if (arr[i] != arr[n - i - 1]) {
                    check = 0;
                    break;
                }
            }
            if (check == 0) {
                System.out.println("NO");
            } else {
                System.out.println("YES");
            }
        }
    }

}
