
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
/**
 *
 * @author nvcc
 */
public class Bai7 {

    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        String time = sc.nextLine();

        SimpleDateFormat f = new SimpleDateFormat("hh:mm:ss");
        long targetTime = f.parse(time).getHours() * 60 * 60 + f.parse(time).getMinutes() * 60 * 60 + f.parse(time).getSeconds();
//        System.out.println(f.parse(time).getHours() + " " + f.parse(time).getMinutes() + " " + f.parse(time).getSeconds());

        new Thread() {
            public void run() {
                while (true) {
                    Date d = new Date();
                    long currTime = d.getHours() * 60 * 60 + d.getMinutes() * 60 * 60 + d.getSeconds();
//                    System.out.println(d.getHours() + " " + d.getMinutes() + " " + d.getSeconds());
//                    System.out.println(currTime + " " + targetTime);
                    if (currTime >= targetTime) {
                        System.out.println("****** RENG RENG RENG *******");
                        break;
                    }
                }
            }
        }.start();
    }

}
