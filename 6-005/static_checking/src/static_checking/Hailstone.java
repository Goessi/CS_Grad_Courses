package static_checking;

import java.util.ArrayList;
import java.util.List;

public class Hailstone {
	
	public static List<Integer> hailstoneSequence(int n) {
		List<Integer> list = new ArrayList<Integer>();
		while(n != 1) {
			list.add(n);
			if (n%2 == 0) {
				n = n/2;
			}
			else {
				n = 3*n + 1;
			}
		}
		list.add(n);
		return list;
	}

}
