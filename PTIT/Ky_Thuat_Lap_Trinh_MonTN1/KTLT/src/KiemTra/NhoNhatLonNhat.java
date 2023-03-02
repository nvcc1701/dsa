import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Scanner;
import java.util.TreeSet;

public class NhoNhatLonNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        TreeSet<BigInteger> lst;

        while (true) {
            int n = Integer.parseInt(sc.nextLine());
            if (n == 0)
                break;
            lst = new TreeSet<>();

            for (int i = 0; i < n; i++) {
                lst.add(new BigInteger(sc.nextLine()));
            }

            if (lst.size() == 1) {
                System.out.println("BANG NHAU");
            } else {
                System.out.println(lst.first() + " " + lst.last());
            }
        }
    }
}