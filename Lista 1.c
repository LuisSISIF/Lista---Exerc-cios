#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <string.h>
#include "vetlib.h"

int main(){
	char vetTXT[100];
	int vet[100], vet2[100], n, escolha =1,contem,i;
	setlocale(LC_ALL, "Portuguese");

while (escolha!=0){
	system("cls");
	printf(" Lista De Exercícios L.P 1");
	printf("\n\n ----------------------- ");
	printf("\n  1 - Exercicios  1 ");
	printf("\n  2 - Exercicios  2 ");
	printf("\n  3 - Exercicios  3 ");
	printf("\n  4 - Exercicios  4 ");
	printf("\n  5 - Exercicios  5 ");
	printf("\n  6 - Exercicios  6 e 9");
	printf("\n  7 - Exercicios  7 ");
	printf("\n  8 - Exercicios  8 ");
	printf("\n 10 - Exercicios 10 ");
	printf("\n 11 - Exercicios 11 ");
	printf("\n\n Escolha uma opcao: ");
	scanf("%d",&escolha);


// estrutura switch
switch (escolha) {

	case 1:
	{
		system("cls");
		printf("\n\n Opcao escolhida: 1 ");
		printf("\n Qtde de elementos do vetor: ");
		scanf("%d",&n);
		geraVet(vet,n);
		printVet(vet,n);
		printf("\nSoma do vetor: %d\n",somaVet(vet,n));
		getch();
		break;
	}

	case 2:
	{
		system("cls");
		printf("\n\n Opcao escolhida: 2 ");
		printf("\n Qtde de elementos do vetor: ");
		scanf("%d",&n);
		geraVet(vet,n);
		printVet(vet,n);
		printf("\n Maior Elemento: %d\n",maiorVet(vet,n));
		getch();
		break;
	}

	case 3:
	{
		system("cls");
		printf("\n\n Opcao escolhida: 3 ");
		printf("\n Qtde de elementos do vetor: ");
		scanf("%d",&n);
		geraVet(vet,n);
		printVet(vet,n);
		printf("\n Menor Elemento: %d\n",menorVet(vet,n));
		getch();
		break;
	}

	case 4:
	{
		system("cls");
		printf("\n\n Opcao escolhida: 4 ");
		printf("\n Qtde de elementos do vetor: ");
		scanf("%d",&n);
		geraVet(vet,n);
		printVet(vet,n);
		exe4(vet,n);
		getch();
		break;
	}
	
		case 5:
	{
		system("cls");
		printf("\n\n Opcao escolhida: 5 ");
		printf("\nEntre com a Sequencia do DNA: ");
		fflush(stdin);
		gets(vetTXT);
		complem(vetTXT);
		getch();
		break;
	}
		
		case 6:
	{
		system("cls");
		printf("\n\n Opcao escolhida: 6 \n");
		printf("\n Qtde de elementos do vetor: ");
		scanf("%d",&n);
		geraVet(vet,n);
		printVet(vet,n);
		exe6(vet,n);
		getch();
		break;
	}
	
	case 7:
	{
		system("cls");
		printf("\n\n Opcao escolhida: 7 \n");
		printf("\n Defina Os Elementos Do Primeiro Vetor E O Segundo Será Gerado Aleatóriamente.");
		printf("\n-----------------------------------------------------------------------------\n");
		printf("\n Qtde de elementos do vetor: ");
		scanf("%d",&n);
		printf("\n Digite Os Elementos Do Primeiro Vetor: ");
		leiaVetor(vet,n);
		printf("\n Primeiro Vetor: \n");
		printVet(vet,n);
		printf("\n Segundo Vetor: \n");
		multvet(vet,n);
		
		getch();
		break;
	}
	
	case 8:
		{
		system("cls");
		printf("\n\n Opcao escolhida: 7 \n");
		printf("\n Defina Os Elementos Do Primeiro Vetor E O Segundo Será Gerado Aleatóriamente.");
		printf("\n-----------------------------------------------------------------------------\n");
		printf("Digite o texto do vetor.\n");
		fflush(stdin);
		gets(vetTXT);
		exe8(vetTXT);
		
		getch();
		break;	
		}
	
		case 10:
		{
		system("cls");
		printf("\n\n Opcao escolhida: 10 \n");
		exe10();
		

		getch();
		break;
	}
	
	case 11:
	{
		system("cls");
		printf("\n\n Opcao escolhida: 11 \n");
		printf("\n Decodificação de linguagem de padrão P(lingua do P).");
		printf("\n-------------------------------------------------------------------------------\n");
		printf("\n| A mensagem deve possuir o caractere p antes e depois de todos os caracteres.|");
		printf("\n-------------------------------------------------------------------------------\n");
		printf("Mensagem codificada: ");
		fflush(stdin);
		gets(vetTXT);
		exe11(vetTXT);
		
		getch();
		break;
	}
	
	default:
	{
		system("cls");
		if( escolha==90)
		{
			continue;
		}
		printf("\n\n Nenhuma opcao foi escolhida ");
		break;
	}

}

}

	if( escolha==0)
	{
		printf("\n\n O Programa foi fechado");
		return 0;
		getch(); 
	}
}

