import java.util.Scanner;


public class ejercicio2 {

	//Falta Terminar
	
	public static void main(String[] args) {
		
		Scanner numero = new Scanner(System.in);
		int numeros;
		
		for(int i = 0; i < 100; i += 2) {
			while(numeros < 50 || numeros > 100) {
				
				System.out.println("Ingrese Valores: ");
				numeros = numero.nextInt();
				
			}
		}
		
	}
}
