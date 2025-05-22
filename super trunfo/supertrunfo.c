

#include <stdio.h>

int main() {


// Codigos da primeira carta

// DeclaraC'C#o de variaveis da primeira carta

	char estado_01;
	int cod_carta_01;
	char cidade_01[20];
	int populacao_01;
	float area_01;
	float pib_01;
	int pontos_turisticos_01;
	double super_poder_01;
	int escolha;


// DescriC'C#o dos pedidos com printf
// Pedindo para que o usuario entre com os dados da primeira carta com scanf

	printf("Entre com a classificaC'C#o de estado da primeira carta: \n");
	scanf(" %c", &estado_01);                                                          // Pedir pro usuario colocar o ESTADO da carta

	printf("Entre com o codigo da carta: \n");
	scanf(" %i", &cod_carta_01);                                                       // Pedir pro usuario colocar o codigo da carta

	printf("Entre com o nome da cidade: \n");
	scanf(" %s", cidade_01);                                                           // Pedir pro usuario colocar a Cidade da carta

	printf("Entre com a populaC'C#o da cidade: \n");
	scanf(" %i", &populacao_01);                                                      // Pedir pro usuario colocar a Quantidade populacional da carta

	printf("Entre com a area da cidade em km2: \n");
	scanf(" %f", &area_01);                                                            // Pedir pro usuario colocar a Area da carta

	printf("Entre com o PIB da Cidade: \n");
	scanf(" %f", &pib_01);                                                             // Pedir pro usuario colocar O PIB da carta

	printf("Entre com a quantidade de pontos turisticos da Cidade: \n");
	scanf(" %i", &pontos_turisticos_01);                                               // Pedir pro usuario colocar a quantidade de Pontos Turisticos da carta



	// Cdeclarando variaveis e cauculando densidade populacional

	float densidade_populacional_01 = (float) populacao_01 / area_01;
	float pib_percapito_01 = pib_01 / (float) populacao_01;



	// Cauculando super poder

	super_poder_01 = (float) populacao_01 + area_01 + pib_01 + pontos_turisticos_01 + pib_percapito_01 + (1 / densidade_populacional_01);



	printf(" \n");      // apenas pulando uma linha




// Codigos da segunda carta

// DeclaraC'C#o de variaveis da segunda carta

	char estado_02;
	int cod_carta_02;
	char cidade_02[20];
	int populacao_02;
	float area_02;
	float pib_02;
	int pontos_turisticos_02;
	double super_poder_02;


// DescriC'C#o dos pedidos com printf
// Pedindo para que o usuario entre com os dados da segunda carta com scanf

	printf("Entre com a classificaC'C#o de estado da segunda carta: \n");
	scanf(" %c", &estado_02);                                                               // Pedir pro usuario colocar o ESTADO da carta

	printf("Entre com o codigo da carta: \n");
	scanf(" %i", &cod_carta_02);                                                            // Pedir pro usuario colocar o codigo da carta

	printf("Entre com o nome da cidade: \n");
	scanf(" %s", cidade_02);                                                                // Pedir pro usuario colocar a Cidade da carta

	printf("Entre com a populaC'C#o da cidade: \n");
	scanf(" %i", &populacao_02);                                                            // Pedir pro usuario colocar a Quantidade populacional da carta

	printf("Entre com a area da cidade em km2: \n");
	scanf(" %f", &area_02);                                                                 // Pedir pro usuario colocar a Area da carta

	printf("Entre com o PIB da Cidade: \n");
	scanf(" %f", &pib_02);                                                                  // Pedir pro usuario colocar O PIB da carta

	printf("Entre com a quantidade de pontos turisticos da Cidade: \n");
	scanf(" %i", &pontos_turisticos_02);                                                    // Pedir pro usuario colocar a quantidade de Pontos Turisticos da carta


	// Cdeclarando variaveis e cauculando densidade populacional

	float densidade_populacional_02 = (float) populacao_02 / area_02;
	float pib_percapito_02 = pib_02 / (float) populacao_02;


	// Cauculando super poder

	super_poder_02 = (float) populacao_02 + area_02 + pib_02 + pontos_turisticos_02 + pib_percapito_02 + (1 / densidade_populacional_02);





	printf(" \n");                  // apenas pulando uma linha



	// Informando o nome do jogo e a ordem da carta para a entrada dos dados

	printf("Cartas de SUPER TRUNFO \n\n===Carta 01===\n\n");


// ImpressC#o dos dados da primeira carta conforme os dados de entrada que foram pedidos anteriormente


	printf("ESTADO: %c\n", estado_01);
	printf("Codigo: %c-%i\n", estado_01, cod_carta_01);
	printf("Cidade: %s\n", cidade_01);
	printf("PopulaC'C#o: %i mil habitantes\n", populacao_01);
	printf("Area (Km2): %.2f mil km2\n", area_01);
	printf("PIB em milhC5es: R$ %.2f\n", pib_01);
	printf("Pontos Turisticos: %i\n", pontos_turisticos_01);
	printf("Densidade Populacional: %.0f habitantes por km2\n", densidade_populacional_01);
	printf("PIB Percapito: %.2f\n\n", pib_percapito_01);
	printf("Super Poder: %.3f\n\n", super_poder_01);




// Informando o nome do jogo e a ordem da carta para a entrada dos dados

	printf("===Carta 02===\n\n");



// ImpressC#o dos dados da primeira carta conforme os dados de entrada que foram pedidos anteriormente



	printf("ESTADO: %c\n", estado_02);
	printf("Codigo: %c-%i\n", estado_01, cod_carta_02);
	printf("Cidade: %s\n", cidade_02);
	printf("PopulaC'C#o: %i mil habitantes\n", populacao_02);
	printf("Area (Km2): %.2f mil km2\n", area_02);
	printf("PIB em milhC5es: R$ %.2f\n", pib_02);
	printf("Pontos Turisticos: %i\n", pontos_turisticos_02);
	printf("Densidade Populacional: %.2f mil habitantes por km2 \n", densidade_populacional_02);
	printf("PIB Percapito: %.2f\n\n", pib_percapito_02);
	printf("Super Poder: %.3f\n\n", super_poder_02);



// atualização


// Implementação do switch para decidir qual atributo sera comparado.


	printf("Entre com o numero referente ao atributo do desafio: \n");
	printf("[1] Para POPULACCO\n[2] Para AREA\n[3] Para PIB\n[4] Para PONTOS TURISTICOS\n[5] Para DENSIDADE POPULACIONAL\n[6] Para PIB PER CAPITA\n[7] Para SUPER PODER\n\n");
	scanf(" %i", &escolha);

	switch (escolha)
	{

    	case 1:
    		if(populacao_01 > populacao_02) {
    			printf("Comparando PopulaC'C#o \n");
    			printf("Vitoria Carta 1:\nCidade %s ganhou com a maior populaC'C#o\n", cidade_01);
    			printf("Carta 1 que representa a cidade de %s C) de %i habitantes\nPopulaC'C#o da carta 2 que representa a cidade de %s C) de %i habitantes\n\n", cidade_01, populacao_01, cidade_02, populacao_02);
    		} else if(populacao_01 == populacao_02) {
    			printf("Comparando PopulaC'C#o \n");
    			printf("Empate\nCarta 1 que representa a cidade de %s C) de %i habitantes\nCarta 2 que representa a cidade de %s C) de %i habitantes\n\n", cidade_01, populacao_01, cidade_02, populacao_02);
    		} else {
    			printf("Comparando PopulaC'C#o \n");
    			printf("Vitoria Carta 2:\nCidade %s ganhou com a maior populaC'C#o\n", cidade_02);
    			printf("Carta 2 que representa a cidade de %s C) de %i habitantes\nPopulaC'C#o da carta 1 que representa a cidade de %s C) de %i habitantes\n\n", cidade_02, populacao_02, cidade_01, populacao_01);
    		}
    		break;


    	case 2:
    		if(area_01 > area_02) {
    			printf("Comparando Area \n");
    			printf("Vitoria Carta 1:\nCidade %s ganhou com a maior area em kmB2\n", cidade_01);
    			printf("Carta 1 que representa a cidade de %s tem area de %.3f kmB2\nCarta 2 que representa a cidade de %s tem area de %.3f kmB2\n\n", cidade_01, area_01, cidade_02, area_02);
    		} else if(area_01 == area_02) {
    			printf("Comparando Area \n");
    			printf("Empate\nCarta 1 que representa a cidade de %s tem area de %.3f kmB2\nCarta 2 que representa a cidade de %s tem area de %.3f kmB2\n\n", cidade_01, area_01, cidade_02, area_02);
    		} else {
    			printf("Comparando Area \n");
    			printf("Vitoria Carta 2:\nCidade %s ganhou com a maior area em kmB2\n", cidade_02);
    			printf("Carta 2 que representa a cidade de %s tem area de %.3f kmB2\nCarta 1 que representa a cidade de %s tem area de %.3f kmB2\n\n", cidade_02, area_02, cidade_01, area_01);
    		}
    		break;
    
    
    	case 3:
    		if(pib_01 > pib_02) {
    			printf("Comparando PIB \n");
    			printf("Vitoria Carta 1:\nCidade %s ganhou com a maior PIB\n", cidade_01);
    			printf("Carta 1 que representa a cidade de %s tem PIB de R$ %.3f\nCarta 2 que representa a cidade de %s tem PIB de R$ %.3f\n\n", cidade_01, pib_01, cidade_02, pib_02);
    		} else if(pib_01 == pib_02) {
    			printf("Comparando PIB \n");
    			printf("Empate\nCarta 1 que representa a cidade de %s tem PIB de R$ %.3f\nCarta 2 que representa a cidade de %s tem PIB de R$ %.3f\n\n", cidade_01, pib_01, cidade_02, pib_02);
    		} else {
    			printf("Comparando PIB \n");
    			printf("Vitoria Carta 2:\nCidade %s ganhou com a maior PIB\n", cidade_02);
    			printf("Carta 2 que representa a cidade de %s tem PIB de R$ %.3f\nCarta 1 que representa a cidade de %s tem PIB de R$ %.3f\n\n", cidade_02, pib_02, cidade_01, pib_01);
    		}
    		break;


    	case 4:
    		if(pontos_turisticos_01 > pontos_turisticos_02) {
    			printf("Comparando quantidade de Pontos Turisticos \n");
    			printf("Vitoria Carta 1:\nCidade %s ganhou com a mais pontos turisticos\n", cidade_01);
    			printf("Carta 1 que representa a cidade de %s tem %i pontos turisticos \nCarta 2 que representa a cidade de %s tem %i pontos turisticos\n\n", cidade_01, pontos_turisticos_01, cidade_02, pontos_turisticos_02);
    		} else if(pontos_turisticos_01 == pontos_turisticos_02) {
    			printf("Comparando quantidade de Pontos Turisticos \n");
    			printf("Empate\nCarta 1 que representa a cidade de %s tem %i pontos turisticos\nCarta 2 que representa a cidade de %s tem %i pontos turisticos\n\n", cidade_01, pontos_turisticos_01, cidade_02, pontos_turisticos_02);
    		} else {
    			printf("Comparando quantidade de Pontos Turisticos \n");
    			printf("Vitoria Carta 2:\nCidade %s ganhou com a mais pontos turisticos\n", cidade_02);
    			printf("Carta 2 que representa a cidade de %s tem %i pontos turisticos\nCarta 1 que representa a cidade de %s tem %i pontos turisticos\n\n", cidade_02, pontos_turisticos_02, cidade_01, pontos_turisticos_01);
    		}
    		break;


    	case 5:
    		if(densidade_populacional_01 < densidade_populacional_02) {
    			printf("Comparando Densidade Populacional \n");
    			printf("Vitoria Carta 1:\nCidade %s ganhou com a menor Densidade Populacional\n", cidade_01);
    			printf("Carta 1 que representa a cidade de %s tem Densidade Populacional de %.2f \nCarta 2 que representa a cidade de %s tem Densidade Populacional de %.2f\n\n", cidade_01, densidade_populacional_01, cidade_02, densidade_populacional_02);
    		} else if(densidade_populacional_01 == densidade_populacional_02) {
    			printf("Comparando Densidade Populacional \n");
    			printf("Empate\nCarta 1 que representa a cidade de %s tem Densidade Populacional de %.2f\nCarta 2 que representa a cidade de %s tem Densidade Populacional de %.2f\n\n", cidade_01, densidade_populacional_01, cidade_02, densidade_populacional_02);
    		} else {
    			printf("Comparando Densidade Populacional \n");
    			printf("Vitoria Carta 2:\nCidade %s ganhou com a menor Densidade Populacional\n", cidade_02);
    			printf("Carta 2 que representa a cidade de %s tem Densidade Populacional de %.2f\nCarta 1 que representa a cidade de %s tem Densidade Populacional de %.2f\n\n", cidade_02, densidade_populacional_02, cidade_01, densidade_populacional_01);
    		}
            break;

    	case 6:
            if(pib_percapito_01 > pib_percapito_02){
                printf("Comparando PIB per Capita \n");
                printf("Vitoria Carta 1:\nCidade %s ganhou com o maior PIB per Capita\n", cidade_01);
                printf("Carta 1 que representa a cidade de %s tem PIB per Capita de R$ %.2f \nCarta 2 que representa a cidade de %s tem PIB per Capita de R$ %.2f\n\n", cidade_01, pib_percapito_01, cidade_02, pib_percapito_02);
            }else if(pib_percapito_01 == pib_percapito_02){
                printf("Comparando PIB per Capita \n");
                printf("Empate\nCarta 1 que representa a cidade de %s tem PIB per Capita de R$ %.2f\nCarta 2 que representa a cidade de %s tem PIB per Capita de R$ %.2f\n\n", cidade_01, pib_percapito_01, cidade_02, pib_percapito_02);
            } else{
                printf("Comparando PIB per Capita \n");
                printf("Vitoria Carta 2:\nCidade %s ganhou com o maior PIB per Capita\n", cidade_02);
                printf("Carta 2 que representa a cidade de %s tem PIB per Capita de R$ %.2f\nCarta 1 que representa a cidade de %s tem PIB per Capita de R$ %.2f\n\n", cidade_02, pib_percapito_02, cidade_01, pib_percapito_01);
            }
            break;
            
        case 7:
    	    if(super_poder_01 > super_poder_02){
    	        printf("Comparando SUPER PODER \n");
    	        printf("Vitoria Carta 1:\nCidade %s ganhou com o maior SUPER PODER\n", cidade_01);
    	        printf("Carta 1 que representa a cidade de %s tem SUPER PODER de %.2f \nCarta 2 que representa a cidade de %s tem SUPER PODER de %.2f\n\n", cidade_01, super_poder_01, cidade_02, super_poder_02);
    	    }else if(super_poder_01 == super_poder_02){
    	        printf("Comparando SUPER PODER\n");
    	        printf("Empate\nCarta 1 que representa a cidade de %s tem SUPER PODER de %.2f\nCarta 2 que representa a cidade de %s tem SUPER PODER de %.2f\n\n", cidade_01, super_poder_01, cidade_02, super_poder_02);
    	    } else{
    	        printf("Comparando SUPER PODER\n");
    	        printf("Vitoria Carta 2:\nCidade %s ganhou com o maior PIB per Capita\n", cidade_02);
    	        printf("Carta 2 que representa a cidade de %s tem SUPER PODER de %.2f\nCarta 1 que representa a cidade de %s tem SUPER PODER de %.2f\n\n", cidade_02, super_poder_02, cidade_01, super_poder_01);
    	    }
    	    break;
    	    

        default:
            printf("Opção invalida");
            break;



	}



	return 0;

}