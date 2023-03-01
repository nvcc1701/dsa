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
public class DSA06024_SapXepChon {
     public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a[] = new int[n];
         for (int i = 0; i < n; i++) {
             a[i] = in.nextInt();
         }
         selectionSort(a);
     }
     
     public static void selectionSort(int arr[]) {
        int indexMin, i, j;
 
        // lap qua ta ca cac so
        for (i = 0; i < arr.length - 1; i++) {
            // thiet lap phan tu hien tai la min
            indexMin = i;
 
            // kiem tra phan tu hien tai co phai la nho nhat khong
            for (j = i + 1; j < arr.length; j++) {
                if (arr[j] < arr[indexMin]) {
                    indexMin = j;
                }
            }
 
            if (indexMin != i) {
//                System.out.println(" ==> Trao doi phan tu: [" + arr[i] 
//                        + ", " + arr[indexMin] + "]");
                // Trao doi cac so
                int temp = arr[indexMin];
                arr[indexMin] = arr[i];
                arr[i] = temp;
            }
 
            System.out.print("Buoc "+(i + 1)+": ");
            display(arr);
        }
    }
 
    public static void display(int arr[]) {
        int i;
        //System.out.print("[");
 
        // Duyet qua tat ca phan tu
        for (i = 0; i < arr.length; i++) {
            System.out.print( arr[i] + " ");
        }
        System.out.println();
        //System.out.print("]\n");
    }
}
