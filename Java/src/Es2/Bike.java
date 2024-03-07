package Es2;

public class Bike {
	public int gear;//visibile nel codice
	private float cadence;//non visibile nel codice
	protected int speed;//visibile alle classi di quel pacchetto
	
	public Bike() {//non ha tipo di ritorno, inizia con lettera maiuscola e ha = nome della classe
		this.gear = 2;
		this.cadence = 0;
		this.speed = 0;
	}
	
	public Bike(int gear) {
		this.gear=gear;
		this.cadence=0;
		this.speed=0;
	}
	public Bike(int gear, float cadence, int speed) {
		this.gear=gear;
		this.cadence=cadence;
		this.speed=speed;
	}
	/** SI USA PER DOCUMENTAZIONE JAVA 
	 *this method increase the gear by 1
	 */
	public void increaseGear() {
		this.gear=this.gear+1;
	}

}
