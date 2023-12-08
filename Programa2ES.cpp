//Programa 2 Entrada y salida de datos

#include <stdio.h>

int main(){//Inicia funcion principal
	//Declaracion de variables
	char nombre[20];//Arrglo de tipo cadena de caracteres
	int num1, num2;//Variables de tipo entero
	printf("Cual es tu nombre: ");//Imprime
	scanf("%s",&nombre);
	
	printf("Escribe numero 1 en entero: ");//Imprime
	scanf("%i",&num1);
	
	printf("Escribe numero 2 en entero: ");//Imprime
	scanf("%i",&num2);
	
	printf("Bienvenido Usuario %s: ", nombre);
	
	int sumaR = num1+num2;
	
	printf("\nNumero 1 es %i", num1);
	printf("\nNumero 2 es %i", num2);
	printf("\nSuma es %i:", sumaR);
}//Termina funcion principal