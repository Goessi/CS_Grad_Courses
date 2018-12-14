
public class Marathon {
	public static int findidx(int[] aTimeList) {
		int l = aTimeList.length;
		int a = aTimeList[0];
		for (int i = 1; i < aTimeList.length; i++) {
			if (a > aTimeList[i]) {
				a = aTimeList[i];
			}
		}
		return a;
	}

	public static int find2idx(int[] aTimeList) {
		int firstPerson = findidx(aTimeList);
		int secondPerson = aTimeList[0];
		for (int i = 0; i < aTimeList.length; i++) {
			if (aTimeList[i] != firstPerson) {
				if (aTimeList[i] < secondPerson) {
					secondPerson = aTimeList[i];
				}
			}
		}
		return secondPerson;
	}

	public static void main(String[] args) {
		int[] times = { 341, 273, 278, 329, 445, 402, 388, 275, 243, 334, 412, 393, 299, 343, 317, 265 };

		int one = findidx(times);
		int two = find2idx(times);

		System.out.println(one);
		System.out.println(two);

	}

}
