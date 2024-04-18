#include<stdio.h>
main(){
		float A, Pi = 3,14, r;
		
		printf("\nDigite o valor do raio: \n");
		scanf("%f", &r);
		
		if(r > 0){
			A = Pi * (r*r);
			printf("A area do circulo eh: %.2f", A);
		}else{
			printf("valor invalido");
		}
}
