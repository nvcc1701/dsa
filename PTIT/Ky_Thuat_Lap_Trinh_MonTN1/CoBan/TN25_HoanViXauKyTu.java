import java.util.Scanner;

public class TN25_HoanViXauKyTu {
    static String s1;
    static String s;
    static int a[];
    static boolean b[];
    static int n;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            s = sc.nextLine();
            n = s.length();
            a = new int[n + 1];
            b = new boolean[n + 1];

            backTrack(1);
            System.out.println();
        }
    }

    public static void backTrack(int i) {
        for (int j = 1; j <= n; j++) {
            if (!b[j]) {
                a[i] = j;
                b[j] = true;
                if (i == n) {
                    print();
                } else {
                    backTrack(i + 1);
                }
                b[j] = false;
            }
        }
    }

    public static void print() {
        for (int i = 1; i <= n; i++) {
            System.out.print(s.charAt(a[i] - 1));
        }
        System.out.print(" ");
    }
}
