#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int pila[5];
	int tope=-1;
	int disponible = 0;
	
	int pushNumeroA =5;
	
	pila[disponible]=pushNumeroA;
	disponible++;
	tope++;
	
	int pushNumeroB = 10;
	
	pila[disponible]=pushNumeroB;
	disponible++;
	tope++;
	
	int pushNumeroC = 12;
	
	pila[disponible]=pushNumeroC;
	disponible++;
	tope++;
	
	
	int popUltimoA = pila[tope];
	pila[tope]=0;
	disponible--;
	tope--;
		
	int pushNumeroD = 50;
	pila[disponible] = pushNumeroD;
	disponible++;
	tope++;
	
	return 0;
}

