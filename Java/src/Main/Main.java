package Main;

import Es2.Bike;

public class Main {
	
	public static void main(String[] args) {
		int x = 5;
		Bike b;//creates una reference
		b=new Bike(); //creates a new bike
		
		b.increaseGear();
		
		Bike b2=new Bike(3);
		
		Bike b3=new Bike(2,0,0);
		b3.gear = 5;
		
		
	}
}
