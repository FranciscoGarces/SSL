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