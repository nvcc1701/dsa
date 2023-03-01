import java.util.Scanner;

public class mian {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s;
//        s = sc.nextLine();
        s = "((3+7)×(9-(6-2)))";
        StackOfChars sh = new StackOfChars();
        StackOfChars st = new StackOfChars();

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) >= '0' && s.charAt(i) <= '9') sh.push(s.charAt(i));
            else if (s.charAt(i) == '(') st.push(s.charAt(i));

        }
    }

    static int uutien(char x) {
        if(x == '*' || x == '/') return 2;
        else if(x == '+' || x == '-') return 1;
        else if(x == '(') return 0;
        return -1;
    }

    static int check(char x) {
        if(x == '*' || x == '/' || x == '+' || x == '-') return 2;
        else return 1;
    }

    String caculate( )

}
