import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

public class bai2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("nhap vao 1 so");
        int n = sc.nextInt();

        new Thread() {
            public void run() {
                SimpleDateFormat f = new SimpleDateFormat("HH:MM:SS");
                for (int i = 0; i < n; i++) {
                    System.out.println(f.format(new Date()));

                    try {
                        sleep(1000);
                    } catch (Exception e) {
                        // TODO: handle exception
                    }
                }
            }
        }.start();

        new Thread() {
            public void run() {
                for (int i = 0; i < n; i++) {
                    System.out.println(i);
                    
                    try {
                        sleep(1000);
                    } catch (Exception e) {
                        // TODO: handle exception
                    }
                }
            }
        }.start();
    }
}
