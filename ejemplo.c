
#include <stdio.h>
#include <wctype.h>
#include <ctype.h>

 
int main ( int argc, char **argv){
 
 	FILE *fp = fopen (argv[1], "r" );
 	char cadena = '\0';
 	int contC=0;
 	int contP=0;
 	int contL=0;
 	char finCadena= '\n';
 	int ayuda =0;
 	while((cadena = fgetc(fp))!=EOF){
 			contC++;
 		if(isspace(cadena))
 			ayuda =0;
 		else if(ayuda==0){
    		contP++;
    		ayuda=1;
    	}
 		if (cadena== finCadena)
            contL++;
 	}
 	printf(" Caracteres %d\n",contC);
 	printf(" Palabras %d\n",contP);
 	printf(" Lineas %d\n",contL );

 	fclose(fp);
 
	return 0;
 }
# MyWordCount
# MyWordCount
