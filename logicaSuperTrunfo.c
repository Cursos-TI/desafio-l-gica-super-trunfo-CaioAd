#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1, estado2;
	char codigo1[50], codigo2[50], cidade1[50], cidade2[50];
	int populacao1, populacao2, pontos1, pontos2;
	float area1, area2, pib1, pib2;
	float denpop1, denpop2, pibcap1, pibcap2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
	printf("\n PRIMEIRA CARTA \n");

	printf("Estado (A-H):");
	scanf(" %c", &estado1);

	printf("Código:");
	scanf("%s", codigo1);

	printf("Nome da Cidade:");
	scanf("%s", cidade1);

	printf("População:");
	scanf("%d", &populacao1);
	
	printf("Área em km²:");
	scanf("%f", &area1);

	printf("PIB:");
	scanf("%f", &pib1);

	printf("Número de Pontos Turísticos:");
	scanf("%d", &pontos1);


	printf("\n SEGUNDA CARTA\n");

	printf("Estado (A-H):");
	scanf(" %c", &estado2);

	printf("Código:");
	scanf("%s", codigo2);

	printf("Nome da Cidade:");
	scanf("%s", cidade2);

	printf("População:");
	scanf("%d", &populacao2);
	
	printf("Área em km²:");
	scanf("%f", &area2);

	printf("PIB:");
	scanf("%f", &pib2);

	printf("Número de Pontos Turísticos:");
	scanf("%d", &pontos2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    printf("\n Comparação de cartas (Atributo: população): \n");

    printf("Carta 1 - %s (%c): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, populacao2);
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    if (populacao1 < populacao2) {
        printf("REsultado: Carta 1 (%s) Venceu!", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) Venceu!", cidade2);
    }
    return 0;
}
