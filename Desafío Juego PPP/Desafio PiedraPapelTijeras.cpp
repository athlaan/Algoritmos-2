#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	int mano; //piedra = 1 papel = 2 y tijera = 3
	int botmano = 0;
	int jugadorganada = 0;
	int botganada = 0;
	int empate = 0;
	int rondas = 5;
	
	
	for(int i = 0; i < rondas; i++){
		printf("Ingrese Un Numero para jugar la ronda X: ");
		scanf("%d", &mano);
		botmano = rand() % 3 + 1;
		printf("La Maquina tiro: %d\n", botmano);
	//Casos de que Mano sea 1, 2 o 3
	swi:
	switch(mano){
		case 1: 
		if(botmano == 2){
			botganada++;
		}else if(botmano == 3){
			jugadorganada++;
		}else if(botmano == 1){
			empate++;
		}
		break;
		case 2:
			if(botmano == 3){
				botganada++;
			}else if(botmano == 1){
				jugadorganada++;
			}else if(botmano == 2){
				empate++;
			}
			break;
			case 3:
				if(botmano == 1){
					botganada++;
				}else if(botmano == 2){
					jugadorganada++;
				}else if(botmano == 3){
					empate++;
				}
				break;
			//Si el jugador pone algun numero que no sea 1, 2 o 3. Se cancela la ronda y empieza denuevo la misma ronda
			default:
				printf("Ingrese un numero entre 1 y 3: ");
				scanf("%d", &mano);
				goto swi;
				break;
	}
}	
			//Separacion
			printf("---------------------------\n");
	//Finalizar partida si uno gana 3 rondas
				if(jugadorganada == 3){
					printf("Gano El jugador\n");
				}else if(botganada == 3){
					printf("Gano la Maquina\n");
				}	
	printf("El jugador gano: %d Rondas\n", jugadorganada);
	printf("El bot gano: %d Rondas\n", botganada);
	printf("Empataron: %d\n", empate);
}
