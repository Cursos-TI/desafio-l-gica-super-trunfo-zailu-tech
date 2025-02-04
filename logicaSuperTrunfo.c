#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("Comparação de cartas\n");
    printf("Novo commit\n");

    char estadoA[100] , estadoB[100], cidadeA[100] , cidadeB[100], codigoCartaA[10], codigoCartaB[10];
    long int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontosTuristicosA, pontosTuristicosB;
    float densidadepopulacionalA, densidadepopulacionalB;
    float PibperCaptaA, PibperCaptaB;

    
     printf("Digite um estado: ");
     fgets(estadoA, sizeof(estadoA), stdin); // Lê o código
    estadoA[strcspn(estadoA, "\n")] = '\0'; // Lê uma linha inteira, incluindo espaços

     printf("Digite código: ");
     fgets(codigoCartaA, sizeof(codigoCartaA), stdin); // Lê o código
     codigoCartaA[strcspn(codigoCartaA, "\n")] = '\0'; // Lê uma linha inteira, incluindo espaços

     printf("Digite o nome da cidade A: ");
     fgets(cidadeA, sizeof(cidadeA), stdin); // Lê o código
     cidadeA[strcspn(cidadeA, "\n")] = '\0'; // Lê uma linha inteira, incluindo espaços

     printf("Digite a populacao: ");
     scanf("%ld" ,&populacaoA);

     printf("Digite a área: ");
     scanf("%f" ,&areaA);

     printf("Digite o PIB: ");
     scanf("%f", &pibA);

     printf("Digite a quantidade de pontos turísticos: ");
     scanf("%d", &pontosTuristicosA);

     printf("Digite a densida populacional: ");
     scanf("%f", &densidadepopulacionalA);
 
     printf("Digite o Pib per Capita: ");
     scanf("%f", &PibperCaptaA);

     printf("---------------------\n");
     printf("Digite outro estado: ");
     fgets(estadoB, sizeof(estadoB), stdin); // Lê o código
    estadoB[strcspn(estadoB, "\n")] = '\0'; // Lê uma linha inteira, incluindo espaços

     printf("Digite código: ");
     fgets(codigoCartaB, sizeof(codigoCartaB), stdin); // Lê o código
    codigoCartaB[strcspn(codigoCartaB, "\n")] = '\0'; // Lê uma linha inteira, incluindo espaços


     printf("Digite o nome da cidade B: ");
     fgets(cidadeB, sizeof(cidadeB), stdin); // Lê o código
    cidadeB[strcspn(cidadeB, "\n")] = '\0'; // Lê uma linha inteira, incluindo espaços


     printf("Digite a populacao: ");
     scanf("%d" ,&populacaoB);

     printf("Digite a área: ");
     scanf("%f" ,&areaB);

     printf("Digite o PIB: ");
     scanf("%f", &pibB);

     printf("Digite a quantidade de pontos turísticos: ");
     scanf("%d", &pontosTuristicosB);

     printf("Digite a densida populacional: ");
     scanf("%f", &densidadepopulacionalB);
 
     printf("Digite o Pib per Capita: ");
     scanf("%f", &PibperCaptaB);
      
      printf("-----------------------\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
     if(populacaoA > populacaoB) {
    printf("A cidade vencedora é: %s, com a maior de população\n", populacaoA);
    } else {
         printf("A cidade vencedora é: %s, com a maior população\n",populacaoB);
    } 

    if(PibperCaptaA > PibperCaptaB){
        printf("A cidade vencedora é: %s, com o maior Pib per capita\n", cidadeA);

    } else {
     printf("A cidade vencedora é: %s, com maior Pib per capita\n", cidadeB);
    } 



    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
