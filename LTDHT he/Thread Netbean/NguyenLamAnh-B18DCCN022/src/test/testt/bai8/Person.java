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
public class Person extends Thread {

    private Comunicate c;

    public Person() {
    }

    public Person(Comunicate c) {
        this.c = c;
    }

    @Override
    public void run() {
        while (true) {
            try {
                synchronized (c) {
                    c.wait();
                    if (c.isBark()) {
                        System.out.println("Person: Wow big Dog, run, run run....");
                        for (int i = 1; i <= 5; i++) {
                            System.out.println("Person: run " + i * 10);
                            c.setStop(true);
                            c.notify();
                        }
                        break;
                    }
                }
                System.out.println("listening");
                System.out.println(c.isBark());

            } catch (InterruptedException ex) {
                Logger.getLogger(Person.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}
