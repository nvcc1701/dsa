import java.util.ArrayList;
import java.util.Scanner;
import java.util.StringTokenizer;

public class TN07_RutGonXauKyTu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Character> a = new ArrayList<>();
        String s = sc.nextLine();

        for (int i = 0; i < s.length(); i++)
            a.add(s.charAt(i));

        int i = 0;
        while (i != (a.size() - 1)) {
            if (a.isEmpty())
                break;

            if (a.get(i).compareTo(a.get(i + 1)) == 0) {
                a.remove(i);
                a.remove(i);
                i = 0;
            } else {
                i++;
            }
        }

        if (a.size() != 0) {
            for (Character x : a) {
                System.out.print(x);
            }
        } else {
            System.out.print("Empty String");
        }
    }
}
