import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        StackOfIntegers stack = new StackOfIntegers();

        while(n%2 == 0) {
            stack.push(2);
            n /= 2;
        }

        for(int i = 3; i*i <= n; i += 2) {
            while(n%i == 0) {
                stack.push(i);
                n /= i;
            }
        }

        if(n > 2) stack.push(n);

        while(!stack.isEmpty() && stack.getSize() >= 0) {
            System.out.print(stack.peak() + " ");
            stack.pop();
        }

    }
}
