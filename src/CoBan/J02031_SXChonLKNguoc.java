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
public class J02031_SXChonLKNguoc {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), a[] = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        sapxep(a);
    }

    public static void sapxep(int arr[]) {
        int indexMin, i, j;
        ArrayList<String> list = new ArrayList<>();
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

            String tmp = "Buoc " + (i + 1) + ": ";
            for (int k = 0; k < arr.length; k++) {
                tmp = tmp + arr[k] + " ";
            }
            list.add(tmp);
        }
        Collections.reverse(list);
        for (String tmp : list) {
            System.out.println(tmp);
        }
    }

}
