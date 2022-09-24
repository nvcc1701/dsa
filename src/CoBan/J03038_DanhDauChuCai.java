/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package CoBan;
/**
 *
 * @author nhokt
 */
import java.util.*;
public class J03038_DanhDauChuCai {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        long t= in.next().chars().distinct().count();
        System.out.println(t);
    }
}
