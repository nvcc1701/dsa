/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Stack_Queue;

import java.util.*;

/**
 *  input 2
 *  [()]{}{[()()]()}
[(])



 * 
 * 
 * @author nhokt
 */
public class T210_KTDayNgoacDung {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = Integer.parseInt(in.nextLine());
        while (t-- > 0) {
            String s = in.nextLine();
            if (check(s)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }

        }
    }

    public static boolean check(String s) {
        Stack<Character> st = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(' || s.charAt(i) == '[' || s.charAt(i) == '{') {
                st.push(s.charAt(i));
            } else {
                if (st.empty()) {
                    return false;
                }
                char in = st.peek(), out = s.charAt(i);
                if (in == '(' && out == ')') {
                    st.pop();
                } else if (in == '[' && out == ']') {
                    st.pop();
                } else if (in == '{' && out == '}') {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return true;
    }
}
