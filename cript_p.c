#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
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
    pid_t ramas,hijos;
    int i,j,nHijos;
    nHijos = atoi(argv[2]);

    /*
    //Creamos una cadena de 4 hijos
    for(i=0; i < 4;i++){
        ramas = fork();
        //Si estamos en presencia de un padre salimos
        if (ramas !=0 && i != 4){
            printf("Mi padre es %d y mi id es %d \n",getppid(),getpid());
            wait();
            exit(1);
        }
    }
    */

    ramas = 0;
    
    for(i=0; i<nHijos ;i++){
        if ((ramas = fork()) < 0) {
            perror("fork:");
            exit(1);
        }
        // Codigo que ejecutaran los hijos
        if (ramas == 0) {
            printf("Soy el hijo con pid %d y mi padre es: %d\n", getpid(),getppid());
            break;
        }

        //sleep y wait por los hijos
        //Cesarizar desde i + longitud/nhijos
    } 
    
    
        
    for(i=0; i < 7;i++) wait();
    
    return 0;
}