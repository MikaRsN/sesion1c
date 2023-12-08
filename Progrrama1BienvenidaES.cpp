//programa 1 datos de bienbenida con varibales de entrada y dalida de datos

#include <stdio.h>

int main(){//Inicia funcion principal 
	//Declaracion de varibales. Una variables es un valro asignado en memoria "="
	int numero1 = 100;//Varibale incializada lleva valor de tipo entero %i
	float saldo = 10.2;//Variable inicializada lleva valor de tipo decimal float %f
	char letra = ' ';//Variable inicializada lleva valor de tipo caracter char %c %s
	char nombre[20] = "Beto";//Arreglo inicializado lleva valores de tipo astring %s
	
	//Imprimir datos de bienvenida
	printf("Variable de tipo entero: %i", numero1);
	printf("\nVarible de tipo decimal: %f", saldo);
	printf("\nVariable de tipo caracter: %c", letra);
	printf("\nVariable de tipo string: %s", nombre);
	
	
	printf("\nVariable de tipo entero: %i", numero1, 
		   "\nVariable de tipo decimal: %f", saldo);
}//Termina funcion principal