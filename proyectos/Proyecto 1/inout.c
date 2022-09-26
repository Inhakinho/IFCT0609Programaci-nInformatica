/*DESARROLLOS DE LAS FUNCIONES*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include "prototipos.h"

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
//PEDIR NUMERO ENTERO
int pedirnumero(int min,int max, char *finalidad){
	int num=-1;
	while(num<=min-1 || num>=max+1){
		printf("\n[%s]Introduce un numero entero (entre %d-%d): ",finalidad,min,max);
		scanf("%d",&num);
		fflush(stdin);
	}
	return num;
}
//PEDIRNUMERODECIMAL
float pedirdecimal(float minimo,float maximo, char *final){
	float num=-1;
	while(num<=minimo-1.0 || num>=maximo+1.0){
		printf("\n[%s]Introduce un numero decimal (entre %.0f-%.0f): ",final,minimo,maximo);
		scanf("%f",&num);
		fflush(stdin);
	}
	return num;
}
//PEDIR CHAR Y TRANSFORMAR
char pedirchar(char caracter){
	printf("\nIntroduce una letra: ");
	scanf("%c",&caracter);
	fflush(stdin);
	return caracter;
}
//TRANSFORMAR CHAR A MINUSCULA
char transformar(char inicio, char fin, char caracter){
    if(caracter<'A' || caracter>'z'){
        printf("\n\nIntroduce un caracter dentro de rango\n\n");
        return 0;
    }
    else if(caracter>='a' && caracter<='z'){
    	return caracter;
	}
        
    else{
    	return caracter+32;
	} 
}
//PEDIR CADENA
char *pedircadena(char *cadena){
	printf("\nIntroduce una cadena: ");
	gets(cadena);
	fflush(stdin);
	return cadena;
}
//FUNCION BORRAS \n de fgets
char *fgetsnuevo(char *cadena){
	//cambiando el \n por 5
	int i;
	for(i=0;i<=cadena[i]!='\0';i++){	
		if (cadena[i]=='\n'){
			cadena[i]='\0';
		}	
	}
	return cadena;
}
