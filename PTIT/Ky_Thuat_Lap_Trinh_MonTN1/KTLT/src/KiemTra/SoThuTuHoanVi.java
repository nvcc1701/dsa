import java.util.ArrayList;
import java.util.Scanner;

public class SoThuTuHoanVi {
    static int a[];
    static boolean b[];
    static int n;
    static String s;
    static int count;
    static ArrayList<Integer> lst;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        lst = new ArrayList<>();

        while (t-- > 0) {
            n = Integer.parseInt(sc.nextLine());
            s = sc.nextLine();

            a = new int[n + 1];
            b = new boolean[n + 1];
            count = 0;
            backTrack(1);
        }

    }

    public static void backTrack(int i) {
        for (int j = 1; j <= n; j++) {
            if (!b[j]) {
                a[i] = j;
                b[j] = true;

                if (i == n) {
                    count++;
                    String tmp = "";
                    for (int k = 1; k <= n; k++) {
                        tmp += a[k];
                        tmp += " ";
                    }
                    if (tmp.trim().equals(s)) {
                        System.out.println(count);
                    }

                } else {
                    backTrack(i + 1);
                }
                b[j] = false;
            }
        }
    }
}
