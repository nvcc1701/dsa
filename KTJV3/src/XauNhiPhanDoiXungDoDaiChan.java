
import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
/**
 *
 * @author anhnguyen
 */
public class XauNhiPhanDoiXungDoDaiChan {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
//        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            Queue<String> q = new LinkedList<>();
            q.offer("0");
            q.offer("1");

            while (n > 0) {
                String peek = q.poll();

                if (peek.length() > n / 2) {
                    break;
                }

                StringBuilder sb = new StringBuilder(peek);
                System.out.print(peek + sb.reverse() + " ");
                q.offer(peek + "0");
                q.offer(peek + "1");
            }
            System.out.println();
        }
    }
}
