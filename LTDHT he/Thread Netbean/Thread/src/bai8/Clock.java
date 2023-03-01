/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai8;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author nvcc
 */
public class Clock extends Thread {

    private Comunicate c;

    public Clock() {
    }

    public Clock(Comunicate c) {
        this.c = c;
    }

    @Override
    public void run() {
        SimpleDateFormat f = new SimpleDateFormat("hh:mm:ss");

        while (true) {
            if (c.isStop()) {
                break;
            }

            System.out.println("Clock: " + f.format(new Date()));

            try {
                sleep(1000);
            } catch (InterruptedException ex) {
                Logger.getLogger(Clock.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}
