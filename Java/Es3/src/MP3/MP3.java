package MP3;

//import java.util.Random;	int value = new Random().nextInt();

public class MP3 {
	
	private final int memoria;
	private int sn;
	private Cliente cliente;
	private static int COUNT = 0; //static ti permette di poter usare il valore della variabile in tutte le classi
	/**
	 * Questo metodo costruisce un MP3 con memoria e SN
	 * @param memoria
	 * @param sn
	 */
	public MP3(int memoria, int sn) {
		
		this.memoria = memoria;
		if(sn<=COUNT) {
			this.sn = COUNT;
		}
		else {
			this.sn = sn;
			COUNT = sn;
		}
	}
	
	/**
	 * Questo metodo costruisce un MP3 con memoria
	 * @param memoria
	 */
	public MP3(int memoria) {
		this.memoria=memoria;
		this.sn=COUNT++;//se è static è meglio non mettere this. perchè tanto è globale
	}
	
	public int getSN() {
		return this.sn;
	}
	
	public int getmemoria() {
		return this.memoria;
	}
	
	public void setCliente(String nome, String cognome) {
		this.cliente = new Cliente(nome, cognome);
	}
	
	public String toString() {
		return Integer.toString(this.sn) + " " + Integer.toString(this.memoria) + " " + this.cliente.getNome();
	}
}
