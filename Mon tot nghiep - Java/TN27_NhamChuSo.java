import java.util.Scanner;

public class TN27_NhamChuSo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();

        String min_a = a.replace('6', '5');
        String min_b = b.replace('6', '5');
        String max_a = a.replace('5', '6');
        String max_b = b.replace('5', '6');

        int min = Integer.parseInt(min_a) + Integer.parseInt(min_b);
        int max = Integer.parseInt(max_a) + Integer.parseInt(max_b);
        System.out.println(min + " " + max);
    }
}
