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


//////////////#############        ATRIBUTOS DE COMPARAÇÃO       ####################/////////////////
int comparacao1, comparacao2;
int resultado1, resultado2;

printf("MENU DE COMPARAÇÃO DAS CARTAS \n");
printf("1. População.\n");
printf("2. Área.\n");
printf("3. Pib.\n");
printf("4. N°. Pontos turisticos \n");
printf("5. Densidade populacional.\n");
printf("6. Pib per capita.\n");
printf("7. Superpoder.\n");
//############################################//

printf("\n");

printf(" Escolha o primeiro atributo para comparação.\n");
scanf("%d", &comparacao1);


switch (comparacao1)
{
case 1: 
printf("População 1 %d\n",&Populacao1);
printf("População 2 %d\n",&Populacao2);

resultado1 = Populacao1  > Populacao2 ? 1: ((Populacao2 > Populacao1)? 2: 0);

    break;


case 2: 
printf("Área 1 %f\n",&Area1);
printf("Área 2 %f\n",&Area2);

resultado1 = Area1  > Area2 ? 1: ((Area2 > Area1)? 2: 0);

    break;


case 3: 
printf("Pib 1 %f\n",&Pib1);
printf("Pib 2 %f\n",&Pib2);

resultado1 = Pib1  > Pib2 ? 1: ((Pib2 > Pib1)? 2: 0);

    break;


case 4: 
printf("Pontos turisticos 1 %d\n",&Pontos1);
printf("Pontos turisticos 2 %d\n",&Pontos2);

resultado1 = Pontos1  > Pontos2 ? 1: ((Pontos2 > Pontos1)? 2: 0);

    break;

case 5: 
printf("Densidade populacional 1 %f\n",&Densidade_populacional1);
printf("Densidade populacional 2 %f\n",&Densidade_populacional2);

resultado1 = Densidade_populacional1  < Densidade_populacional2 ? 1: ((Densidade_populacional2 < Densidade_populacional1)? 2: 0);


    break;

case 6: 
printf("Pib per capita 1 %f\n",&Pib_per_capita1);
printf("Pib per capita 2 %f\n",&Pib_per_capita2);

resultado1 = Pib_per_capita1  > Pib_per_capita2 ? 1: ((Pib_per_capita2 > Pib_per_capita1)? 2: 0);

    break;

case 7: 
printf("Superpoder 1 %f\n",&superpoder1);
printf("Superpoder 2 %f\n",&superpoder2);

resultado1 = superpoder1  > superpoder2 ? 1: ((superpoder2 > superpoder1)? 2: 0);

    break;


default:
    printf("Opção invalida!\n");

    break;
}
// SEGUNDA COMPARAÇÃO
printf("MENU DE COMPARAÇÃO DAS CARTAS \n");
printf("1. População.\n");
printf("2. Área.\n");
printf("3. Pib.\n");
printf("4. N°. Pontos turisticos \n");
printf("5. Densidade populacional.\n");
printf("6. Pib per capita.\n");
printf("7. Superpoder.\n");

printf("\n");

printf(" Escolha o segundo atributo para comparação.\n");
printf("\n");

printf("ATENÇÃO: ESCOLHA UM ATRIBUTO DIFERENTE DI PRIMEIRO.\n");
printf("\n");

scanf("%d", &comparacao2);


switch (comparacao2)
{
case 1: 
printf("População 1 %d\n",&Populacao1);
printf("População 2 %d\n",&Populacao2);

resultado2 = Populacao1  > Populacao2 ? 1: ((Populacao2 > Populacao1)? 2: 0);

    break;


case 2: 
printf("Área 1 %f\n",&Area1);
printf("Área 2 %f\n",&Area2);

resultado2 = Area1  > Area2 ? 1: ((Area2 > Area1)? 2: 0);

    break;


case 3: 
printf("Pib 1 %f\n",&Pib1);
printf("Pib 2 %f\n",&Pib2);

resultado2 = Pib1  > Pib2 ? 1: ((Pib2 > Pib1)? 2: 0);

    break;


case 4: 
printf("Pontos turisticos 1 %d\n",&Pontos1);
printf("Pontos turisticos 2 %d\n",&Pontos2);

resultado2 = Pontos1  > Pontos2 ? 1: ((Pontos2 > Pontos1)? 2: 0);

    break;

case 5: 
printf("Densidade populacional 1 %f\n",&Densidade_populacional1);
printf("Densidade populacional 2 %f\n",&Densidade_populacional2);

resultado2 = Densidade_populacional1  < Densidade_populacional2 ? 1: ((Densidade_populacional2 < Densidade_populacional1)? 2: 0);


    break;

case 6: 
printf("Pib per capita 1 %f\n",&Pib_per_capita1);
printf("Pib per capita 2 %f\n",&Pib_per_capita2);

resultado2 = Pib_per_capita1  > Pib_per_capita2 ? 1: ((Pib_per_capita2 > Pib_per_capita1)? 2: 0);

    break;

case 7: 
printf("Superpoder 1 %f\n",&superpoder1);
printf("Superpoder 2 %f\n",&superpoder2);

resultado2 = superpoder1  > superpoder2 ? 1: ((superpoder2 > superpoder1)? 2: 0);

    break;


default:
    printf("Opção invalida!\n");

    break;
}

//###################################################################//
printf("### RESULTADO DA PRIMEIRA COMPARAÇÃO.\n");

printf("Cidade 1 %s\n", Cidade1);
printf("Cidade 2 %s\n", Cidade2);

if (resultado1 == 1 && resultado2 ==1)
{
   printf("A CARTA 1 VENCEU.ZN");
}else if (resultado1 == 2 && resultado2 == 2)
{printf("A CARTA 2 VENCEU!!");
}else{
    printf("O JOGO TERMINOU EMPATE!!");
}


break;

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