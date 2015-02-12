#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(int argc, char const *argv[]){
	FILE *entrada;
    int i,largoArchivo;
    unsigned char k[10];
    entrada=fopen(argv[1],"r");
    i=0;
    fseek(entrada, 0, SEEK_END); // seek to end of file
    largoArchivo = ftell(entrada); // get current file pointer
    fseek(entrada, 0, SEEK_SET); 
    for(i=0; i<largoArchivo; i++){
       fread(&k[i],1,1,entrada);
    }
    for(i=0; i<largoArchivo; i++){
       if (k[i]!=' ')
           printf("%c", k[i]);
    }                       
}