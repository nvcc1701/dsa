/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newpackage.bai3;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.PrintWriter;
import java.util.Scanner;

/**
 *
 * @author nvcc
 */
public class Thread2 extends Thread {

    private Communicate c;

    public Thread2(Communicate c) {
        this.c = c;
    }

    @Override
    public void run() {
        try {
            BufferedReader br = new BufferedReader(new FileReader("src/newpackage/bai3/cauhoi.txt"));
            String line = null;

            while (true) {
                synchronized (c) {
                    if (c.isCloseAll()) {
                        break;
                    }

                    while ((line = br.readLine()) != null) {
                        String[] s = line.split("\\s+");

                        c.setPheptinh(s);
                        c.setIndex(3);
                        c.notifyAll();
                    }
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
