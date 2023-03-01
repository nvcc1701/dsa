/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newpackage.bai1;

/**
 *
 * @author nvcc
 */
public class LamBai extends Thread {

    private Data d;

    public LamBai(Data d) {
        this.d = d;
    }

    public void run() {
        try {
            for (int i = 1; i <= 4; i++) {
                System.out.println("Sinh vien Quan lam bai " + i);
                sleep(1000);
            }
            System.out.println("Sinh vien Quan lam bai xong");
            synchronized (d) {
                d.setLambaixong(true);
                d.notifyAll();
            }
            this.notifyAll();
        } catch (Exception e) {
        }
    }
}
