#include <stdio.h>
int main(){
    char cartas_inseridas[157]; 
    scanf(" %156[^\n]", cartas_inseridas);
    //ler cada carta individualmente
    int carta = 0;
    int contadorC = 0;
    int contadorE = 0;
    int contadorU = 0;
    int contadorP = 0;

    if(cartas_inseridas[carta] == '\0'){
        printf("erro: sem cartas\n");
        return 0;
    }

    for(int j = 0; j < 52; j++){
            if(cartas_inseridas[carta] == '\0'){
                printf("acabou as cartas");
                break;
            }
        printf("carta %d:", j+1);
            int valor_carta0 = cartas_inseridas[carta] - '0';
            int valor_carta1 = cartas_inseridas[carta+1] - '0';

            if(cartas_inseridas[carta] == '0'){
                if(valor_carta1 < 1 || valor_carta1 > 9){
                        printf("erro: numero inexistente da carta1\n");
                        return 0;
                }else{
                    printf(" %d%d ", valor_carta0,valor_carta1);

                    // for(){
                        
                    // }
                }
            }else if(cartas_inseridas[carta] == '1'){
                if(valor_carta1 < 0 || valor_carta1 > 3){
                        printf("erro: numero inexistente da carta2\n");
                        return 0;
                }else{
                    printf(" %d%d ", valor_carta0,valor_carta1);
                }
            }
            else{
                printf("erro: numero inexistente da carta3\n");
                return 0;
            }

            if(cartas_inseridas[carta+2] == 'C'){
                printf("C\n");
                contadorC++;
            }else if(cartas_inseridas[carta+2] == 'E'){
                printf("E\n");
                contadorE++;
            }else if(cartas_inseridas[carta+2] == 'U'){
                printf("U\n");
                contadorU++;
            }else if(cartas_inseridas[carta+2] == 'P'){
                printf("P\n");
                contadorP++;
            }else{
                printf("erro: naipe errado\n");
                return 0;
            }

        carta = carta + 3;
    }
}