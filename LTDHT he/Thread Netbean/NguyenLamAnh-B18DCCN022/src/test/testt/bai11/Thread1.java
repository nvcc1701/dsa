/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai11;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

/**
 *
 * @author nvcc
 */
public class Thread1 extends Thread {

    Data d;

    public Thread1(Data d) {
        this.d = d;
    }

    @Override
    public void run() {
        BufferedReader br = null;
        try {
            br = new BufferedReader(new FileReader("src/bai11/number.txt"));
            synchronized (d) {
                String line = null;
                while ((line = br.readLine()) != null) {
                    int num = Integer.parseInt(line.trim());
                    System.out.println(num);

                    d.setNum(num);

                    if (num % 2 == 0) {
                        d.setIndex(2);
                    } else {
                        d.setIndex(3);
                    }
                    d.notifyAll();
                    d.wait();
                }
                d.setCheck(false);
                br.close();
            }
        } catch (IOException e) {
            e.printStackTrace();
        } catch (Exception ex) {
            System.out.println(ex);
        }

        System.out.println("T1 STOP");
        synchronized (d) {
            d.notifyAll();
            stop();
        }
    }
}
