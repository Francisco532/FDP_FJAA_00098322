//Francisco Javier Alas Alas 00098322 

#include <stdio.h>
#include <string.h>

int main()
{
    char PalabraClave[60], Letra;
    printf("Ingresa Una Oracion: ");                                                //Aqui le pide al usuario que ingese una oracion
    fgets(PalabraClave, sizeof(PalabraClave), stdin);
    
    printf("Ingrese la Palabra a buscar: ");                                
    scanf("%s", &Letra);                                                            //Aqui se le solicita al Usuario que ingrese la palabra a buscar
    
    if (strstr(PalabraClave,"Hola")) puts("Su palabra si existe en esta oracion"); //Aqui se busca la palaba clave
    
    
    else
    printf("Su palabra no existe en esta oracion");
    return 0;
}