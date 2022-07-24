/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai10;

import bai9.Communicate;
import java.util.Random;

/**
 *
 * @author nvcc
 */
public class Sinh extends Thread {

    private Comunicate c;

    public Sinh(Comunicate c) {
        this.c = c;
    }

    @Override
    public void run() {
        int sum = 0;
        while (true) {
            try {
                synchronized (c) {
                    double r = Math.random();
                    int i = (int) (r * 100 + 1);
                    sum += i;

                    if (sum >= 200) {
                        System.out.println("\033[31m Sinh: sum = " + sum);

                        c.setShutdowm(true);
                        c.notifyAll();
                        break;
                    }

                    System.out.println("\033[31m Sinh: " + i);

                    if (i % 3 == 0) {
                        c.setSub3(i);
                        c.setIndex(2);
                    } else {
                        c.setSub4(i);
                        c.setIndex(3);
                    }
                    c.notifyAll();
                    c.wait();
                }
            } catch (Exception e) {
                System.out.println(e.toString());
            }
        }
        System.out.println("T1 STOP");
        synchronized (c) {
            stop();
        }
    }
}
