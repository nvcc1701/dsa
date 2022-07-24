/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai10;

/**
 *
 * @author nvcc
 */
public class BinhPhuong extends Thread {

    private Comunicate c;

    public BinhPhuong(Comunicate c) {
        this.c = c;
    }

    public void run() {
        while (true) {
            try {
                synchronized (c) {
                    if (c.getShutdowm()) {
                        break;
                    }

                    while (c.getIndex() != 2 && !c.getShutdowm()) {
                        c.wait();
                    }

                    if (c.getSub3() != 0) {
                        int pow = c.getSub3() * c.getSub3();
                        System.out.println("Binh phuong: " + pow);
                    }
                    c.setIndex(1);
                    c.notifyAll();
                }
            } catch (Exception e) {
            }
        }
        System.out.println("T2 STOP");
        synchronized (c) {
            stop();
        }
    }
}
