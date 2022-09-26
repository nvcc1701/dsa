import java.util.Scanner;
import java.util.TreeSet;

public class TapHopSoNguyen {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.next());
        int m = Integer.parseInt(sc.next());
        TreeSet<Integer> treeM = new TreeSet<>();
        TreeSet<Integer> treeN = new TreeSet<>();

        for (int i = 0; i < n; i++) {
            treeN.add(Integer.parseInt(sc.next()));
        }

        for (int i = 0; i < m; i++) {
            treeM.add(Integer.parseInt(sc.next()));
        }

        TreeSet<Integer> tmp = new TreeSet<>();

        tmp = (TreeSet) treeN.clone();
        tmp.retainAll(treeM);
        for (int x : tmp)
            System.out.print(x + " ");
        System.out.println();

        tmp = (TreeSet) treeN.clone();
        tmp.removeAll(treeM);
        for (int x : tmp)
            System.out.print(x + " ");
        System.out.println();

        treeM.removeAll(treeN);
        for (int x : treeM)
            System.out.print(x + " ");
        System.out.println();
    }
}
