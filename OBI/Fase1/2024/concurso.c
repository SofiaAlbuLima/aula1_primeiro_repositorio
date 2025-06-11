#include <stdio.h>
int main(){
    int N, K, C;
    scanf("%d %d", &N, &K);
    int notas[N];

    if(K < 1 || N > 500 || K > N){
        printf("erro\n");
        return 0;
    }

    for(int i = 0; i < N; i++){ 
        scanf("%d", &notas[i]);

        if(notas[i] < 1 || notas[i] > 100){
            printf("erro2\n");
            return 0;
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N - i - 1; j++){
            if(notas[j] < notas[j+1]){
                int temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
        }
    }
    
    printf("nota de corte: %d", notas[K-1]);
    

    return 0;
}