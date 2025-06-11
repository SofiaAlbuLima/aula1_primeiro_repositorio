#include <stdio.h>
#include <string.h>

int main(){
    char placa[11];
    scanf("%10s", &placa);

    char alfabeto[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int valido = 1;
    int letra_valida = 0;
    
    if(strlen(placa) == 8 || strlen(placa) == 7){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 26; j++){
                if(placa[i] == alfabeto[j]){
                    letra_valida++;
                    break;
                }
            }
        }
        if(letra_valida != 3){
                valido = 0;
        }

        if(strlen(placa) == 8){
            if(placa[3] != '-'){
                valido = 0;
            }
            for(int k = 4; k < 8; k++){
                if(placa[k] < '0' || placa[k] > '9'){
                    valido = 0;
                }
            }
        }else{
            valido = 2;
            if (placa[3] < '0' || placa[3] > '9' ||
                placa[5] < '0' || placa[5] > '9' ||
                placa[6] < '0' || placa[6] > '9') {
                valido = 0;
            }
            letra_valida = 0;
                for(int j = 0; j < 26; j++){
                    if(placa[4] == alfabeto[j]){
                        letra_valida = 1;
                        break;
                    }
                }
                if(!letra_valida){
                    valido = 0;
                }
        }
    }else{
        valido = 0;
    }

    printf("%d\n", valido);  

    return 0;
}