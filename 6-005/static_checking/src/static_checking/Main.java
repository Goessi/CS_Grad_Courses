package static_checking;

import java.util.ArrayList;
import java.util.List;

public class Main {

	public static void main(String[] args) {
		int n = 3;
		while(n != 1) {
			System.out.println(n);
			if (n%2 == 0) {
				n = n/2;
			}
			else {
				n = 3*n + 1;
			}
		}
		System.out.println(n);
		
		//int[] a = new int[100];
		//System.out.println(a.length);
		
		int[] a = new int[100];
		int i = 0;
		int m = 3;
		while (m != 1) {
			a[i] = m;
			i++;
			if (m%2 == 0) {
				m = m/2;
			}
			else {
				m = 3*m + 1;
			}
		}
		a[i] = m;
		i++;
		
		List<Integer> list = new ArrayList<Integer>();
		int t = 3;
		while (t != 1) {
			list.add(t);
			if (n%2 == 0) {
				n = n/2;
			}
			else {
				n = 3*n + 1;
			}
		}
		list.add(n);
		
		// find the maximum point of a hailstone sequence stored in list
		int max = 0;
		for (int x: list) {
			max = Math.max(x, max);
		}
		System.out.println("hahahha");
		System.out.println(max);

	}

}
