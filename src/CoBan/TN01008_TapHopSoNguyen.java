/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package CoBan;

import java.util.Scanner;

/**
 *
 * @author nhokt
 */
public class TN01008_TapHopSoNguyen {

    public static void main(String[] args) {
        int a[] = new int[1001];//nhập tập a từ 1-> 1000
        int b[] = new int[1001];//nhập tập b từ 1-> 1000
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();//nhập tập A có n phần tử thuộc a và khác nhau
        int m = in.nextInt();//nhập tập B có m phần tử thuộc b và khác nhau
        for (int i = 0; i < n; i++) {
            a[in.nextInt()] = 1;//nhập lần lượt các phần tử trong A thuộc a
        }
        for (int i = 0; i < m; i++) {
            b[in.nextInt()] = 1;//nhập lần lượt các phần tử trong B thuộc b
        }
        //tìm tập giao
        // cho chạy tất cả p tử của a trong đó có các p tử A nếu p/tử a[i]
        // thuộc a[n] bằng 1 và = b[i] thì in ra i[]
        for (int i = 0; i < 1001; i++) {
            if (a[i] == 1 && b[i] == 1) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
        //tìm tập a-b
        for (int i = 0; i < 1001; i++) {
            if (a[i]==1&&b[i]==0) {
                System.out.print(i+" ");
            }
        }
        System.out.println();
        //tìm tập b-a
        for (int i = 0; i < 1001; i++) {
            if (a[i]==0&&b[i]==1) {
                System.out.print(i+" ");
            }
        }
    }
}
