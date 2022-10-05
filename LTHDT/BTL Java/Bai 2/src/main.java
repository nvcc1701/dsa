import object.Manager;

import java.util.Scanner;
public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap n: ");
        int n = Integer.parseInt(sc.nextLine());

        Manager m = new Manager();
        for (int i = 1; i <= n; i++) {
            System.out.println("Nhap sinh vien thu " + i);
            m.add();
        }

        m.show();
        m.sortByName();
        m.sortByClass();
        m.show();
    }
}
