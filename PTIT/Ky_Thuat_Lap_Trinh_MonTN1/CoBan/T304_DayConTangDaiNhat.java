import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class T304_DayConTangDaiNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int a[] = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        ArrayList<Integer> L = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            L.add(1);
            for (int j = 0; j < i; j++) {
                if (a[i] > a[j]) {
                    L.set(i, Math.max(L.get(i), L.get(j) + 1));
                }
            }
        }

        System.out.println(Collections.max(L));

    }
}
