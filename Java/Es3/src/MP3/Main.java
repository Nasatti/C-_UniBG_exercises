package MP3;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		/*MP3 lettore1 = new MP3(500);
		
		System.out.println(lettore1.getSN());

		
		MP3 lettore2 = new MP3(500);
		
		System.out.println(lettore2.getSN());*/
		
		MP3[] venditore = new MP3[3];
		Scanner sc = new Scanner(System.in);
		for(int i = 0; i < 3; i++) {
			System.out.println("Inserisci memoria MP3");
			String memoria = sc.nextLine();
			venditore[i]=new MP3(Integer.parseInt(memoria));
		}

		
		Cliente[] c = new Cliente[2];
		
		for(int i = 0; i < 2; i++) {
			System.out.println("Inserisci nome cognome");
			String nome = sc.nextLine();
			String cognome = sc.nextLine();
			c[i]=new Cliente(nome, cognome);
		}
		
		for(Cliente cliente: c) {
			System.out.println("Buongiorno " + cliente.getNome()+" che lettore vuoi?");
			int id = Integer.parseInt(sc.nextLine());
			venditore[id].setCliente(cliente.getNome(), cliente.getCognome());
		}
		
		for(MP3 lettore: venditore) {
			System.out.println(lettore);
		}
		
	}
}
