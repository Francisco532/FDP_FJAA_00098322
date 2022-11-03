#include <stdio.h>

int main(){
    
    char frase[30];
    int vocal_a=0, vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0;
    

    printf("Digite una frase: ");
    scanf("%s", &frase[30]);


    for(int i=0; i<30; i++){

        switch(frase[i]){
            case 'a': 
            printf("vocal_a"); 
            scanf("%d", &i);
            break;
            case 'e': 
            printf("vocal_e"); 
            break;
            case 'i': 
            printf("vocal_i");
            break;
            case 'o':
            printf("vocal_o"); 
            break;
            case 'u': 
            printf("vocal_u\n"); 
            break;
        }

    }

    printf("Las veces que aparece la vocal a son: %d \n", vocal_a);
    printf("Las veces que aparece la vocal e son: %d \n", vocal_e);
    printf("Las veces que aparece la vocal i son: %d \n", vocal_i);
    printf("Las veces que aparece la vocal o son: %d \n", vocal_o);
    printf("Las veces que aparece la vocal u son: %d \n", vocal_u);
    
    return 0;

}