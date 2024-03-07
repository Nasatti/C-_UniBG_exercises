package Es2; 

import java.awt.Color;

public class Bike {
	public int gear;//visibile nel codice
	private float cadence;//non visibile nel codice
	protected int speed;//visibile alle classi di quel pacchetto
	private final Color color;//final-->non fa assegnare nessun altro valore dopo l'inizializzazione
	
	/*
	/**
	 * this constructor create a bike
	 * @param gear this is the gear to be set
	 * @param speed this is the speed to be set
	 * @return per il ritorno del metodo
	 * @throws for expection
	 * @deprecated metodo verrà rimosso
	 */
	
	public Bike() {//non ha tipo di ritorno, inizia con lettera maiuscola e ha = nome della classe
		this.gear = 2;
		this.cadence = 0;
		this.speed = 0;
		this.color = Color.black;
	}

	public Bike(int gear) {
		this.gear=gear;
		this.cadence=0;
		this.speed=0;
		this.color = Color.black;
	}
	
	public Bike(Color color) {
		this.gear=2;
		this.cadence=0;
		this.speed=0;
		this.color = color;
	}
	
	public Bike(int gear, float cadence, int speed) {
		this.gear=gear;
		this.cadence=cadence;
		this.speed=speed;
		this.color = Color.black;
	}
	
	/** SI USA PER DOCUMENTAZIONE JAVA 
	 *this method increase the gear by 1
	 */
	public void increaseGear() {
		this.gear=this.gear+1;
	}
	
	public void setGear(int gear) {
		if(gear>=0 && gear<=6) {
			this.gear = gear;
		}
		else this.gear = 0;
	}
	/**
	 * 
	 * @return the gear
	 */
	public int getGear() {
		return this.gear;
	}

}
