//Francisco Javier Alas Alas 00098322

#include <stdio.h>
#include <string.h>


int main(){
    
    //declaracion de variables
    char palabra[100];
    int tam = 0;
    int igual = 1;
    printf("Escriba la palabra: ");  //Mensaje en pantalla 
    scanf("%s", &palabra);           //asignandole valor a la variable

    tam = strlen(palabra);           //asignandole el tamaño de la palabra a la variable tam
    //procedimiento
    for (int i = 0; i < tam; i++)
   {
       if (palabra[i] != palabra[tam - i - 1]) 
       {
           igual = 0;
        }
   } 
   
    //verificador 
    if (igual == 1)
    {
    printf("Si es Palindroma");
    }  
    else 
    printf("No es Palindroma");
    
    
    
    
    
    
    return 0;
}

