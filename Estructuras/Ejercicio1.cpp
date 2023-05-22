//Realizar un programa que solicite los datos de una canción al usuario, almacenarlos y luego mostrarlos en pantalla. 
//Definir una estructura para guardar los datos de una canción en formato MP3: Artista, Título, Duración (en segundos), Tamaño del fichero (en KB). 

#include <stdio.h>
#include <stdlib.h>


struct MP3 {
	
	char Artista[100];
	char Titulo[100];
	float Duracion;
	float Tamano;
	
};


int main(void){
	
	
	MP3 MP3;
	
	
	printf("Ingrese el Nombre del Artista: ");
	fgets(MP3.Artista, 100, stdin);
	
	printf("Ingrese El Titulo de la Cancion: ");
	fgets(MP3.Titulo, 100, stdin);
	
	printf("Ingrese La Duracion de la Cancion: ");
	scanf("%f", &MP3.Duracion);
	
	printf("Ingrese El Tamaño de la Cancion: ");
	scanf("%f", &MP3.Tamano);	
	
	
	printf("---------Cancion----------\n");
	
	printf("Artista: %s\n", MP3.Artista);
	printf("Titulo de la Cancion: %s\n", MP3.Titulo);
	printf("Duracion: %.2f\n", MP3.Duracion);
	printf("Tamaño: %.2f\n", MP3.Tamano);
	
}
