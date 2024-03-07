package Main;

import Es2.Bike;
import java.util.Scanner;
import java.awt.Color;

public class Main {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		sc.nextLine(); 
		
		Bike b;//creates una reference
		b=new Bike(); //creates a new bike
		
		b.increaseGear();
		
		Bike b2=new Bike(3);
		
		Bike b3=new Bike(2,0,0);
		b3.gear = 5;
		
		Bike b4 = new Bike(Color.BLUE);
		
		Bike[] bikes = new Bike[10];
		bikes[0]=new Bike(Color.RED);
		bikes[0]=new Bike(Color.GREEN);
		
		bikes[0].getGear();
	}
}
