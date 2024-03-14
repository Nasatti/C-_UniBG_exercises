package MP3;

public class Cliente {

	private final String nome;
	private final String cognome;
	//private final String cf;
	
	public Cliente(String nome, String cognome) {
		this.nome = nome;
		this.cognome = cognome;
	}
	
	public String getNome() {
		return this.nome;
	}
	
	public String getCognome() {
		return this.cognome;
	}
	
	public String toString() {
		return this.nome + " " + this.cognome;
	}
}
