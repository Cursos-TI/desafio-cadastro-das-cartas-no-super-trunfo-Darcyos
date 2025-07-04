#include <stdio.h>
int main(){
    ///Bloco de variaveis onde conterá as informações das duas cartas. está dividido da seguinte forma: a primeira carta tem a terminação "1" e a segunda carta tem a terminação "2"
    ///Todas as variaveis do tipo inteiro estão na linha abaixo(linha 6)
    int populacao1, pontos_turisticos1;
    int populacao2, pontos_turisticos2;
    ///Todas as variaveis do tipo Char estão na linha abaixo(linha 8)
    char estado1[3], codigo1[5], cidade1[20];
    char estado2[3], codigo2[5], cidade2[20];
    ///Todas as variaveis do tipo float estão na linha abaixo(linha 10)
    float area1, pib1;
    float area2, pib2;
    ///1º bloco: faz a apresentação do sistema e faz leitura e gravação de todos os dados da primeira carta
    printf("Olá, seja bem vindo ao Super trunco! \nPor favor  Siga as intruções a baixo para iniciarmos o jogo!");
    printf("para iniciarmos, vamos preencher os dados da primeira carta. Por favor digite uma letra entra 'A' e 'H' para representar um estado brasileiro: ");
    ///a linha a baixo está recebendo os dados e transformando-os em string que serão salvos na variavel estado1
    scanf("%s", estado1);
    printf("Agora digite um codigo para a carta da seguinte forma uma letra que deve ser a que está representando o estado seguida de uma numero de 01 a 04 por exemplo a02: ");
    ///a linha a baixo está recebendo os dados e transformando-os em string que serão salvos na variavel codigo1
    scanf("%s", codigo1);
    printf("Agora digite o nome da cidade que você escolheu: ");
    ///a linha a baixo está recebendo os dados e transformando-os em string que serão salvos na variavel cidade1
    scanf("%s", cidade1);
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


    ///2º bloco: faz a leitura e gravação de todos os dados da segunda carta
    printf("Perfeito! agora vamos realizar o preenchimento dos dados da segunda carta.\nPara iniciarmos digite uma letra de 'A' a 'H' para indicar o estado escolhido: ");
    ///a linha a baixo está recebendo os dados e transformando-os em string que serão salvos na variavel estado2
    scanf("%s", estado2);
    printf("Agora digite um codigo para a carta da seguinte forma uma letra que deve ser a que está representando o estado seguida de uma numero de 01 a 04 por exemplo a02: ");
    ///a linha a baixo está recebendo os dados e transformando-os em string que serão salvos na variavel codigo2
    scanf("%s", codigo2);
    printf("Agora digite o nome da cidade que você escolheu: ");
    ///a linha a baixo está recebendo os dados e transformando-os em string que serão salvos na variavel cidade2
    scanf("%s", cidade2);
    printf("Agora digite a população aproximada desssa cidade: ");
    ///a linha a baixo está recebendo os dados e transformando-os em numero inteiro que serão salvos na variavel populacao2
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
    printf("Otimo! Agora que ja temos todos os dados necessarios irei listar as duas cartas para você: ");
    ///prints que irão mostrar a primeira carta que o usuario preencheu. Esse bloco de prints está contendo todas as variaveis terminadas em "1" que estão representando a primeira carta
    printf("Carta 1\n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Area: %.2f KM²\n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos1);
    printf("----------------------------\n");
    ///prints que irão mostrar a segunda carta que o usuario preencheu. Esse bloco de prints está contendo todas as variaveis terminadas em "2" que estão representando a segunda carta
    printf("Carta 2\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Area: %.2f KM²\n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos2);
    return 0;
}