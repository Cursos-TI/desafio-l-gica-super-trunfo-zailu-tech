#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(){

     printf("Comparação das cartas\n");

    // Dados das Cartas
char estado1[50] , estado2[50] , cidade1[50] , cidade2[50], codigodaCarta1[50], codigodaCarta2[50];
 int  populacao1 , populacao2, numerocomputador, numeroJogador;
float area1, area2;
float PIB1, PIB2;
int PontosTuristicos1, PontosTuristicos2;
float densidadePopulacional1, densidadePopulacional2;
float PIBperCapita1, PIBperCapita2;

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
    

printf("Digite o nome da cidade 1: ");
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
scanf("%d" , &populacao2); // Lê o numero de habitantes
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

// inicialização do geradores de números aleatórios
srand(time(0));
    numerocomputador= rand() % 4 + 1; 

// Menu de escolha para o usuário
printf("\nBem-Vindo ao Menu principal De Comparação\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Populacional\n");
printf("6. Sair do jogo\n");
printf("Escolha uma opção para comparar: ");
scanf("%d" ,&numeroJogador);

printf("\nO computador escolheu a opção: %d\n", numerocomputador);
     

switch(numeroJogador){

    case 1:
    printf("\n1.COMPARAÇÃO POR POPULAÇÃO\n");
    if(populacao1 > populacao2){ 
     printf("Cidade 1 venceu, com uma população de %d\n" , populacao1); 
    }else if (populacao1 == populacao2)
    {
        printf("Empate, ambas as cidades têm uma população de: %d" , populacao1);
    } else {
        printf("Cidade 2 venceu, com uma população de %d\n" , populacao1);
    }
    
    break;

    case 2:
    printf("\n2.COMPARAÇÃO POR ÁREA\n");
    if(area1 > area2){
        printf("Cidade 1 venceu, com uma área de %.0f M²\n" , area1);
    } else if (area1 == area2)
    {
        printf("Empate, ambas as cidades têm uma área de: %0.f M²\n" , area1);
    } else {
        printf("Cidade 2 venceu, com uma área de %.0f M²\n", area2);
    }
    
    break;

    case 3:
    printf("\n3.COMPARAÇÃO POR PIB\n");
    if(PIB1 > PIB2){
     printf("Cidade 1 venceu, com um PIB de %f bilhões\n" , PIB1);
    }else if (PIB1 == PIB2)
    {
        printf("Empate, ambas as cidades têm um PIB de: %f bilhões\n" ,PIB1);
    } else{
         printf("Cidade 2 venceu, com um PIB de %f bilhões\n" ,PIB2);

    } 

    
    break;

    case 4:
    printf("\n4.COMPARAÇÃO POR PONTOS TURÍSTICOS\n");
    if(PontosTuristicos1 > PontosTuristicos2) {
        printf("Cidade 1 venceu, com %d pontos turísticos\n" ,PontosTuristicos1);
    }else if (PontosTuristicos1 == PontosTuristicos2)
    {
        printf("Empate, ambas as cidades tem: %d pontos turísticos\n" ,PontosTuristicos1);
    } else {
         printf("Cidade 2 venceu, com %d pontos turísticos\n" ,PontosTuristicos2);
    } 
    break;

    case 5:
    printf("\n5.COMPARAÇÃO POR DENSIDADE POPULACIONAL\n");
    if(densidadePopulacional1 < densidadePopulacional2){
        printf("Cidade 1 venceu, com a menor densidade populacional: %f\n" ,densidadePopulacional1);
    } else if (densidadePopulacional1 == densidadePopulacional2)
    {
        printf("Empate, ambas as cidades têm uma densidade populacional de: %f\n" , densidadePopulacional1);
    } else{
        printf("Cidade 2 venceu, com a menor densidade populacional de: %f\n" ,densidadePopulacional2);
    }
    
    break;
    case 6:
    printf("Saindo.....");
    break;
    default:
    printf("Opção inválida!");
    break;
     
     }
   

switch(numerocomputador){

    case 1:
    printf("\n1.COMPARAÇÃO POR POPULAÇÃO\n");
    if(populacao1 > populacao2){ 
     printf("Cidade 1 venceu, com uma população de %d\n" , populacao1); 
    }else{
        printf("Cidade 2 venceu, com uma população de %d\n", populacao2);
    }
    break;

    case 2:
    printf("\n2.COMPARAÇÃO POR ÁREA\n");
    if(area1 > area2){
        printf("Cidade 1 venceu, com uma área de %.0f M²\n" , area1);
    } else {
        printf("Cidade 2 venceu, com uma área de %.0f M²\n", area2);
    }
    break;

    case 3:
    printf("\n3.COMPARAÇÃO POR PIB\n");
    if(PIB1 > PIB2){
     printf("Cidade 1 venceu, com um PIB de %f bilhões\n" , PIB1);
    }else{
         printf("Cidade 2 venceu, com um PIB de %f bilhões\n" ,PIB2);

    }
    break;

    case 4:
    printf("\n4.COMPARAÇÃO POR PONTOS TURÍSTICOS\n");
    if(PontosTuristicos1 > PontosTuristicos2){
        printf("Cidade 1 venceu, com %d pontos turísticos\n" ,PontosTuristicos1);
    }else{
        printf("Cidade 2 venceu, com %d pontos turísticos\n" ,PontosTuristicos2);
    } 
    break;
    case 5:
    printf("\n5.COMPARAÇÃO POR DENSIDADE POPULACIONAL\n");
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
     


    
     


