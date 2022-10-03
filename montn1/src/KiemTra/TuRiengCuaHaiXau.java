import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.TreeSet;

public class TuRiengCuaHaiXau {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while (t-- > 0) {
            String s1 = sc.nextLine();
            String s2 = sc.nextLine();
            StringTokenizer st1 = new StringTokenizer(s1);
            StringTokenizer st2 = new StringTokenizer(s2);
            TreeSet<String> tree1 = new TreeSet<>();
            TreeSet<String> tree2 = new TreeSet<>();

            while (st1.hasMoreTokens()) {
                tree1.add(st1.nextToken());
            }

            while (st2.hasMoreTokens()) {
                tree2.add(st2.nextToken());
            }

            tree1.removeAll(tree2);
            for (String x : tree1) {
                System.out.print(x + " ");
            }
            System.out.println();
        }
    }
}
