import java.util.NavigableSet;
import java.util.Scanner;
import java.util.TreeSet;

public class TangDanGiamDan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        TreeSet<Integer> chan;
        TreeSet<Integer> le;

        while (t-- > 0) {
            int n = sc.nextInt();

            chan = new TreeSet<>();
            le = new TreeSet<>();

            for (int i = 0; i < n; i++) {
                int a = Integer.parseInt(sc.next());
                if (a % 2 == 0) {
                    chan.add(a);
                } else {
                    le.add(a);
                }
            }

            for (int x : chan) {
                System.out.print(x + " ");
            }
            System.out.println();
            NavigableSet<Integer> newtree = le.descendingSet();

            for (int x : newtree) {
                System.out.print(x + " ");
            }
            System.out.println();
        }
    }
}
