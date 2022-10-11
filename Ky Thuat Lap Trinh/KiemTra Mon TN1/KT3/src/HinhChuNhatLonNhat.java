
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.Stack;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
/**
 *
 * @author anhnguyen
 */
public class HinhChuNhatLonNhat {

    public static class HCN {

        public int dai;
        public int rong;
        public int S;
        public int hieu;

        public HCN(int dai, int rong) {
            this.dai = dai;
            this.rong = rong;
            this.S = dai * rong;
            this.hieu = Math.abs(dai - rong);
        }

        @Override
        public String toString() {
            if (this.dai <= this.rong) {
                return this.dai + " " + this.rong;
            } else {
                return this.rong + " " + this.dai;
            }
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
//        Scanner sc = new Scanner(new File("DATA.in"));
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int a[][] = new int[n][m];
            int b[] = new int[m];

            Stack<Integer> stk = new Stack<>();

            int count = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    a[i][j] = sc.nextInt();
                    b[j] += a[i][j];
                }
            }

            int k = 0;
            HCN max = new HCN(0, 0);

            while (k < m) {
                if (stk.isEmpty() || b[stk.peek()] <= b[k]) {
                    stk.push(k++);
                } else {
                    int peek = stk.pop();
                    if (stk.isEmpty()) {
                        HCN h = new HCN(b[peek], k);
                        if (max.S < h.S) {
                            max.S = h.S;
                            max.dai = h.dai;
                            max.rong = h.rong;
                            max.hieu = h.hieu;
                        } else if (max.S == h.S && max.hieu > h.hieu) {
                            max.S = h.S;
                            max.dai = h.dai;
                            max.rong = h.rong;
                            max.hieu = h.hieu;
                        }
                    } else {
                        HCN h = new HCN(b[peek], k - stk.peek() - 1);
                        if (max.S < h.S) {
                            max.S = h.S;
                            max.dai = h.dai;
                            max.rong = h.rong;
                            max.hieu = h.hieu;
                        } else if (max.S == h.S && max.hieu > h.hieu) {
                            max.S = h.S;
                            max.dai = h.dai;
                            max.rong = h.rong;
                            max.hieu = h.hieu;
                        }
                    }
                }
            }

            while (!stk.isEmpty()) {
                int peek = stk.pop();
                if (stk.isEmpty()) {
                    HCN h = new HCN(b[peek], k);
                    if (max.S < h.S) {
                        max.S = h.S;
                        max.dai = h.dai;
                        max.rong = h.rong;
                        max.hieu = h.hieu;
                    } else if (max.S == h.S && max.hieu > h.hieu) {
                        max.S = h.S;
                        max.dai = h.dai;
                        max.rong = h.rong;
                        max.hieu = h.hieu;
                    }
                } else {
                    HCN h = new HCN(b[peek], k - stk.peek() - 1);
                    if (max.S < h.S) {
                        max.S = h.S;
                        max.dai = h.dai;
                        max.rong = h.rong;
                        max.hieu = h.hieu;
                    } else if (max.S == h.S && max.hieu > h.hieu) {
                        max.S = h.S;
                        max.dai = h.dai;
                        max.rong = h.rong;
                        max.hieu = h.hieu;
                    }
                }
            }

//            HCN max = Collections.max(lst, new Comparator<HCN>() {
//                @Override
//                public int compare(HCN o1, HCN o2) {
//                    if (o1.S == o2.S) {
//                        return Integer.compare(o2.hieu, o1.hieu);
//                    }
//                    return Integer.compare(o1.S, o2.S);
//                }
//            });
            System.out.println(max.toString());
        }
    }
}
