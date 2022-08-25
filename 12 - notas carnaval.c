
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float notas[5],maiorNota,menorNota,soma=0;
	int k,posicaoMaiorNota,posicaoMenorNota;
	
	for(k=0;k<5;k++){
		scanf("%f",&notas[k]);
		if(k==0){
			maiorNota=notas[k];
			menorNota=notas[k];
			posicaoMaiorNota=0;
			posicaoMenorNota=0;
			
		}
		
		if(maiorNota<notas[k]){
			maiorNota=notas[k];
			posicaoMaiorNota=k;
			
		}
		
		if(menorNota>notas[k]){
			menorNota=notas[k];	
			posicaoMenorNota=k;
			
		}
	}
		
	for(k=0;k<5;k++){
		if(k!=posicaoMenorNota && k!=posicaoMaiorNota){
			soma+=notas[k];
		}
	}
	
	printf("\n%.1f",soma);
    return 0;
}
