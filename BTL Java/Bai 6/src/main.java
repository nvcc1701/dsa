import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        StackOfIntegers stack = new StackOfIntegers();

        while(n>0) {
            int rem = n%2;
            n/=2;
            stack.push(rem);
        }

        System.out.print("He co so 2: ");
        while(stack.getSize() >= 0) {
            System.out.print(stack.peak());
            stack.pop();
        }
    }
}
