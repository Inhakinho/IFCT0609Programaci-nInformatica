/*DESARROLLOS DE LAS FUNCIONES*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include "prototiposdni.h"

//CARATULA
void caratula(char *nombre,char caracter, int ancho){
	int i;
	ancho=ancho-strlen(nombre);
	for(i=0;i<ancho/2;i++){
		printf("%c",caracter);
	}
	printf("%s",nombre);
	for(i=0;i<ancho/2;i++){
		printf("%c",caracter);
	}
}
//PEDIR CADENA
char *pedircadena(char *cadena,char *quees){
	printf("\nIntroduce tu %s con la letra en mayuscula: ",quees);
	gets(cadena);
	fflush(stdin);
	return cadena;
}
//COMPROBACION DNI
void ninechar(char*cadena,int num){
	if(strlen(cadena)!=num){
		printf("\n\nTiene que contener 9 caracteres,ERROR!!\n");
	}
	else if((cadena[0]<49 || cadena[0]>57) && (cadena[1]<49 || cadena[1]>57) && (cadena[2]<49 || cadena[2]>57) && (cadena[3]<49 || cadena[3]>57) && (cadena[4]<49 || cadena[4]>57) && (cadena[5]<49 || cadena[5]>57) && (cadena[6]<49 || cadena[6]>57) && (cadena[7]<49 || cadena[7]>57)){
		printf("\n\nTiene que contener 8 digitos primero y seguido de la letra,ERROR!!\n");
	}
	else if(cadena[8]<65 || cadena[8]>90 || cadena[8]==73 || cadena[8]==79){
		printf("\n\nLa letra de tu dni no es valida o es minuscula,ERROR!!\n");
	}		
}
//VERIFICACION LETRA
char comprobar2(int numeros){
  char letras[23]="TRWAGMYFPDXBNJZSQVHLCKE";
  return letras[numeros%23];
}
