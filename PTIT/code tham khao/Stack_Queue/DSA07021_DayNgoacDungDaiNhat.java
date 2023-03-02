/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Stack_Queue;

import java.util.*;

/**
 *
 * @author nhokt
 */
public class DSA07021_DayNgoacDungDaiNhat {
//      public static void main(String[] args) {
//        Scanner sc=new Scanner(System.in);
//        int t=Integer.parseInt(sc.nextLine());
//        while(t-->0){
//            String s=sc.nextLine();
//            System.out.println(tinh(s));
//        }
//    }
//
//    private static int tinh(String s) {
//        Stack<Integer> stack=new Stack<>();
//        stack.push(-1);
//        int kq=0;
//        for(int i=0;i<s.length();i++){
//            char c = s.charAt(i);
//            if(c=='(') stack.push(i);
//            else{
//                stack.pop();
//                if(!stack.empty()){
//                    kq=Math.max(kq,i- stack.peek());
//                }
//                else stack.push(i);
//            }
//        }
//        return kq;
//    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int kq = 0;
        boolean check = false;
        String s = sc.nextLine();
        Stack<Integer> stack = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '[' || s.charAt(i) == '(') {
                stack.push(i);
            } else if (s.charAt(i) == ')') {
                if (s.charAt(stack.peek()) == '(') {
                    stack.pop();
                } else {
                    System.out.println(kq);
                    check = true;
                    break;
                }
            } else {
                if (s.charAt(stack.peek()) == '[') {
                    kq++;
                } else {
                    System.out.println(kq);
                    check = true;
                    break;
                }
            }
        }
        if (!check) {
            System.out.println(kq);
        }
    }
}
/*
((()
)()())
()(()))))
*/
