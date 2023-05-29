/*Modificar el programa anterior para que almacene datos de hasta 100 canciones. 
El mismo debe contar con un menú que permita las opciones: añadir una nueva canción, mostrar el título de todas las canciones, 
buscar la canción que contenga un cierto texto (en el artista o en el título).*/

#include <stdio.h>
#include <stdlib.h>

struct estructura {
	
	char Artista[100];
	char Titulo[100];
	float Duracion;
	float Tamano;
};

int main(void){
	
	estructura *MP3 = new estructura[100];
	
	int menu, st;
	char alp[2];

	printf("Bienvenido al menu de Canciones\n");
	
  while(1){
	printf("1) Agregar Cancion\n 2) Mostrar titulo de todas las canciones\n 3) Buscar Cancion\n");
	scanf("%d", &menu);
	switch(menu){
		case 1:
			fgets(alp, 100, stdin);
			printf("Ingrese Nombre del Artista: ");
			fgets(MP3[st].Artista, 100, stdin);
			printf("Ingrese Titulo de la Cancion: ");
			fgets(MP3[st].Titulo, 100, stdin);
			printf("Ingrese Duracion de la Cancion: ");
			scanf("%f", &MP3[st].Duracion);
			printf("Ingrese el Tamano de la Cancion: ");
			scanf("%f", &MP3[st].Tamano);
			printf("\n");
			st++;
			break;
		case 2: 
			for(int i = 0; i < st; i++){
				printf("Artista: %s\n Titulo de la Cancion: %s\n Duracion de la Cancion: %.2f\n Tamano de la Cancion: %.2f\n", MP3[i].Artista, MP3[i].Titulo, MP3[i].Duracion, MP3[i].Tamano);
				printf("\n");
			}
			break;
		case 3:	 
	 }	
	}
  }
