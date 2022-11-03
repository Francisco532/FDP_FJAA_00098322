#include <stdio.h>

int main(){
    
    int numero = 0;
    
    FILE *positivos = fopen("numeros_positivos.txt", "w");
    FILE *negativos = fopen("numeros_negativos.txt", "w");
    do
    {
        
    if(positivos == NULL)
    {
        printf("No hay positivos");
        return 0;
    }
    
    
        printf("Ingrese un numero ya sea positivo o negativo: ");
        if(numero > 0)
        {
            fprintf(positivos, "%d", numero);
            fprintf(positivos, "\n");
            scanf("%d", &numero);
        }
        else
        {
            
            fprintf(negativos, "%d", numero);
           fprintf(negativos, "\n");
           scanf("%d", &numero);
        }
    }
    while (numero != 0);
    fclose(positivos);
    fclose(negativos);
    return 0;
}