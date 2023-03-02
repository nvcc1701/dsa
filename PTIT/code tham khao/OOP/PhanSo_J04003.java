/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OOP;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class PhanSo_J04003 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        PhanSo phanSo= new PhanSo(in.nextLong(), in.nextLong());
        phanSo.toiGian();
        phanSo.display();
    }
    private static class PhanSo{
        public long tuSo;
        public long mauSo;

        public PhanSo(long tuSo, long mauSo) {
            this.tuSo = tuSo;
            this.mauSo = mauSo;
        }
        
        public void toiGian(){
            long ucln=gcd(this.tuSo,this.mauSo);
            this.tuSo/=ucln;
            this.mauSo/=ucln;
        }

        private long gcd(long tuSo, long mauSo) {
            if (mauSo==0) {
                return tuSo;
            }
            return gcd(mauSo,tuSo%mauSo);
        }
        
        public void display(){
            System.out.format("%d/%d", this.tuSo,this.mauSo);
        }
    }
}
