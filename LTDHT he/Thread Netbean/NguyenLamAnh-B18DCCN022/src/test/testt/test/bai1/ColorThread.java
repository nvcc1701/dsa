package test.bai1;

import java.util.Date;

public class ColorThread extends Thread{
	boolean start = true;
	



	public void setStart(boolean start) {
		this.start = start;
	}


	public void run() {
		while(start) {
			System.out.println("Do");
			System.out.println("Xanh");			
			try {
				sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
}
