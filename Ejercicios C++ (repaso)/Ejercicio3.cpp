#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
	
	int Parcial;
	int Parcial2;
	int Parcial3;
	int ExamenFinal;
	int TrabajoFinal;
	int ParcialNota = 0;
	int NotaFinal = 0;
	
	printf("Nota del Parcial:");
	scanf("%d", &Parcial);
	ParcialNota = ParcialNota + Parcial;
	
	printf("Nota del Parcia2:");
	scanf("%d", &Parcial2);
	ParcialNota = ParcialNota + Parcial2;
	
	printf("Nota del Parcia3:");
	scanf("%d", &Parcial3);
	ParcialNota = ParcialNota + Parcial3;
	
	ParcialNota = ParcialNota*0.55;
	
	printf("Nota del Examen Final:");
	scanf("%d", &ExamenFinal);
	NotaFinal = NotaFinal + ExamenFinal*0.30;
	
	printf("Nota del Trabajo Final:");
	scanf("%d", &TrabajoFinal);
	NotaFinal = NotaFinal + TrabajoFinal*0.15;
	
	NotaFinal = NotaFinal + ParcialNota;
	
	printf("La Nota De La Materia Algoritmos es: %d\n", NotaFinal);
	
  return 0;
}

