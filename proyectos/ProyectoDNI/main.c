#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include "prototiposdni.h"


//DEFINES
#define ANCHO 120
#define SEPARADOR 4

#define FINALIDAD "DNI"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//comprobaciones
		//printf("\nLos numeros de tu dni en string son %s\n\n",numeros);
		//printf("\nLos numeros de tu dni en integer son %d\n\n",numerotrans);
		//printf("\nTu letra correcta seria %c\n\n",comprobar2(numerotrans));
int main(int argc, char *argv[]){
	char dnicad[50],numeros[50];
	int i,numerotrans;
	caratula(" PROGRAMA DNI ",SEPARADOR,ANCHO);
	do{
		pedircadena(dnicad,FINALIDAD);
		printf("\nHas introducido %s\n\n",dnicad);
		for(i=0;i<8;i++){
			numeros[i]=dnicad[i];
		}
		numerotrans=atoi(numeros);	
		caratula(" PULSA ENTER PARA VERIFICAR",SEPARADOR,25);
		getch();
		ninechar(dnicad,9);
	
		if((dnicad[8])!=comprobar2(numerotrans)){
			printf("\n\n    DNI INCORRECTO");
			getch();
			system("cls");
		}
		else{
			printf("\n\n    DNI CORRECTO %c",3);
		}
	}
	while(dnicad[8]!=comprobar2(numerotrans));
	return 0;
}
