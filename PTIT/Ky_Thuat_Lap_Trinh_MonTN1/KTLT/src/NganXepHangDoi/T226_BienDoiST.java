/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package NganXepHangDoi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class T226_BienDoiST {

    public static class Pair {

        private int key;
        private int value;

        public Pair(int key, int value) {
            this.key = key;
            this.value = value;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            Queue<Pair> q = new LinkedList<>();
            HashSet<Integer> s = new HashSet<>();

            q.offer(new Pair(n, 0));
            s.add(n);

            int res = 0;
            while (!q.isEmpty()) {
                Pair peek = q.poll();

                if (peek.key == m) {
                    res = peek.value;
                    break;
                }

                if (peek.key * 2 == m || peek.key - 1 == m) {
                    res = peek.value + 1;
                    break;
                }

                if (!s.contains(peek.key - 1) && peek.key > 1) {
                    q.offer(new Pair(peek.key - 1, peek.value + 1));
                    s.add(peek.key - 1);
                }

                if (!s.contains(peek.key * 2) && peek.key < m) {
                    q.offer(new Pair(peek.key * 2, peek.value + 1));
                    s.add(peek.key * 2);
                }
            }

            System.out.println(res);
        }
    }
}
