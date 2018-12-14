
public class Baby {
	String name;
	boolean isMale;
	
	Baby(String myname, boolean maleBaby){
		name = myname;
		isMale = maleBaby;
	}
	
	double weight;
	double decibels;
	int numPoops = 0;
	
	void poop() {
		numPoops += 1;
		System.out.println("Dear mother, " + "I have pooped. Ready the diaper.");
	}
	
	void sayHi() {
		System.out.println("Hi, my name is.. " + name);
	}
	
	void eat(double foodWeight) {
		if(foodWeight >= 0 && foodWeight < weight) {
			weight = weight + foodWeight;
		}
	}

}
