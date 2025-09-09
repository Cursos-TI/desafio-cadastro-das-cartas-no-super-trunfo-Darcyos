#include <stdio.h>
int main(){
    ///Bloco de variaveis onde conterá as informações das duas cartas. está dividido da seguinte forma: a primeira carta tem a terminação "1" e a segunda carta tem a terminação "2"
    ///Todas as variaveis do tipo inteiro estão na linha abaixo(linha 6)
    int populacao1, pontos_turisticos1, numero1;
    int populacao2, pontos_turisticos2, numero2;
    ///Todas as variaveis do tipo Char estão na linha abaixo(linha 8)
    char estado1[3], codigo1[5], cidade1[50];
    char estado2[3], codigo2[5], cidade2[50];
    ///Todas as variaveis do tipo float estão na linha abaixo(linha 10)
    float area1, pib1;
    float area2, pib2;
    ///1º bloco: faz a apresentação do sistema e faz leitura e gravação de todos os dados da primeira carta
    printf("Olá, seja bem vindo ao Super trunco! \nPor favor  Siga as intruções a baixo para iniciarmos o jogo!");
    printf("para iniciarmos, vamos preencher os dados da primeira carta. Por favor digite uma letra entra 'A' e 'H' para representar um estado brasileiro: ");
    ///a linha a baixo está recebendo os dados e transformando-os em string que serão salvos na variavel estado1
    scanf("%s", estado1);
    printf("Agora digite o codigo para identificar sua carta. escolha a letra que representa seu estado seguido de um numero entre 01 a 04. Por exemplo A01: ");
    ///a linha a baixo está recebendo os dados e transformando-os em string que serão salvos na variavel codigo
    scanf("%s", codigo1);
    printf("Agora digite o nome da cidade que você escolheu: ");
    ///a linha a baixo está recebendo os dados e transformando-os em string que serão salvos na variavel cidade1
    scanf(" %[^\n]", cidade1);
    printf("Agora digite a população aproximada desssa cidade: ");
    ///a linha a baixo está recebendo os dados e transformando-os em numero inteiro que serão salvos na variavel populacao1
    scanf("%d", &populacao1);
    printf("Agora digite a area em km² aproximada desssa cidade: ");
    ///a linha a baixo está recebendo os dados e transformando-os em float que serão salvos na variavel area1
    scanf("%f", &area1);
    printf("Agora digite o numero do pip aproximado desssa cidade: ");
    ///a linha a baixo está recebendo os dados e transformando-os em float que serão salvos na variavel pib1
    scanf("%f", &pib1); 
    printf("Agora digite o numero de pontos turisticos aproximado desssa cidade: ");
    ///a linha a baixo está recebendo os dados e transformando-os em numero inteiro que serão salvos na variavel pontos_turisticos1
    scanf("%d", &pontos_turisticos1);

    ///variaveis que fazem o calculo da densidade populacional e renda per capta da primeira carta
    float densidade_populacao1 = populacao1 / area1;
    float per_capita1 = pib1/ populacao1;
    

    ///2º bloco: faz a leitura e gravação de todos os dados da segunda carta
    printf("Perfeito! agora vamos realizar o preenchimento dos dados da segunda carta.\nPara iniciarmos digite uma letra de 'A' a 'H' para indicar o estado escolhido: ");
    ///a linha a baixo está recebendo os dados e transformando-os em string que serão salvos na variavel estado2
    scanf(" %s", estado2);
    printf("Agora digite o codigo para identificar sua carta. escolha a letra que representa seu estado seguido de um numero entre 01 a 04. Por exemplo A01: ");
    ///a linha a baixo está recebendo os dados e transformando-os em string que serão salvos na variavel codigo
    scanf("%s", codigo2);
    printf("Agora digite o nome da cidade que você escolheu: ");
    ///a linha a baixo está recebendo os dados e transformando-os em string que serão salvos na variavel cidade1
    scanf(" %[^\n]", cidade2);
    printf("Agora digite a população aproximada desssa cidade: ");
    ///a linha a baixo está recebendo os dados e transformando-os em numero inteiro que serão salvos na variavel populacao1
     scanf("%d", &populacao2);
    printf("Agora digite a area em km² aproximada desssa cidade: ");
    ///a linha a baixo está recebendo os dados e transformando-os em float que serão salvos na variavel area2
    scanf("%f", &area2);
    printf("Agora digite o numero do pip aproximado desssa cidade: ");
    ///a linha a baixo está recebendo os dados e transformando-os em float que serão salvos na variavel pib2
    scanf("%f", &pib2);
    printf("Agora digite o numero de pontos turisticos aproximado desssa cidade: ");
    ///a linha a baixo está recebendo os dados e transformando-os em numero inteiro que serão salvos na variavel pontos_turisticos2
    scanf("%d", &pontos_turisticos2);

    ///variaveis que fazem o calculo da densidade populacional e renda per capta da segunda carta
    float densidade_populacao2 = populacao2 / area2;
    float per_capita2 = pib2/ populacao2;


    printf("Otimo! Agora que ja temos todos os dados necessarios irei listar as duas cartas para você: ");
    ///prints que irão mostrar a primeira carta que o usuario preencheu. Esse bloco de prints está contendo todas as variaveis terminadas em "1" que estão representando a primeira carta
    printf("Carta 1\n");
    printf("Estado: %s \n", estado1);
    printf("codigoda carta: ", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Area: %.2f KM²\n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos1);
    printf("Densidade Populacional:: %d hab/KM²\n", densidade_populacao1);
    printf("PIB per Capita: R$ %d \n", per_capita1);
    printf("----------------------------\n");
    ///prints que irão mostrar a segunda carta que o usuario preencheu. Esse bloco de prints está contendo todas as variaveis terminadas em "2" que estão representando a segunda carta
    printf("Carta 2\n");
    printf("Estado: %s \n", estado2);
    printf("codigoda carta: ", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Area: %.2f KM²\n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacionala: %.2f hab/KM²\n", densidade_populacao2);
    printf("PIB per Capita: R$ %.2f \n", per_capita2);
    
    ///Bloco de variaveis e logica para calcular o vencedor da rodada
    float super_poder1, super_poder2;

    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + per_capita1 + (1.0 / densidade_populacao1);

    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + per_capita2 + (1.0 / densidade_populacao2);

    char c_populacao[20], c_area[20], c_pib[20], c_pontos_turisticos[20], c_densidade[20], c_percapita[20], c_poder[20]; 
    
    // Comparação População
    if (populacao1 > populacao2) {
        strcpy(c_populacao, "Carta 1 venceu (1)");
    } else{
        strcpy(c_populacao, "Carta 2 venceu (0)");
    } 

    // Comparação Área
    if (area1 > area2) {
        strcpy(c_area, "Carta 1 venceu (1)");
    } else {
        strcpy(c_area, "Carta 2 venceu (0)");
    } 

    // Comparação PIB
    if (pib1 > pib2) {
        strcpy(c_pib, "Carta 1 venceu (1)");
    } else {
        strcpy(c_pib, "Carta 2 venceu (0)");
    } 

    // Comparação Pontos turísticos
    if (pontos_turisticos1 > pontos_turisticos2) {
        strcpy(c_pontos_turisticos, "Carta 1 venceu (1)");
    } else {
        strcpy(c_pontos_turisticos, "Carta 2 venceu (0)");
    }

    // Comparação Densidade Populacional (MENOR VENCE)
    if (densidade_populacao1 < densidade_populacao2) {
        strcpy(c_densidade, "Carta 1 venceu (1)");
    } else {
        strcpy(c_densidade, "Carta 2 venceu (0)");
    } 

    // Comparação PIB per Capita
    if (per_capita1 > per_capita2) {
        strcpy(c_percapita, "Carta 1 venceu (1)");
    } else {
        strcpy(c_percapita, "Carta 2 venceu (0)");
    }

    // Comparação Super poder
    if (super_poder1 > super_poder2) {
        strcpy(c_poder, "Carta 1 venceu (1)");
    } else {
        strcpy(c_poder, "Carta 2 venceu (0)");
    }

   

    // ---- Impressão dos resultados ----
    printf("\n===== Comparação de Cartas =====\n");
    printf("População: %s\n", c_populacao);
    printf("Área: %s\n", c_area);
    printf("PIB: %s\n", c_pib);
    printf("Pontos turísticos: %s\n", c_pontos_turisticos);
    printf("Densidade Populacional: %s\n", c_densidade);
    printf("PIB per capita: %s\n", c_percapita);
    printf("Super Poder: %s\n", c_poder);





    return 0;
}



///Sobre o projeto:

///first commit: logica do desafio iciante criada com as variaveis e logicas solicitadas pelo poponente.
///commit-aventureiro: nesse desafio inseri as variaveis e a logica para renda per capita e densidade populacional, refiz a logica para alterar o tipo de print da variavel cidade para ser exibido nomes compostos caso a cidade tenha mais de um numero
///commit-mestre: implementação da logica para calcular o ganhador.