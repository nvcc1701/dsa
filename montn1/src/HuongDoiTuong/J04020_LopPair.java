/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong;

import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class J04020_LopPair {

    public static class Pair<T0, T1> {

        private T0 n1;
        private T1 n2;

        public Pair(T0 n1, T1 n2) {
            this.n1 = n1;
            this.n2 = n2;
        }

        public static boolean isPrime() {
            return false;
        }

        public T0 getN1() {
            return n1;
        }

        public void setN1(T0 n1) {
            this.n1 = n1;
        }

        public T1 getN2() {
            return n2;
        }

        public void setN2(T1 n2) {
            this.n2 = n2;
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            boolean check = false;
            for (int i = 2; i <= 2 * Math.sqrt(n); i++) {
                Pair<Integer, Integer> p = new Pair<>(i, n - i);
                if (p.isPrime()) {
                    System.out.println(p);
                    check = true;
                    break;
                }
            }
            if (!check) {
                System.out.println(-1);
            }
        }
    }
}
