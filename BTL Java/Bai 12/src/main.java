import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        boolean check = true;
        int cols, rows;
        do {
            System.out.println("Nhap 1-4: ");
            System.out.println("1. Tinh tong va hieu ma tran");
            System.out.println("2. Tinh tich hai ma tran");
            System.out.println("3. Tim chuyen vi cua mot ma tran");
            System.out.println("4. Ket thuc chuong trinh");

            int select = sc.nextInt();
            if(select == 1) {
                System.out.println("nhap hang cot cua ma tran 1: ");
                cols = sc.nextInt(); rows = sc.nextInt();
                Matrix mt1 = new Matrix(rows, cols);
                System.out.println("Nhap cac gia tri: ");
                mt1.input();

                System.out.println("nhap hang cot cua ma tran 2: ");
                cols = sc.nextInt(); rows = sc.nextInt();
                Matrix mt2 = new Matrix(rows, cols);
                System.out.println("Nhap cac gia tri: ");
                mt2.input();

                System.out.println("Tong: ");
                mt1.add(mt2).print();

                System.out.println("Hieu: ");
                mt1.sub(mt2).print();
            } else if(select == 2) {
                System.out.println("nhap hang cot cua ma tran 1: ");
                cols = sc.nextInt(); rows = sc.nextInt();
                Matrix mt1 = new Matrix(rows, cols);
                System.out.println("Nhap cac gia tri: ");
                mt1.input();

                System.out.println("nhap hang cot cua ma tran 2: ");
                cols = sc.nextInt(); rows = sc.nextInt();
                Matrix mt2 = new Matrix(rows, cols);
                System.out.println("Nhap cac gia tri: ");
                mt2.input();

                System.out.println("Tich: ");
                mt1.mul(mt2);
            } else if(select == 3) {
                System.out.println("nhap hang cot cua ma tran: ");
                cols = sc.nextInt(); rows = sc.nextInt();
                Matrix mt1 = new Matrix(rows, cols);
                System.out.println("Nhap cac gia tri: ");
                mt1.input();

                mt1.transpose().print();
            } else if(select == 4) {
                check = false;
                System.out.println("Exitting ....");
            }
        } while(check);
    }
}
