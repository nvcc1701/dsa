package bai4;


import java.util.Scanner;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
/**
 *
 * @author nvcc
 */
public class Main {

    public static void main(String[] args) {
        ChuChay c = new ChuChay();

        Thread t = new Thread(c);
        t.start();

        Scanner sc = new Scanner(System.in);
        String in = null;

        while (sc.hasNext() && !(in = sc.next()).equalsIgnoreCase("exit")) {
            if (in.equalsIgnoreCase("c")) {
                t.suspend();
            } else {
                t.resume();
            }
        }

        t.stop();
        sc.close();
    }
}
