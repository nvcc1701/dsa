import java.util.Scanner;

import javax.swing.text.StyledEditorKit.ForegroundAction;

public class bai3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        // new Thread() {
        // public void run() {
        // for (int i = n; i >= 1; i--) {
        // System.out.println("thread1: " + i);

        // try {
        // sleep(1000);
        // } catch (Exception e) {
        // // TODO: handle exception
        // }
        // }
        // }
        // }.start();

        new Thread() {
            public void run() {
                for (int i = n; i >= 1; i--) {
                    int flag = 0;

                    if (i == 3) {
                        System.out.println("thread2: " + 3);
                    } else {
                        for (int j = 2; j < i; j++) {
                            if (i % j == 0) {
                                break;
                            }
                        }
                        flag = 1;
                        if (i % 10 == 3 && flag == 1) {
                            System.out.println("thread2: " + i);
                        }
                    }

                    // try {
                    // sleep(1000);
                    // } catch (Exception e) {
                    // // TODO: handle exception
                    // }
                }
            }
        }.start();
    }
}
