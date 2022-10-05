/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.Scanner;

/**
 *
 * @author tungn
 */
public class Test {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            boolean check = false;
            for(int i = 2; i <= 2*Math.sqrt(n); i++){
                Pair<Integer, Integer> p = new Pair<>(i, n-i);
                if(p.isPrime()){
                    System.out.println(p);
                    check = true;
                    break; 
                }
            }
            if(!check) System.out.println(-1);
        }
    }

    public static void main1011863(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            boolean check = false;
            for (int i = 2; i <= 2 * Math.sqrt(n); i++) {
                Pair<Integer, Integer> p = new Pair<>(i, n - i);
                if (p.isPrime()) {
                    System.out.println(p);
                    check = true;
                    break;
                }
            }
            if (!check) {
                System.out.println(-1);
            }
        }
    }
}

class Pair<A, B> {
    private A a;
    private B b;

    public Pair(A a, B b) {
        this.a = a;
        this.b = b;
    }
    
    public boolean isPrime() {
        return checkA() && checkB();
    }
    
    private boolean checkA() {
        if (!(a instanceof Integer)) return false;
        int x = Integer.parseInt(a.toString());
        if(x <= 1)
        {
            return false;
        }
       for(int i=2;i<=x/2;i++)
       {
           if((x%i)==0)
               return  false;
       }
       return true;
    }
    
    private boolean checkB() {
        if (!(b instanceof Integer)) return false;
        int x = Integer.parseInt(b.toString());
        if(x <= 1)
        {
            return false;
        }
       for(int i=2;i<=x/2;i++)
       {
           if((x%i)==0)
               return  false;
       }
       return true;
    }

    @Override
    public String toString() {
        return  a + " " + b;
    }
}