#include<stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    //--VARIAVEIS DO JOGO--//

    int opcao;

 // VARIAVEIS DA PRIMEIRA CARTA//


    char Estado1[2];
    char Codigo1[4];
    char Cidade1[15];
    int Populacao1;
    float Area1;
    float Pib1;
    int Pontos1;
    float Densidade_populacional1;
    float Pib_per_capita1;
    float superpoder1;
    //operações matematicas-SUPERPODER//

    superpoder1 = Populacao1 + Area1 + Pib1 + Pontos1 + Pib_per_capita1+ (1.0 / Densidade_populacional1) ;

// VARIAVEIS DA SEGUNDA CARTA//

  char Estado2[2];
    char Codigo2[4];
    char Cidade2[15];
    int Populacao2;
    float Area2;
    float Pib2;
    int Pontos2;
    float Densidade_populacional2;
    float Pib_per_capita2;
    float superpoder2;

    //operações matematicas-SUPERPODER//

    superpoder2 = Populacao2 + Area2 + Pib2 + Pontos2  + Pib_per_capita2 + (1.0 / Densidade_populacional2);










    printf("BEM VINDO AO JOGO \n");

    printf("\n");

    printf("###Menu interativo.###\n");
    printf("1. Iniciar jogo.\n");
    printf("2. Regras do Jogo.\n");
    printf("3. Sair do Jogo.\n");
    scanf("%d", &opcao);

    //-- INICIO DO CODIGO--//

switch (opcao)
{
case 1:
    printf("Iniciar jogo.\n");
    
    printf("CARTA 01 \n");

    printf("Estado( Digite Uma Letra entre 'A' e 'H'): \n");
    scanf("%s", Estado1);

    printf("Codigo( letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", Codigo1);

    printf("Nome da Cidade: \n");
    scanf(" %s", Cidade1);


    printf("População: \n");
    scanf("%d", &Populacao1);

    printf("Área: \n");
    scanf("%f", &Area1);

    printf("PIB: \n");
    scanf("%f", &Pib1);

    printf("Numero de Pontos turisticos: \n");
    scanf("%d", &Pontos1);





    printf("\n");

    // Operadores matematicos


    Densidade_populacional1 = (float) Populacao1 / Area1;
    Pib_per_capita1 = (float) Pib1 / Populacao1;
    superpoder1 = Populacao1 + Area1 + Pib1 + Pontos1 
                + Pib_per_capita1 
                + (Densidade_populacional1 != 0 ? (1.0 / Densidade_populacional1) : 0);




    //----------------------------------------------------------------//


    printf("CARTA 02 \n");

    printf("\n");

    printf("Estado (Digite Uma letra entre 'A' e 'H'):\n");
    scanf(" %s", Estado2);

    printf("Codigo:\n");
    scanf(" %s", Codigo2);

    printf("Nome da Cidade: \n");
    scanf(" %15s", Cidade2);

    printf("População: \n");
    scanf(" %d", &Populacao2);

    printf("Área: \n");
    scanf("%f", &Area2);

    printf("PIB: \n");
    scanf(" %f", &Pib2);

    printf("Numero da pontos turisticos: \n");
    scanf("%d", &Pontos2);



    // Operadores matematicos


    Densidade_populacional2 = (float) Populacao2 / Area2;
    Pib_per_capita2 = (float) Pib2 / Populacao2;
    superpoder2 = Populacao2 + Area2 + Pib2 + Pontos2 
                + Pib_per_capita2 
                + (Densidade_populacional2 != 0 ? (1.0 / Densidade_populacional2) : 0);




    printf("\n");


printf("CARTA 01 \n");
printf("Estado: %s \n", Estado1);
printf("Código: %s \n", Codigo1);
printf("Nome da cidade: %S \n", Cidade1);
printf("População: %d \n",Populacao1);
printf("Área ( Em Km²): %f \n", Area1);
printf("PIB: %f \n", Pib1);
printf("Numero de pontos turisticos: %d \n", Pontos1);
printf("Densidade populacional:%.3f hab/km²\n", Densidade_populacional1);
printf("Pib per Capita: %.3f Reais\n",Pib_per_capita1 );
printf("Superpoder: %.3f \n",  superpoder1);

printf("\n");

printf("CARTA 2 \n");
printf("Estado: %s \n", Estado2);
printf("Código: %s \n", Codigo2);
printf("Nome da cidade: %S \n", Cidade2);
printf("População: %d \n",Populacao2);
printf("Área( Em Km²): %f \n", Area2);
printf("PIB: %f \n", Pib2);
printf("Numero de pontos turisticos: %d \n", Pontos2);
printf("Densidade populacional:%.3f hab/km²\n", Densidade_populacional2);
printf("Pib per Capita: %.3f Reais\n" ,Pib_per_capita2);
printf("Superpoder: %.3f \n",superpoder2);


//////////////#################################/////////////////

printf("COMPARAÇÃO DAS CARTAS \n");

printf("População 1 > população 2 ?: %d \n", Populacao1 > Populacao2);    
printf("população 1 < população 2 ?: %d \n", Populacao1 < Populacao2);

printf("Área 1 > Área 2 ?: %d \n", Area1 > Area2);    
printf("Área 1 < Área 2 ?: %d \n", Area1 < Area2);

printf("PIB 1 > PIB 2 ?: %d \n", Pib1 > Pib2);    
printf("PIB 1 < PIB 2 ?: %d \n", Pib1 < Pib2);

printf("Pontos Turisticos 1 > Pontos Turisticos 2 ?: %d \n", Pontos1 > Pontos2);    
printf("Pontos Turisticos 1 < Pontos Turisticos 2 ?: %d \n", Pontos1 < Pontos2);

printf("Densidade populacional 1 > Densidade populacional 2 ?: %d \n", Densidade_populacional1 > Densidade_populacional2);
printf("Densidade populacional 1 < Densidade populacional 2 ?: %d \n", Densidade_populacional1 < Densidade_populacional2);

printf("Pib per Capita 1 > Pib per Capita 2 ?: %d \n", Pib_per_capita1 > Pib_per_capita2);
printf("Pib per Capita 1 < Pib per Capita 2 ?: %    d \n", Pib_per_capita1 < Pib_per_capita2);


printf("Comparação da cartas\n");

printf("Qual carta possui a maior população?\n");

if (Populacao1>Populacao2){
    printf("População da carta 1 -%d - População da carta 2 -%d\n", Populacao1, Populacao2);
    printf("Carta 1 venceu!\n");
}
else{
    printf("População da carta 1 -%d - População da carta 2 -%d\n", Populacao1, Populacao2);
    printf("Carta 2  venceu!\n");
}

//////////////#################################/////////////////

printf("Qual carta possui a maior Área?\n");
if (Area1>Area2){
    printf("Area da carta 1 -%f - Área da carta 2 -%f\n ", Area1, Area2);
    printf("Carta 1 venceu!\n");
}
else{
      printf("Area da carta 1 -%f - Área da carta 2 -%f \n", Area1, Area2);
    printf("Carta 2 Venceu!\n");
}
//////////////#################################/////////////////


printf("Qual carta possui o maior PIB?\n");
if (Pib1>Pib2){
    printf("Pib da  carta 1 - %f - Pib da carta 2 -%f\n", Pib1, Pib2);
printf("Carta 1 venceu!\n");
}
else{
    printf("Pib da  carta 1 - %f - Pib da carta 2 -%f\n", Pib1, Pib2);
    printf("Carta 2 venceu!\n");
}
//////////////#################################/////////////////

printf("Qual carta possui a maior quantidade de pontos turisticos?\n");
if (Pontos1>Pontos2){
    printf("Pontos  turisticos da carta 1 -%d - Pontos turisticos da carta 2- %d\n ", Pontos1, Pontos2);
    printf("Carta 1 venceu!\n");
}
else{
    printf("Pontos  turisticos da carta 1 -%d - Pontos turisticos da carta 2- %d\n ", Pontos1, Pontos2);
    printf("Carta 2 vencei!\n");
}

    case 2:
printf("Regras do Jogo.\n");
break;

case 3:
printf("Saindo do Jogo....\n");

break;
default:
    printf("Opção invalida.\n");
    break;
}














return 0;




} 