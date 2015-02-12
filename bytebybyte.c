#include <stdio.h>

void main(int argc, char const *argv[]){
	FILE *myfile;
    int i;
    unsigned char k[4];
    myfile=fopen(argv[1],"r");
    i=0;
    for(i=0; i<4; i++){
       fread(&k[i],1,1,myfile);
    }
    for(i=0; i<4; i++){
       printf("%c\n", k[i]);
    }                       
}