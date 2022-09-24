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
public class TN12_ToHopTiepTheo {
    static int c[], a[],n,k,count;
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        while(t-->0){
            n= in.nextInt();k=in.nextInt();
            a=new int[k];
            c=new int[20];
            for(int i=0;i<k;i++) a[i]=in.nextInt();
            count=0;
            quaylui(1);
            System.out.println(count);
        }
    }
    public static void quaylui(int i) {
        for (int j = c[i-1]+1; j < n+k-i; j++) {
            c[i]=j;
            if (i==k) {
                xuly();
            }else quaylui(i+1);
        }
    }

    private static void xuly() {
       boolean check=true;
        for(int i=1;i<=k;i++)
            if(c[i]==a[i-1]){
                continue;
            }
            else if(c[i]<a[i-1]){
                check=false;
                break;
            }
            else break;
        if(check==true) count++;
    }
}
