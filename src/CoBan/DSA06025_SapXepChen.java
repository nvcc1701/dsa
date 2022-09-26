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
public class DSA06025_SapXepChen {
//    Cách 1
//    static int n;
//    static int[] arr = new int[105];
//
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        n = sc.nextInt();
//        ArrayList<Integer> list = new ArrayList<>();
//        for (int i = 0; i < n; i++) {
//            arr[i] = sc.nextInt();
//        }
//        for (int i = 0; i < n; i++) {
//            list.add(arr[i]);
//            Collections.sort(list);
//            System.out.print("Buoc " + i + ": ");
//            for (int j = 0; j < list.size(); j++) {
//                System.out.print(list.get(j) + " ");
//            }
//            System.out.println();
//        }
//
//    }

//    Cách 2
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt(),a[] = new int[t];
        for (int i = 0; i < t; i++) {
            a[i]=in.nextInt();
            
        }
        sapxep(a,t);
        
    }
    public static void sapxep(int a[],int n){
        int j,t;
        System.out.println("Buoc 0: "+a[0]);
        for (int i = 1; i < n; i++) {
            t = a[i];j=-1;
            while (j>=0&&a[j]>t) {                
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=t;
            System.out.print("Buoc "+i+": " );
            for ( j = 0; j < i; j++) {
                System.out.print(a[j]+" ");
            }
            System.out.println();
        }
    }
}
