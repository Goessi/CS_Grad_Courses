
public class FooCorporation {
	public static void payment(int time, double basepay) {
		if (basepay < 8) {
			System.out.println("toooooooo low!");
		} else {
			if (time <= 40) {
				System.out.println(time * basepay);
			} else if (time > 40 && time <= 60) {
				int time1 = 40;
				int time2 = time - time1;
				System.out.println(time1 * basepay + time2 * 1.5 * basepay);
			} else {
				System.out.println("Errorrrrrrrrrrrrrrrr!");
			}
		}

	}

	public static void main(String[] args) {
		payment(35, 7.5);
		payment(47, 8.2);
		payment(73, 10.0);

	}

}
