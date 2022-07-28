/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Timer;
import java.util.TimerTask;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author nvcc
 */
public class Bai6 {

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
                        Logger.getLogger(Bai6.class.getName()).log(Level.SEVERE, null, ex);
                    }
                }
                System.out.println("Cuccu Cucu Cucu");
            }
        }.start();

    }
}
