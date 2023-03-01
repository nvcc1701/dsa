package test.bai1;

import java.text.SimpleDateFormat;
import java.util.Date;

public class TimeThread extends Thread{

public void run() {
		SimpleDateFormat sdf = new SimpleDateFormat("hh:mm:ss");
	while(true) {
		System.out.println(sdf.format(new Date()));
		
		try {
			sleep(1000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	}
}
