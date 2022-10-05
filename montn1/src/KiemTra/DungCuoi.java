import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Scanner;

public class DungCuoi {
    static int n;
    static int a[];
    static boolean b[];
    static ArrayList<String> s;
    static String s1;
    static int index;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        sc.nextLine();

        s = new ArrayList<>();
        a = new int[n + 1];
        b = new boolean[n + 1];

        for (int i = 0; i < n; i++)
            s.add(sc.next());
        sc.nextLine();

        s1 = sc.nextLine();
        s.remove(s1);
        Collections.sort(s);

        backTrack(1);
        System.out.println();
    }

    public static void backTrack(int i) {
        for (int j = 1; j < n; j++) {
            if (!b[j]) {
                a[i] = j;
                b[j] = true;

                if (i == n - 1) {
                    print();
                } else {
                    backTrack(i + 1);
                }
                b[j] = false;
            }
        }
    }

    public static void print() {
        for (int i = 1; i < n; i++) {
            System.out.print(s.get(a[i] - 1) + " ");
        }
        System.out.print(s1 + " ");
        System.out.println();
    }
}
