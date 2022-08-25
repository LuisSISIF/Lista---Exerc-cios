#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void geraVet(int v[], int n){
	int i;
	srand(time(NULL)); // inicializa gerador
	for(i=0;i<n;i++)
		v[i]=rand()%20; 
}
//---------------------
void leiaVetor(int v[],int n){
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&v[i]);
}
//--------------------
void printVet(int v[], int n){
	int i;
	for(i=0;i<n;i++){
		
		if(i>=1){ 
			printf("|");
		}
		if(v[i]<10)
			printf("   %d   ",v[i]);
		else if(v[i]<100)
				printf("  %d  ",v[i]);
			else
			printf(" %d ",v[i]);
	}
		
	printf("\n");	
}
//----------------------
int somaVet(int v[], int n){
	int i,soma=0;
	for(i=0;i<n;i++)
		soma+=v[i];
	return soma;	
}
//---------------------------
int maiorVet(int v[], int n){
	int i, maior = v[0];
	for(i=1;i<n;i++){
		if(v[i]> maior)
			maior = v[i];
	}// fim for		
	return maior;		
}
int menorVet(int v[], int n){
	int i, menor = v[0];
	for(i=1;i<n;i++){
		if(v[i]< menor)
			menor = v[i];
	}// fim for		
	return menor;		
}
int exe4(int v[],int n){
	int i,impar,par;
		for(i=1;i<n;i++){
				if(v[i]%2 != 0)
					impar++;
				
				else
					par++;
		}	
		printf("\n Quantidade de Elementos Impares: %d",impar);
		printf("\n Quantidade de Elementos Pares: %d",par);
}

int exe6(int v[], int n){
	int i,contem = 0;
	int j = 0;
	int posicao[j];
	printf("\n Digite Um Numero para ser Verificado: ");
	scanf("%d",&contem);
	for(i=0;i<n;i++){
		if(v[i] == contem){
			posicao[j] = i;
			j = j + 1;
		}	
	}
	if(j==0){
		printf("\nEsse Elemento não se encontra No Vetor.");
		return;
	}
	
	printf("Esse Elemento Aparece %d Vezes Nas Posições: ",j);
	printVet(posicao, j);
}
int multvet(int v[], int n){
	int v2[100],i;
	int res[100];
	geraVet(v2,n);
	printVet(v2,n);
	for(i=0;i<n;i++){
		res[i] = v[i] * v2[i];
		
	}
	printf("\nResultado Das Multiplicações: \n");
	printVet(res,n);
}
char complem(char vetTXT[]){
	int i,j;
	char complementar[50];
	strupr(vetTXT);
	j = strlen(vetTXT);
	for(i=0;i<j;i++){
		if(vetTXT[i] == 'A'){
			complementar[i] = 'T';
		}
		else if(vetTXT[i] == 'C'){
			complementar[i] = 'G';
		}
	}
	printf(" Sequencia Digitada: ");
	printf("  %s\n",vetTXT);
	printf("Sequencia Complementar: \n");
	printf("  %s\n",complementar);
}
int exe10(){
	int n,i,dado[n],j,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0;
	printf("\n Quantidade de Vezes para rolar o Dado: ");
	scanf("%d",&n);
		srand(time(NULL));
		for(i=0;i<n;i++){
			dado[i]=rand()%7;
				if(dado[i] == 1){
					d1 = d1 + 1;
				}
				else if(dado[i] == 2){
					d2 = d2 + 1;
				}
				else if(dado[i] == 3){
					d2 = d3 + 1;
				}
				else if(dado[i] == 4){
					d2 = d4 + 1;
				}
				else if(dado[i] == 5){
					d5 = d5 + 1;
				}
				else if(dado[i] == 6){
					d6 = d6 + 1;
				}
		}
	

	printf("\n Vezes que cairam cada Face do Dado: ");
	printf("\n 1: %d Vezes",d1);
	printf("\n 2: %d Vezes",d2);
	printf("\n 3: %d Vezes",d3);
	printf("\n 4: %d Vezes",d4);
	printf("\n 5: %d Vezes",d5);
	printf("\n 6: %d Vezes",d6);
	
}
char exe11(char vetTXT[]){
	int i,n;
	n = strlen(vetTXT);
	printf("Mensagem decodificada: ");
	for(i=0;i<n;i++){
		if(vetTXT[i]!='p'){
			printf("%c", vetTXT[i]);
		}
		else if (vetTXT[i-1] == 'p'&& vetTXT[i+1]== 'p'){
			printf("%c",vetTXT[i]);
		}
		
	}
}
char exe8(char vetTXT[]){
	int i,n,j;
	char complementar[100],temp,a,b;
	n = strlen(vetTXT);
	printf("  \nTexto Digitado: ");
	printf("  \n%s ",vetTXT);
	j=n-1;
	for(i=0;i<n;i++){

	complementar[i] = vetTXT[j];
	j--;
	}
	printf("Texto Invertido: \n");
	printf("  %s\n",complementar);
}
