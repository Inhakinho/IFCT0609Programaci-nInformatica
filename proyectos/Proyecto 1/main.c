#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include "prototipos.h"

//DEFINES
#define ANCHO 120
#define SEPARADOR 3

#define MIN 0
#define MAX 100
#define FINALIDAD "Edad"

#define DECIMIN 0
#define DECIMAX 10
#define FINAL "Notas"

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
PRIMER PROYETO IÑAKI*/

int main(int argc, char *argv[]){
	//declaracion de variables
	float decimal;
	int lectura;
	char nombreprograma[120]=" MI PRIMER PROYECTO ",lecturachar,lecturacad[50];
	//funcion principal
	//LLAMADA A LAS FUNCIONES	
	caratula(nombreprograma,SEPARADOR,ANCHO);//CARATULA INICIAL
	
	lectura=pedirnumero(MIN,MAX,FINALIDAD);//FUNCION NUMERO ENTERO
	printf("\nTu numero introducido es %d\n",lectura);
	
	decimal=pedirdecimal(DECIMIN,DECIMAX,FINAL);//FUNCION NUMERO DECIMAL
	printf("\nTu numero introducido es %.1f\n",decimal);
	
	lecturachar=pedirchar(lecturachar);//FUNCION CHAR
	printf("\nTu letra introducida es: %c\n",transformar('a','z',lecturachar));
	
	strcpy(lecturacad,pedircadena(lecturacad));//FUNCION CADENA
	printf("\nTu cadena introducida es: %s\n",lecturacad);
	
	printf("\nIntroduce tu cadena que se va recoger con fgets: ");
   	fgets(nombreprograma,50,stdin);
   	
   	printf("%s",nombreprograma);
   	printf("%s",nombreprograma);
   		
	printf("%s",fgetsnuevo(nombreprograma));
	printf("%s\n",fgetsnuevo(nombreprograma));
   	
	caratula(" FIN ",SEPARADOR,ANCHO);//CARATUALA FINAL
	
	return 0;
}
