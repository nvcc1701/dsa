/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newpackage.bai1;

/**
 *
 * @author nvcc
 */
public class Main {

    public static void main(String[] args) {
        Data d = new Data();
        GiaoBai g = new GiaoBai();
        LamBai l = new LamBai(d);
        ChamBai c = new ChamBai(d);
        g.start();
        l.start();
        c.start();
    }
}
