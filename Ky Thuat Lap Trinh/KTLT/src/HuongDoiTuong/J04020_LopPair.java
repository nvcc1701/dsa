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

        public boolean isPrime() {
            if (!(n1 instanceof Integer) || !(n2 instanceof Integer)) {
                return false;
            } else {
                int x1 = Integer.parseInt(n1.toString());
                int x2 = Integer.parseInt(n2.toString());

                for (int i = 2; i <= Math.sqrt(x1); i++) {
                    if (x1 % i == 0) {
                        return false;
                    }
                }

                for (int i = 2; i <= Math.sqrt(x2); i++) {
                    if (x2 % i == 0) {
                        return false;
                    }
                }
                return true;
            }
        }

        @Override
        public String toString() {
            return n1 + " " + n2;
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
