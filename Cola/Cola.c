#include <stdio.h>

int main(int argc, char *argv[]) {
	int INDICE_TIERRA_SUPERIOR = 6;
	int cola[6];
	int INDICE_INICIAL = 0;
	int INDICE_FINAL = 4;
	int TIERRA = 00;
	int *punteroLimiteSuperior = 0; 
	int *punteroTierraLimiteSuperior=&TIERRA;
	int *punteroTope=  &TIERRA;
	int *punteroLimiteInferior=  &TIERRA;
	int *punteroDisponible=  &TIERRA;
	int opcion=-1;
	int valor=TIERRA;
	int VALOR_VACIO = -1;
	int valorExpulsado;
    
	punteroLimiteSuperior=&cola[INDICE_FINAL];
	punteroTierraLimiteSuperior=&cola[INDICE_TIERRA_SUPERIOR];
	
	while(opcion != 3){
		
		
		printf("\nSelecciona una opcion\n");
		printf("1) PUSH\n");
		printf("2) POP\n");
		printf("3) Salir\n");
		printf("-------------------------\n");
		scanf("%i",&opcion);
		
		
	switch(opcion){

		
		
	case 1:
	
		if(punteroTope==&TIERRA){
			printf("PUSH\n");
			printf("\nIngresa un numero:\n");
			scanf("%i",&valor);
			fflush(stdin);
			punteroDisponible=&cola[INDICE_INICIAL];
			punteroLimiteInferior=&cola[INDICE_INICIAL];
			punteroTope=&cola[INDICE_INICIAL];
			*punteroDisponible=valor;
			punteroDisponible++;
		}else if(punteroTope==punteroLimiteSuperior){
			printf("ya no hay espacio\n");
		}else{
			printf("PUSH\n");
			printf("Ingresa un numero:\n");
			scanf("%i",&valor);
			fflush(stdin);
			*punteroDisponible=valor;
			punteroDisponible++;
			punteroTope++;
		}

		
		break;
	case 2:
		
		 valorExpulsado = *punteroLimiteInferior;
		*punteroLimiteInferior=VALOR_VACIO;
		punteroLimiteInferior++;
		
		if(punteroLimiteInferior!=punteroTierraLimiteSuperior){
			printf("\n\n\n Sacando el número: %i",valorExpulsado);
			
			
		}
		
		if(punteroLimiteInferior==punteroTierraLimiteSuperior){
			printf("\nLo sentimos, no hay informacion en la cola.");
			printf("\nReiniciando cola");
			punteroTope=&TIERRA;
			punteroDisponible=&cola[INDICE_INICIAL];
			punteroLimiteInferior=&cola[INDICE_INICIAL];
		}

		
		break;
	case 3:
		// AQUI YA NO HACEMOS NADA
		break;
	default:
		printf("\nIngresa otra opcion\n");
		
	}
	}
	
	printf("Hasta luego\n");
	
	
	
	return 0;
}
