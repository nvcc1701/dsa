import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class DungDau {

    static int m;
    static int a[] = new int[15];
    static boolean b[] = new boolean[15];
    static ArrayList<String> s;
    static String s1;
    static int index;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        m = sc.nextInt();
        sc.nextLine();

        s = new ArrayList<>();
        for (int i = 0; i < m; i++)
            s.add(sc.next());
        sc.nextLine();

        s1 = sc.nextLine();
        Collections.sort(s);
        s.remove(s1);

        quaylui(1);
        System.out.println();
    }

    public static void quaylui(int i) {
        for (int j = 1; j < m; j++) {

            if (!b[j]) {
                a[i] = j;
                b[j] = true;
                if (i == m - 1) {
                    in();
                } else
                    quaylui(i + 1);
                b[j] = false;
            }
        }
    }

    public static void in() {
        System.out.print(s1 + " ");
        for (int i = 1; i < m; i++) {
            System.out.print(s.get(a[i] - 1) + " ");
        }
        System.out.println();
    }
}
