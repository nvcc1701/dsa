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
public class TN09_HoanViKeTiep {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        while (n-->0){
            int len=sc.nextInt();
            int[] a=new int[len];
            for(int i=0;i<a.length;i++)
                a[i]=sc.nextInt();


                
            int i;
            for(i=len-1;i>0;i--){
                if(a[i]>a[i-1]){
                    int tmp=a[i];
                    a[i]=a[i-1];
                    a[i-1]=tmp;
                    break;
                }
            }
            if(i==0){
                for(int j=len-1;j>=0;j--)
                    System.out.format("%d ",a[j]);
                System.out.println();
            }else{
                for(int j=0;j<len;j++)
                    System.out.format("%d ",a[j]);
                System.out.println();
            }
        }
    }
}
