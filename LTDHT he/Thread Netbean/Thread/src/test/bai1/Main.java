package test.bai1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		TimeThread tt = new TimeThread();
		ColorThread ct = new ColorThread();
		
		tt.start();
		ct.start();
		Scanner in = new Scanner(System.in);
		while(in.hasNext()) {
		 char s = in.next().charAt(0);
			if(s == 'a') {
				ct.setStart(false);
			}else if(s == 'x') {
				ct.stop();
				tt.stop();
			}else {
				ct.setStart(true);
			}
			
		}
	}
}
