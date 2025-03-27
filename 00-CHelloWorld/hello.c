/*
* hello.c
* Archivo que redirecciona un output que dice Hello, World! a un archivo txt
* Francisco Garcés Bertello
* 20250327
*/
#include <stdio.h>


int main(){
    FILE *fp = fopen("output.txt", "w");
    if(!fp){
        return 1;
    }
    fprintf(fp, "Hola mundo!");
    fclose(fp);
    return 0; 
}
