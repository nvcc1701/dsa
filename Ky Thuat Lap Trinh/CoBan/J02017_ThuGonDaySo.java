import java.util.ArrayList;
import java.util.Scanner;

public class J02017_ThuGonDaySo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> a = new ArrayList<>();

        for (int i = 0; i < n; i++)
            a.add(sc.nextInt());

        int i = 0;
        int sum;
        
        while (i < a.size() - 1) {
            sum = a.get(i) + a.get(i + 1);
            if (sum % 2 == 0) {
                a.remove(i);
                a.remove(i);
                i = 0;
            } else {
                i++;
            }
        }

        System.out.println(a.size());
    }
}
