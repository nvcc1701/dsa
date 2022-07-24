/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai5;

import java.util.Timer;
import java.util.TimerTask;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author nvcc
 */
public class Main {

    public static void main(String[] args) {

        new Thread() {
            long currTime;
            long targetTime = System.currentTimeMillis() + 10000;

            public void run() {
                while (true) {
                    currTime = System.currentTimeMillis();
                    if (currTime >= targetTime) {
                        break;
                    }

                    System.out.println("cuccu");

                    try {
                        sleep(1000);
                    } catch (InterruptedException ex) {
                        Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
                    }
                }
                System.out.println("Cuccu Cucu Cucu");
            }
        }.start();

    }
}
