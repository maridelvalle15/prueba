#include <stdio.h>
//#include <stdlib.h>
//#include <sys/stat.h>

int main(int argc, char const *argv[]){
	FILE *entrada;
	int largoArchivo;
	entrada = fopen(argv[1],"r");
	fseek(entrada, 0, SEEK_END); // seek to end of file
	largoArchivo = ftell(entrada); // get current file pointer
	fseek(entrada, 0, SEEK_SET); // seek back to beginning of file
	// proceed with allocating memory and reading the file
	printf("%d \n",largoArchivo);
	return largoArchivo;
}

