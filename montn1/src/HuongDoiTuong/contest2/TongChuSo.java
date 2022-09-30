/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HuongDoiTuong.contest2;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;

/**
 *
 * @author anhnguyen
 */
public class TongChuSo {

    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream os = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<String> lst = (ArrayList<String>) os.readObject();

        for (String x : lst) {
            System.out.println(x);
        }
    }
}
