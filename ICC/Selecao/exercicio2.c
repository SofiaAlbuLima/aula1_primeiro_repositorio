#include <stdio.h>
int main(){
    int codigo_servico, periodo_do_dia, idade;
    float valor_final;
    scanf("%d %d %d", &codigo_servico, &periodo_do_dia, &idade);
    switch:
    
    if(periodo_do_dia == 1){
        if(codigo_servico == 1){
            valor_final += 4;
        } else if(codigo_servico == 2){
            valor_final += 4.5;
        } else if(codigo_servico == 3){
            valor_final += 3.8;
        } else if(codigo_servico == 4){
            valor_final += 4.3;
        }
    }else if(periodo_do_dia ==2){
        if(codigo_servico == 1){
            valor_final += 5;
        } else if(codigo_servico == 2){
            valor_final += 6;
        } else if(codigo_servico == 3){
            valor_final += 5.2;
        } else if(codigo_servico == 4){
            valor_final += 5.5;
        }
    }
    if(idade > 0 && idade < 6){
        valor_final = 0;
    } else if(idade >= 6 && idade <= 17){
        valor_final -= 50/100;
    } else if(idade >= 60){
        valor_final -= 75/10;
    }
    printf("valor final: %f", valor_final);
}