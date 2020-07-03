#include <stdio.h>
#include  <stdlib.h>

int main(int argc, char *argv[]) {
	
	int LIMITE_SUPERIOR = 5;
	int LIMITE_INFERIOR = -1;
	int pila[5];
	int tope=-1;
	int disponible = 0;
	int opcion = 0;
	int SALIR = 4;
	int numeroUsuario = 0;
	
	system("color 02");
	
	while(opcion != SALIR){
	system("cls");
	printf("\nSelecciona una opcion\n\n");
	printf("1) PUSH\n");
	printf("2) POP\n");
	printf("3) Estadisticas\n");
	printf("4) Salir\n");
	
	scanf("%i",&opcion);
	
	switch(opcion){
	case 1:
		
		if(LIMITE_SUPERIOR == disponible){
			printf("No hay memoria disponible.\n\n");
			system("color 03");
		}else{
		
		printf("Ingresa el numero que deseas agregar a la pila\n\n");
		scanf("%i",&numeroUsuario);
		pila[disponible]=numeroUsuario;
		disponible++;
		tope++;
	}
		break;
		
	case 2:
		
		if(LIMITE_INFERIOR == tope){
			printf("No se encuenta ningun registro en la pila\n\n");
		}else{
			printf("\nEl número expulsado es %i ",pila[tope]);
			pila[tope]=0;
			disponible--;
			tope--;
		}
		break;
	
	case 3:
		
		printf("\nEl tamaño de la pila es de %i",LIMITE_SUPERIOR);
		printf("\nLa pila tiene diponibles %i registros",((LIMITE_SUPERIOR-1) - tope) );
		printf("\nLa pila tiene %i registros ocupados\n\n",(tope - LIMITE_INFERIOR ));
		break;
	
		default:
			break;
	}
	}

	
	
	
	
	
	
	return 0;
}

