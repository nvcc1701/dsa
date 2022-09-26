import java.util.ArrayList;
import java.util.Scanner;
import java.util.Vector;

public class TN10_HoanViNguoc {
    static int n;
    static int a[];
    static boolean b[];
    static ArrayList<ArrayList<Integer>> res;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            n = sc.nextInt();
            a = new int[n + 1];
            b = new boolean[n + 1];
            res = new ArrayList<>();

            backTrack(1);
            print();
            System.out.println();
        }
    }

    static void backTrack(int i) {
        for (int j = n; j >= 1; j--) {
            if (!b[j]) {
                a[i] = j;
                b[j] = true;
                if (i == n) {
                    ArrayList<Integer> lst = new ArrayList<>();
                    for (int k = 1; k <= n; k++) {
                        lst.add(a[k]);
                    }
                    res.add(lst);
                } else
                    backTrack(i + 1);
                b[j] = false;
            }
        }
    }

    static void print() {
        for (int i = res.size() - 1; i >= 0; i--) {
            for (int j = 0; j < res.get(i).size(); j++) {
                System.out.print(res.get(i).get(j));
            }
            System.out.print(" ");
        }
    }
}

// 321 312 231 213 132 123
// 123 132 213 312 231 321
