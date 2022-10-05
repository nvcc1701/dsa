/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai8;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author nvcc
 */
public class Dog extends Thread {

    int count;
    private Comunicate c;

    public Dog() {
    }

    public Dog(Comunicate c) {
        count = 0;
        this.c = c;
    }

    @Override
    public void run() {
        while (true) {
            if (count == 5) {
                System.out.println("Dog: Go, go, go,....");

                synchronized (c) {
                    c.setBark(true);
                    c.notify();
                }
                break;
            }

            System.out.println("Dog: Watching, watchin...");

            try {
                count++;
                sleep(1000);
            } catch (InterruptedException ex) {
                Logger.getLogger(Dog.class.getName()).log(Level.SEVERE, null, ex);
            }
        }

    }
}
