import java.util.Scanner;
import java.util.TreeSet;

public class JP007_LocEmailTrungNhau {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        TreeSet<String> set;

        set = new TreeSet<>();

        while (sc.hasNextLine()) {
            set.add(sc.nextLine().toLowerCase());
        }

        for (String s : set) {
            System.out.println(s);
        }
    }
}
