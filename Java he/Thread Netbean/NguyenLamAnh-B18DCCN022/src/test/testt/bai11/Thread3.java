/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai11;

/**
 *
 * @author nvcc
 */
public class Thread3 extends Thread {

    Data d;

    public Thread3(Data d) {
        this.d = d;
    }

    public void run() {
        while (true) {
            try {
                synchronized (d) {
                    while (d.getIndex() != 3 && d.isCheck()) {
                        d.wait();
                    }
                    if (!d.isCheck()) {
                        break;
                    }
                    int num = d.getNum();
                    System.out.println("Binh phuong cua " + num + ": " + (num * num));
                    d.setIndex(1);
                    d.notifyAll();
                }
            } catch (Exception e) {
            }
        }

        System.out.println("T3 STOP");
        synchronized (d) {
            stop();
        }
    }
}
