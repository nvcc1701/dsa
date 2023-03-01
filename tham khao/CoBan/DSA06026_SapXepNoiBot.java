/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package CoBan;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class DSA06026_SapXepNoiBot {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a[] = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        bubbleSort(a);
    }

    public static void bubbleSort(int arr[]) {
        int temp;
        int i, j;
 
        boolean swapped = false;
        // lap qua tat ca cac so
        for (i = 0; i < arr.length - 1; i++) {
            swapped = false;
            // vong lap thu hai
            for (j = 0; j < arr.length - 1 - i; j++) {
                // kiem xa xem so ke tiep co nho hon so hien tai hay khong
                // trao doi cac so.
                // (Muc dich: lam noi bot (bubble) so lon nhat)
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }
 
            // neu khong can trao doi nua, tuc la
            // mang da duoc sap xep va thoat khoi vong lap.
            if (!swapped) {
                break;
            }
 
            System.out.print("Buoc " + (i + 1)+": ");
            display(arr);
            System.out.println();
        }
    }
 
    public static void display(int arr[]) {
        int i; 
        // Duyet qua tat ca phan tu
        for (i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
     }
}
