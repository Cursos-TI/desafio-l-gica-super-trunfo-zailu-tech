#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
     printf("Desafio cadastro das cartas\n");
     printf("Novo commit\n");
    // Dados da primeira carta
char estado1[50] , cidade1[50] , codigodaCarta1[50];
 int  populacao1 , opcao;
float area1;
float PIB1;
int PontosTuristicos1;
float densidadePopulacional1;
float PIBperCapita1;

    // Dados da segunda carta
char estado2[50] , cidade2[50] , codigodaCarta2[50];
 int populacao2;
float area2;
float PIB2;
int PontosTuristicos2;
float densidadePopulacional2;
float PIBperCapita2;

      // Entrada de Dados da primeira carta
printf("\n---------------------------\n");
printf("Cadastro da primeira carta");
printf("\n----------------------------\n");

printf("Digite o estado 1: ");
fgets(estado1, sizeof(estado1), stdin);//Lê o Estado
estado1[strcspn(estado1, "\n")] ='\0';

printf("Digite o cóigo da carta: ");
fgets(codigodaCarta1, sizeof(codigodaCarta1), stdin); // Lê o código
codigodaCarta1[strcspn(codigodaCarta1, "\n")] = '\0';
    

printf("Digite o nome da cidade: ");
fgets(cidade1, sizeof(cidade1), stdin); // Lê o nome da cidade
cidade1[strcspn(cidade1, "\n")] = '\0';
    
printf("Digite o numero de população: ");
scanf("%d" , &populacao1); // Lê o numero de habitantes
getchar();

printf("Digite a area em (km): ");
scanf("%f" , &area1); // Lê a área
getchar();

printf("Digite o PIB: ");
scanf("%f" , &PIB1); // Lê o PIB 
getchar();

printf("Digite a quantidde de pontos turísticos: ");
scanf("%d" , &PontosTuristicos1); // Lê a quantidade de pontos turísticos
getchar();
printf("Carta cadastrada com sucesso \n");

    // Entrada de dados da segunda carta
printf("\n-----------------------------\n");
printf("Cadastro da segunda carta");
printf("\n-----------------------------\n");
printf("Digite o estado 2: ");
fgets(estado2, sizeof(estado2), stdin);//Lê o Estado
estado2[strcspn(estado2, "\n")] ='\0';

printf("Digite o cóigo da carta: ");
fgets(codigodaCarta2, sizeof(codigodaCarta2), stdin); // Lê o código
codigodaCarta2[strcspn(codigodaCarta2, "\n")] = '\0';
    
printf("Digite o nome da cidade: ");
fgets(cidade2, sizeof(cidade2), stdin); // Lê o nome da cidade
cidade2[strcspn(cidade2, "\n")] = '\0';
    
printf("Digite o numero de população: ");
scanf("%ld" , &populacao2); // Lê o numero de habitantes
getchar();

printf("Digite a area em (km): ");
scanf("%f" , &area2); // Lê a área
getchar();

printf("Digite o PIB: ");
scanf("%f" , &PIB2); // Lê o PIB 
getchar();

printf("Digite a quantidde de pontos turísticos: ");
scanf("%d" , &PontosTuristicos2); // Lê a quantidade de pontos turísticos
getchar();
printf("Carta cadastrada com sucesso\n ");

// Cálculo da densidade populacional e PIB per Capita
densidadePopulacional1 = populacao1 / area1;
PIBperCapita1 = PIB1 * 1e9/ populacao1;
densidadePopulacional2 = populacao2 / area2;
PIBperCapita2 = PIB2 * 1e9/ populacao2;

//Saída de dados 1 
printf("\n----------------------\n");
printf("Estado: %s\n" , estado1);
printf("Código da carta: %s\n" , codigodaCarta1);
printf("Nome da cidade: %s\n" , cidade1);
printf("População: %d\n" , populacao1); 
printf("Área: %.0f km²\n" , area1);
printf("PIB: %.0f bilhões de reais\n" , PIB1);
printf("Pontos Turísticos: %d\n" , PontosTuristicos1);
printf("Densidade Populacional: %.2f\n" , densidadePopulacional1);
printf("PIB per Capita: %.2f\n" , PIBperCapita1);

//Saída de dados 2
printf("\n----------------------\n");
printf("Estado: %s\n" , estado2);
printf("Código da carta: %s\n" , codigodaCarta2);
printf("Nome da cidade: %s\n" , cidade2);
printf("População: %d\n" , populacao2); 
printf("Área: %.0f km²\n" , area2);
printf("PIB: %.0f bilhões de reais\n" , PIB2);
printf("Pontos Turísticos: %d\n" , PontosTuristicos2);
printf("Densidade Populacional: %.2f\n" , densidadePopulacional2);
printf("PIB per Capita: %.2f\n" , PIBperCapita2);

printf("\nMenu principal\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Populacional\n");
printf("Escolha uma opção para comparar\n");
scanf("%d" ,&opcao); 

switch(opcao){

    case 1:
    printf("\nCOMPARAÇÃO POR POPULAÇÃO\n");
    if(populacao1 > populacao2){ 
     printf("Cidade 1 venceu, com uma população de %d" , populacao1); 
    }else{
        printf("Cidade 2 venceu, com uma população de %d", populacao2);
    }
    break;

    case 2:
    printf("\nCOMPARAÇÃO POR ÁREA\n");
    if(area1 > area2){
        printf("Cidade 1 venceu, com uma área de %.0f" , area1);
    } else {
        printf("Cidade 2 venceu, com uma área de %.0f", area2);
    }
    break;

    case 3:
    printf("\nCOMPARAÇÃO POR PIB\n");
    if(PIB1 > PIB2){
     printf("Cidade 1 venceu, com um PIB de %f\n" , PIB1);
    }else{
         printf("Cidade 2 venceu, com um PIB de %f\n" ,PIB2);

    }
    break;

    case 4:
    printf("\nCOMPARAÇÃO POR PONTOS TURÍSTICOS\n");
    if(PontosTuristicos1 > PontosTuristicos2){
        printf("Cidade 1 venceu, com %d pontos turísticos\n" ,PontosTuristicos1);
    }else{
        printf("Cidade 2 venceu, com %d pontos turísticos\n" ,PontosTuristicos2);
    } 
    break;
    case 5:
    printf("\nCOMPARAÇÃO POR DENSIDADE POPULACIONAL\n");
    if(densidadePopulacional1 < densidadePopulacional2){
        printf("Cidade 1 venceu, com a menor densidade populacional: %f\n" ,densidadePopulacional1);
    } else{
        printf("Cidade 2 venceu, com a menor densidade populacional: %f\n" ,densidadePopulacional2);
    }
    break;
    default:
    printf("Opção inválida!");
    break;
    
   

    }

return 0;
}