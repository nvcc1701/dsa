import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.TreeSet;

public class LietKeCacPhanTuKhacNhau {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        TreeSet<String> tree1 = new TreeSet<>();
        TreeSet<String> tree2 = new TreeSet<>();

        int n1, n2;
        n1 = Integer.parseInt(sc.nextLine());
        for (int i = 0; i < n1; i++) {
            StringTokenizer st = new StringTokenizer(sc.nextLine().toLowerCase());
            while (st.hasMoreTokens()) {
                tree1.add(st.nextToken());
            }
        }

        n2 = Integer.parseInt(sc.nextLine());
        for (int i = 0; i < n2; i++) {
            StringTokenizer st2 = new StringTokenizer(sc.nextLine().toLowerCase());
            while (st2.hasMoreTokens()) {
                tree2.add(st2.nextToken());
            }
        }

        TreeSet<String> tmp = new TreeSet<>();
        tmp = (TreeSet) tree1.clone();

        tmp.removeAll(tree2);
        for (String x : tmp) {
            System.out.print(x + " ");
        }

        System.out.println();

        tree2.removeAll(tree1);
        for (String x : tree2) {
            System.out.print(x + " ");
        }
    }
}
