#include <stdio.h>

int main( )
{
 	
int a;
int real =1;
int erro = 0;
char estado = 'A';

printf("Entre com um numero: ");

while(((a=getchar( ))!= 'n') && (erro==0))
switch(estado)
	 {
	case 'A':
 	   	 if ((a >='0') && (a<='9'))
 	  	    estado = 'A';
 		    else
 			if (a == ',' )
 			estado = 'B';
			else erro = 1;
 			break;

 	case 'B':
		if((a >='0') && (a <='9'))
		 	estado = 'C';
 		 	else
 		 	erro = 1;
 			break;

 	case 'C':
		if ((a >='0') && (a <='9'))
			 estado = 'C';
			 else
			 erro = 1;
			 break;
	 }
	
	if((!erro) && (estado == 'C'))
 		printf("Eh um numero real.\n");
	else
		printf("Numero real mal formado.\n");
}
