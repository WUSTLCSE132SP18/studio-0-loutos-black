
public class heartbeat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int seconds = 0;
		while(seconds <50) {
			try {
				System.out.println(seconds + " seconds have elapsed");
				seconds++;
				Thread.sleep(1000);
			}
			catch(InterruptedException e) {
				e.printStackTrace();
			}
		}

	}
}