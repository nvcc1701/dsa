/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai11;

/**
 *
 * @author nvcc
 */
public class Thread2 extends Thread {

    Data d;

    public Thread2(Data d) {
        this.d = d;
    }

    public void run() {
        while (true) {
            try {
                synchronized (d) {
                    while (d.getIndex() != 2 && d.isCheck()) {
                        d.wait();
                    }

                    if (!d.isCheck()) {
                        break;
                    }

                    int num = d.getNum();
                    System.out.print("Uoc so cua " + num + ":");
                    for (int i = 2; i < num; i++) {
                        if (num % i == 0) {
                            System.out.print(i + ",");
                        }
                    }
                    System.out.println();
                    d.setIndex(1);
                    d.notifyAll();

                }
            } catch (Exception e) {
                System.out.println(e);
            }
        }

        System.out.println("T2 STOP");
        synchronized (d) {
            stop();
        }
    }
}
