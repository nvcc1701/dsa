/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai10;

/**
 *
 * @author nvcc
 */
public class Chia4 extends Thread {

    private Comunicate c;

    public Chia4(Comunicate c) {
        this.c = c;
    }

    @Override
    public void run() {
        while (true) {
            try {
                synchronized (c) {

                    if (c.getShutdowm()) {
                        break;
                    }

                    if (c.getIndex() != 3 && !c.getShutdowm()) {
                        c.wait();

                    }

                    if (c.getSub4() != 0) {
                        if (c.getSub4() % 4 == 0) {
                            System.out.println("THread3: " + c.getSub4() + " chia het cho 4");
                        } else {
                            System.out.println("THread3: " + c.getSub4() + " chia het cho 4");
                        }
                    }
                    c.setIndex(1);
                    c.notifyAll();
                }
            } catch (Exception e) {
                System.out.println(e);
            }
        }
        System.out.println("T3 STOP");
        synchronized (c) {
            stop();
        }

    }
}
