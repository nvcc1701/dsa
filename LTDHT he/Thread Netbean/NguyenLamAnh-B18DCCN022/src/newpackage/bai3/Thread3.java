/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newpackage.bai3;

import java.io.BufferedReader;
import java.io.FileReader;
import static java.lang.Thread.sleep;

/**
 *
 * @author nvcc
 */
public class Thread3 extends Thread {

    private Communicate c;

    public Thread3(Communicate c) {
        this.c = c;
    }

    @Override
    public void run() {
        try {
            while (true) {
                synchronized (c) {
                    if (c.getIndex() != 3 && !c.isCloseAll()) {
                        c.wait();
                    }

                    if (c.isCloseAll()) {
                        break;
                    }

                    String[] s = c.getPheptinh();
                    System.out.println(s[0] + "/" + s[1] + s[s.length - 1] + s[2] + "/" + s[3] + "=?");
                    c.setIndex(2);
                    c.notifyAll();
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
