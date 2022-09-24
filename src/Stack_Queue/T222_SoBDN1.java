/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Stack_Queue;

import java.util.Scanner;

/**
 *
 * @author nhokt
 */
public class T222_SoBDN1 {
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        long[] a=new long[20];
        a[0]=0;
        a[1]=1;
        a[2]=2;
        a[3]=4;
        a[4]=8;
        a[5]=16;
        a[6]=32;
        a[7]=64;
        a[8]=128;
        a[9]=256;
        a[10]=512;
        a[11]=1024;
        a[12]=2048;
        a[13]=4096;
        a[14]=8192;
        a[15]=16384;
        a[16]=32768;
        a[17]=65536;
        a[18]=131072;
        a[19]=131072*2;
        while(t-->0){
            long n=sc.nextLong();
            char[] s=String.valueOf(n).toCharArray();
            int len=s.length;
            for(int k=0;k<len;k++){
                if(s[k]>'1'){
                    for(int q=k;q<len;q++)
                        s[q]='1';
                    break;
                }
            }
            long result=0;
            for(int k=0;k<len;k++){
                if(s[k]=='1'){
                    result+=a[len-k];
                }
            }
            System.out.println(result);
        }
    }
}
