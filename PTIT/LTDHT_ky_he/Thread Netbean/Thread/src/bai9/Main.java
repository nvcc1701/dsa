/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai9;

/**
 *
 * @author nvcc
 */
public class Main {

    public static void main(String[] args) {
        Communicate c = new Communicate();
        Input i = new Input(c);
        Output o = new Output(c);

        i.start();
        o.start();
    }
}
