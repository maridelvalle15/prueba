#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
void main(){
	setlocale(LC_ALL, "");
	wchar_t o;
	o = L'ó';
	wprintf(L"%ls",o);
}
// Hola