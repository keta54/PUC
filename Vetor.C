#include<stdio.h>
int main(){
    int vetor[3];

    for(int i =0; i < 3; i++){
        printf("digite o numeros\n");
        scanf("%d", &vetor[i]);
    }
        printf("seus 3 numeros foram ");
    for(int i =0; i <3; i++){
        printf("%d ", vetor[i]);
    }

    

return 0;
}