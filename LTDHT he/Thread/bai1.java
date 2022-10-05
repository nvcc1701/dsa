import java.text.SimpleDateFormat;
import java.util.Date;

class bai1 {
    public static void main(String[] args) {
        Thread t = new Thread() {
            public void run() {
                SimpleDateFormat f = new SimpleDateFormat("HH:MM:SS");

                while (true) {
                    System.out.println(f.format(new Date()));

                    try {
                        Thread.sleep(1000);
                    } catch (InterruptedException e) {
                        // TODO Auto-generated catch block
                        e.printStackTrace();
                    }
                }
            }
        };

        t.start();
    }
}