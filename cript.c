#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void cesarizar(char *c){
	if (*c == 121){
		*c = 'a';
		//printf("%s",c);
	}
	else if (*c == 0x7A){
		*c = 'b';
		//printf("%s",c);
	}
	else{
		*c = *c + 2;
		//printf("%s",c);
	}
}

void descesarizar(char *c){
	if (*c == 97){
		*c = 'y';
		//printf("%s",c);
	}
	else if (*c == 98){
		*c = 'z';
		//printf("%s",c);
	}
	else{
		*c = *c - 2;
		//printf("%s",c);
	}
}

void murcielagisar(char *c){
    switch(*c){
        case 'm':
            *c = 0x30;
            break;
        case 'u':
            *c = 0x31;
            break;
        case 'r':
            *c = 0x32;
            break;
        case 'c':
            *c = 0x33;
            break;
        case 'i':
            *c = 0x34;
            break;
        case 'e':
            *c = 0x35;
            break;
        case 'l':
            *c = 0x36;
            break;
        case 'a':
            *c = 0x37;
            break;
        case 'g':
            *c = 0x38;
            break;
        case 'o':
            *c = 0x39;
            break;
    }
}

void desmurcielagisar(char *c){
    switch(*c){
        case 48:
            *c = 'm';
            break;
        case 49:
            *c = 'u';
            break;
        case 50:
            *c = 'r';
            break;
        case 51:
            *c = 'c';
            break;
        case 52:
            *c = 'i';
            break;
        case 53:
            *c = 'e';
            break;
        case 54:
            *c = 'l';
            break;
        case 55:
            *c = 'a';
            break;
        case 56:
            *c = 'g';
            break;
        case 57:
            *c = 'o';
            break;
    }
}

int main(int argc, char const *argv[])
{
    FILE *archivo;
    char entrada[255];
    char *iterador;
    char *locale;
    int i;

    locale = setlocale(LC_ALL, "");

    archivo = fopen(argv[2],"r");
    if(strcmp(argv[1],"-c")==0){
        while (!feof(archivo)){
            fscanf(archivo,"%s",entrada); 
            i = 0;
            while(i<strlen(entrada)){
                *iterador = entrada[i];
                cesarizar(iterador);
                murcielagisar(iterador);
                printf("%s",iterador);
                i++;
            }
        }
        printf("\n");
    }

    if(strcmp(argv[1],"-d")==0){
        while (!feof(archivo)){
            fscanf(archivo,"%s",entrada); 
            i = 0;
            while(i<strlen(entrada)){
                *iterador = entrada[i];
                desmurcielagisar(iterador);
                descesarizar(iterador);
                printf("%s",iterador);
                i++;
            }
        }
        printf("\n");
    }

    fclose(archivo);

    return 0;
}