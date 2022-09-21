import java.util.Scanner;

public class _J01016_CHU_SO4_VA7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.nextLine();

        int sum = 0;
        for (int i = 0; i < n.length(); i++) {
            int x = n.charAt(i) - '0';
            if (x == 4 || x == 7) {
                sum += 1;
            }
        }

        if(sum == 4 || sum == 7) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
