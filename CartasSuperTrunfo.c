#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1, estado2;
	char codigo1[10], codigo2[10];
	char nomeCidade1[50], nomeCidade2[50];
	int nPopulacao1, nPopulacao2;
	float area1, area2;
	float pib1, pib2;
	int pTuristico1, pTuristico2;
	
//========= CARTA 1 ===========================	
	printf("DIGITAR DADOS DA CARTA 1:\n");
	printf("Letra do Estado: ");
	scanf("%c",&estado1);
	
	printf("Codigo da carta (letra do estado mais um número): ");
	scanf("%s",codigo1);
	
	printf("Nome da Cidade: ");
	scanf("%s",nomeCidade1);
	
	printf("População da Cidade: ");
	scanf("%d",&nPopulacao1);
	
	printf("Área (km^2): ");
	scanf("%f",&area1);
	
	printf("PIB (em Bilhoes de R$:");
	scanf("%f",&pib1);
	
	printf("Número de pontos turisticos: ");
	scanf("%d",&pTuristico1);

//======== CARTA 2 ============================	

	printf("\nDIGIATAR DADOS DA CARTA 2:\n");
	printf("Letra do Estado: ");
	scanf("%c",&estado2);
	scanf("%c",&estado2); //se não colocar duas vezes o programa pula para o próximo direto (????)

	printf("Codigo da carta (letra do estado mais um número): ");
	scanf("%s",codigo2);
	
	printf("Nome da Cidade: ");
	scanf("%s",nomeCidade2);
	
	printf("População da Cidade: ");
	scanf("%d",&nPopulacao2);
	
	printf("Área (km^2): ");
	scanf("%f",&area2);
	
	printf("PIB (em Bilhoes de R$:");
	scanf("%f",&pib2);
	
	printf("Número de pontos turisticos: ");
	scanf("%d",&pTuristico2);
	
//======= PRINT DADOS DA CARTA 1 ================
	printf("\nCarta 1:\n");
	printf("- Letra do Estado: %c\n",estado1);
	printf("- Código da Carta: %s\n",codigo1);
	printf("- Nome da Cidade: %s\n", nomeCidade1);
	printf("- População: %d\n",nPopulacao1);
	printf("- Área da Cidade: %.2f km2\n",area1);
	printf("- PIB: %.2f\n",pib1);
	printf("- Pontos turisticos: %d\n", pTuristico1);

//======= PRINT DADOS DA CARTA 2 ================
	printf("\nCarta 2:\n");
	printf("- Letra do Estado: %c\n",estado2);
	printf("- Código da Carta: %s\n",codigo2);
	printf("- Nome da Cidade: %s\n", nomeCidade2);
	printf("- População: %d\n",nPopulacao2);
	printf("- Área da Cidade: %.2f km2\n",area2);
	printf("- PIB: %.2f\n",pib2);
	printf("- Pontos turisticos: %d\n", pTuristico2);
	
	
	return 0;
}
