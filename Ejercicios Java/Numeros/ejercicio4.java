import java.util.Scanner;

public class ejercicio4 {

	public static void main(String[] args) {
		
		System.out.println("Calculadora");
		System.out.println("1) Suma\n 2) Restar\n 3) Multiplicacion\n 4) Division\n");
		
		int calculadora;
		int a;
		int b;
		int c = 0;
		Scanner cal = new Scanner(System.in);
		
		calculadora = cal.nextInt();
		
		Scanner valor1 = new Scanner(System.in);
		Scanner valor2 = new Scanner(System.in);
		
		switch (calculadora) {
		
		case 1:
			System.out.println("Ingrese El Valor de A: ");
			a = valor1.nextInt();
			
			System.out.println("Ingrese El Valor de B: ");
			b = valor2.nextInt();
		
			c = a + b;
			System.out.println("La suma de los valores es: " + c);

			break;
	
		case 2:
			System.out.println("Ingrese El Valor de A: ");
			a = valor1.nextInt();
			
			System.out.println("Ingrese El Valor de B: ");
			b = valor2.nextInt();
		
			c = a - b;
			System.out.println("La resta de los valores es: " + c);

			break;
			
		case 3:
			System.out.println("Ingrese El Valor de A: ");
			a = valor1.nextInt();
			
			System.out.println("Ingrese El Valor de B: ");
			b = valor2.nextInt();
		
			c = a * b;
			System.out.println("La multiplicacion de los valores es: " + c);

			break;
		case 4:
			System.out.println("Ingrese El Valor de A: ");
			a = valor1.nextInt();
			
			System.out.println("Ingrese El Valor de B: ");
			b = valor2.nextInt();
		
			c = a / b;
			System.out.println("La division de los valores es: " + c);

			break;
		}
		
	}
	
}
