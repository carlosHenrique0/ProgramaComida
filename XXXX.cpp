#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int contador, comida, bebida, pedido, opcaoQuiz, contadorQuiz;
float total, total1;

void Comida()
{
	
	
	
	printf("Menu Comida: \n");
    printf("[1] - Arroz - R$ 4.00\n");
    printf("[2] - Macarrão - R$ 4.00\n");
    printf("[3] - Feijão - R$ 4.00\n");
    printf("Acompanhamentos: \n");
	printf("[4] - Bife - R$ 6.00\n");
    printf("[5] - Frango - R$ 6.00\n");
    printf("[6] - Peixe - R$ 6.00\n");
    printf("Saladas prontas: \n");
	printf("[7] - Alface, tomate, cebola - R$ 3.00\n");
    printf("[8] - Pepinos, cenouras, Brocolis - R$ 3.00\n");
	printf("\n---------------------------------------------------------------------------------\n");
	printf("[18] - Encerrar esse pedido e ir para o proximo ou encerrar e ter o total\n");
	printf("[19] - Mostrar cardapio Comidas novamente\n");
	printf("[20] - Mostrar cardapio Bebidas\n");		
	printf("[21] - Mostrar cardapio Acompanhamentos\n");	
	printf("[22] - Reiniciar este pedido(s)\n");
	printf("[24] - Para encerrar o pedido e participar do QUIZ\n");
	printf("[25] - Para encerrar o pedido e participar do nosso feedback e da promoção 'O dedo duro'!)\n");
}

void Bebida()
{
	printf("Menu Bebidas: \n");
	printf("[9] - Suco de Laranja - R$ 5.00\n");
    printf("[10] - Suco de Morango - R$ 5.00\n");
    printf("[11] - Suco de Maracuja - R$ 5.00\n");	
	printf("Bebidas alcolicas: \n");
	printf("[12] - Cerveja - lata 350 ml - R$ 6.00\n");
    printf("[13] - Vinho - garrafa 1 L - R$ 60.00\n");
    printf("[14] - Champagne - garrafa 1 L - R$ 60.00\n");
	printf("\n---------------------------------------------------------------------------------\n");
	printf("[18] - Encerrar esse pedido e ir para o proximo ou encerrar e ter o total\n");
	printf("[19] - Mostrar cardapio Comidas \n");
	printf("[20] - Mostrar cardapio Bebidas novamente\n");	
	printf("[21] - Mostrar cardapio Acompanhamentos\n");
	printf("[22] - Reiniciar este pedido(s)\n");
	printf("[24] - Para encerrar o pedido e participar do QUIZ\n");
	printf("[25] - Para encerrar o pedido e participar do nosso feedback e da promoção 'O dedo duro'!)\n");
}

void Acompanhamento()
{
	printf("Menu Acompanhamentos: \n");
	printf("[15] - Porção de Batatas - R$ 5.00\n");
    printf("[16] - Porção de Bacon - R$ 5.00\n");
    printf("[17] - Porção de Mandioca - R$ 5.00\n");	
    printf("\n---------------------------------------------------------------------------------\n");
	printf("[18] - Encerrar esse pedido e ir para o proximo ou encerrar e ter o total\n");
	printf("[19] - Mostrar cardapio Comidas\n");
	printf("[20] - Mostrar cardapio Bebidas\n");	
	printf("[21] - Mostrar cardapio Acompanhamentos novamente\n");
	printf("[22] - Reiniciar este pedido(s)\n");
	printf("[24] - Para encerrar o pedido e participar do QUIZ\n");
	printf("[25] - Para encerrar o pedido e participar do nosso feedback e da promoção 'O dedo duro'!)\n");
}  

void Quiz(char quiz[])
{	
	printf("Obrigado por participar do nosso QUIZ!, responda nossas perguntas e na proxima visita voçê ganhara um incrivel....COPOOO D'AGUA!!!!!");
    printf("\n\n...Sério que voçê ira participar? não tem água em casa não?\n");
	printf("\n\n...Tai ainda?\n\n...Precisa acertar tudo para ganhar os brindes, boa sorte!!!;\n");
	while(1){
		printf("\nQual é a comida que liga e desliga?\n");
		scanf("%s", quiz);
		if(stricmp(quiz, "strogonoff")== 0){
			printf("ata...voçê acertou!!!!!... - programa resmungando...(Droga, *#@#@ &#*@& #@*&#)\n");
			contadorQuiz+=1;
		}else{
			printf("ERRROOOOOOOOOOOOU!!!!!...\n");
		}
		printf("\nCom qual país da pra se fazer omelete?\n(acertos = %d /3)\n", contadorQuiz);
		scanf("%s", quiz);
		if(stricmp(quiz, "kosovo")== 0){
			printf("voçê acertou!!!!!... - programa resmungando mais...(*#@#@ &#*@& #@*&#)\n");
			contadorQuiz+=1;

		}else{
			printf("ERRROOOOOOOOOOOOU!!!!!...\n");
		}
		printf("\nQual é o doce que gosta de brigar?\n(acertos = %d /3)\n", contadorQuiz);
		scanf("%s", quiz);
		if(stricmp(quiz, "brigadeiro")== 0){
			printf("Aaaah mizeravi acertouu!!!!!\n");
			contadorQuiz+=1;
		}else{
			printf("ERRROOOOOOOOOOOOU!!!!!...\n");
		}
		if(contadorQuiz >= 3){
			printf("\nBom...Voçê ganhou seu copo da agua + um garrafa de vinho GRATIIIIIIS PARABÉNS\n");
			exit(0);
		}
		else{
			printf("\n(acertos = %d /3)\n", contadorQuiz);
			printf("Voçê não acertou todas perguntas do QUIZ...\nVoçê perdeuuu...AHAHAHHAAH!!!!\n");
			printf("\nObrigado por participar! Não esqueça de pedir seu copo d'água na proxima visita!!!.\n\n");    
			exit(0);
		}
	}
}

void Feedback(char feedback[])
{
    printf("\nJa vai???\nParticipe da nossa promoção, 'O Dedo Duro', onde nossos clientes ganham brindes, em troca do feedback sobre nossos serviços.\n");
	printf("\nDe o seu feedback:\n");
	scanf("%s", feedback);
}

void Sair()
{
	printf("\nNão se vá!\nEu já não posso suportar\nEsta minha vida de amargura\nNão se vá!\nEstou partindo porque sei\nQue você já não mais me ama...\n");
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    int continuar=1, *ponteiroQuiz;
    char feedback[1000], quiz[20];
    
		printf("BEM VINDO AO NOSSO SISTEMA DE PEDIDOS, FIQUE A VONTADE!\n");
		printf("[1] - Comida.\n");
		printf("[2] - Menu Bebidas.\n");
		printf("[3] - Menu Acompanhamentos.\n");
		printf("[4] - Quiz.\n");
		printf("[5] - FeedBack (Participe da promoção 'O DEDO DURO'.)\n");
		printf("[0] - Sair.\n");
			
    do
    {
        printf("\nOque gostaria?\n");
        scanf("%d", &continuar);
		printf("\n");

        switch(continuar)
        {
        	default:
                printf("\n\nDIGITE UMA OPÇÃO VALIDA!!!\n\n");
                break;
            case 1:
            	Comida();
            	pedido = 0;
            	while(1){
			        printf("\nOque gostaria? \n");
					scanf("%d", &pedido);
					printf("\n");
	          		if(pedido == 1){
						total += 4.00;            	
						printf("[1] - Arroz - R$ 4.00\n");	    
		            }
	          		else if(pedido == 2){
		                total += 4.00;
					    printf("[2] - Macarrão - R$ 4.00\n");
					}					
		            else if(pedido == 3){
		                total += 4.00;
		                printf("[3] - Feijão - R$ 4.00\n");
		            }
					else if(pedido == 4){
						total += 6.00;
						printf("[4] - Bife - R$ 6.00\n");         	
		            }
		            else if(pedido == 5){
		                total += 6.00;
			    	    printf("[5] - Frango - R$ 6.00\n");
		            }
		            else if(pedido == 6){
		                total += 6.00;
						printf("[6] - Peixe - R$ 6.00\n");
		            }
		            else if(pedido == 7){
						total += 3.00;            	
		        		printf("[7] - Alface, tomate, cebola - R$ 3.00\n");
				    }
					else if(pedido == 3){
		                total += 3.00;
						printf("[8] - Pepinos, cenouras, Brocolis - R$ 3.00\n");
					}
					else if(pedido ==  9){
		                total += 5.00;
		                printf("[9] - Suco de Laranja - R$ 5.00\n");
		        	}
					else if(pedido == 10){
						total += 5.00; 
						printf("[10] - Suco de Morango - R$ 5.00\n");
		            }
					else if(pedido == 11){	
						total += 5.00;
		                printf("[11] - Suco de Maracuja - R$ 5.00\n");	
		            }
					else if(pedido == 12){
						total += 6.00;
		        		printf("[12] - Cerveja - lata 350 ml - R$ 6.00\n");
					}
					else if(pedido == 13){
		                total += 60.00;
		        		printf("[13] - Vinho - garrafa 1 L - R$ 60.00\n");
				    }
					else if(pedido == 14){
		                total += 60.00;
		        		printf("[14] - Champagne - garrafa 1 L - R$ 60.00\n");
				    } 
				    else if(pedido == 15){
						total += 5.00;
						printf("[15] - Porção de Batatas - R$ 5.00\n");
					}
	          		else if(pedido == 16){
						total += 5.00;
				    	printf("[16] - Porção de Bacon - R$ 5.00\n");
					}
	          		else if(pedido == 17){
						total += 5.00;
						printf("[17] - Porção de Mandioca - R$ 5.00\n");	
					}
		            else if(pedido == 18){
		                total1 += total;
		                contador +=1;
		                printf("Seu pedido atual custa: R$ %.2f, e seu total esta em: R$ %.2f e %d pedido(s)\n\n", total, total1, contador);
						printf("Escolha como prosseguir\n");
						printf("[19] - Para mostrar o cardapio comida novamente\n");
						printf("[20] - Para mostrar o cardapio de bebidas\n");
						printf("[21] - Para mostrar o cardapio de acompanhamentos\n");
						printf("[22] - Reiniciar pedido (Excluira totos os pedidos)\n");	
						printf("[23] - Para encerrar o pedido e ter o total a ser pago\n");
						printf("[24] - Para encerrar o pedido e participar do QUIZ\n");
						printf("[25] - Para encerrar o pedido e participar do nosso feedback e da promoção 'O dedo duro'!)\n");
		                total=0;
   		            	system("pause");
					}
		            else if(pedido == 19){
		            	Comida();
					}					
		            else if(pedido == 20){
		            	Bebida();
		            }
		            else if(pedido == 21){
		            	Acompanhamento();
		            }
		            else if(pedido == 22){
		            	printf("\nSeus pedidos foram excluidos e seu total é R$0.00 novamente.\n");
		            	printf("\nEscolha como prosseguir\n");
						printf("[19] - Para mostrar o cardapio comida novamente\n");
						printf("[20] - Para mostrar o cardapio de bebidas\n");
						printf("[21] - Para mostrar o cardapio de acompanhamentos\n");
						printf("[23] - Para encerrar o pedido e ter o total a ser pago\n");
						printf("[24] - Para encerrar o pedido e participar do QUIZ\n");
						printf("[25] - Para encerrar o pedido e participar do nosso feedback e da promoção 'O dedo duro'!)\n");
		                total=0;
						total1 = total;
						contador = 0;
					}
		            else if(pedido == 23){
		                total1 += total;
		                printf("Seu total foi de R$ %.2f, com %d pedido(s)\n\n", total1, contador);
		                printf("Obrigado pela preferência, Volte sempre!!!\n");
		                exit(0);
					}
					else if(pedido == 24){
						if(total == 0.00){
							contador = 0;
						}else{
							contador +=1;
						}
					    total1 += total;
			            printf("Seu total foi de R$ %.2f, com %d pedido(s)\n\n", total1, contador);
						Quiz(quiz);
						exit(0);
					}
		            else if(pedido == 25){
						Feedback(feedback);
			            if(total == 0.00){
							contador = 0;
						}else{
							contador +=1;
						}
						printf("\nObrigado por participar! ...Seu dedo duro!!!.\n\n");    
					    total1 += total;
			            printf("Seu total foi de R$ %.2f, com %d pedido(s)\n\n", total1, contador);
			            printf("Obrigado pela preferência, Volte sempre!!!\n");
						exit(0);
					return 0;
					}
					else if(pedido > 25){
						printf("\n\nDIGITE UMA OPÇÃO VALIDA!!!\n\n");

					}
					if(pedido != 18 && pedido != 22 && pedido != 23 && pedido != 24 && pedido != 25){
    					printf("valor até agora: R$ %.2f\n", total);
					}
				}
	        case 2:
	        	Bebida();
	        	pedido = 0;
            	while(1){
            	printf("\nOque gostaria? \n");
				scanf("%d", &pedido);
				printf("\n");
	          		if(pedido == 1){
						total += 4.00;            	
						printf("[1] - Arroz - R$ 4.00\n");	    
		            }
	          		else if(pedido == 2){
		                total += 4.00;
					    printf("[2] - Macarrão - R$ 4.00\n");
					}					
		            else if(pedido == 3){
		                total += 4.00;
		                printf("[3] - Feijão - R$ 4.00\n");
		            }
					else if(pedido == 4){
						total += 6.00;
						printf("[4] - Bife - R$ 6.00\n");         	
		            }
		            else if(pedido == 5){
		                total += 6.00;
			    	    printf("[5] - Frango - R$ 6.00\n");
		            }
		            else if(pedido == 6){
		                total += 6.00;
						printf("[6] - Peixe - R$ 6.00\n");
		            }
		            else if(pedido == 7){
						total += 3.00;            	
		        		printf("[7] - Alface, tomate, cebola - R$ 3.00\n");
				    }
					else if(pedido == 3){
		                total += 3.00;
						printf("[8] - Pepinos, cenouras, Brocolis - R$ 3.00\n");
					}
					else if(pedido ==  9){
		                total += 5.00;
		                printf("[9] - Suco de Laranja - R$ 5.00\n");
		        	}
					else if(pedido == 10){
						total += 5.00; 
						printf("[10] - Suco de Morango - R$ 5.00\n");
		            }
					else if(pedido == 11){	
						total += 5.00;
		                printf("[11] - Suco de Maracuja - R$ 5.00\n");	
		            }
					else if(pedido == 12){
						total += 6.00;
		        		printf("[12] - Cerveja - lata 350 ml - R$ 6.00\n");
					}
					else if(pedido == 13){
		                total += 60.00;
		        		printf("[13] - Vinho - garrafa 1 L - R$ 60.00\n");
				    }
					else if(pedido == 14){
		                total += 60.00;
		        		printf("[14] - Champagne - garrafa 1 L - R$ 60.00\n");
				    } 
				    else if(pedido == 15){
						total += 5.00;
						printf("[15] - Porção de Batatas - R$ 5.00\n");
					}
	          		else if(pedido == 16){
						total += 5.00;
				    	printf("[16] - Porção de Bacon - R$ 5.00\n");
					}
	          		else if(pedido == 17){
						total += 5.00;
						printf("[17] - Porção de Mandioca - R$ 5.00\n");	
					}
				   	else if(pedido == 18){
		                total1 += total;
		                contador +=1;
		                printf("Seu pedido atual custa: R$ %.2f, e seu total esta em: R$ %.2f e %d pedido(s)\n\n", total, total1, contador);
						printf("Escolha como prosseguir\n");
						printf("[19] - Para mostrar o cardapio comida novamente\n");
						printf("[20] - Para mostrar o cardapio de bebidas\n");
						printf("[21] - Para mostrar o cardapio de acompanhamentos\n");
						printf("[22] - Reiniciar pedido (Excluira totos os pedidos)\n");	
						printf("[23] - Para encerrar o pedido e ter o total a ser pago\n");
						printf("[24] - Para encerrar o pedido e participar do QUIZ\n");
						printf("[25] - Para encerrar o pedido e participar do nosso feedback e da promoção 'O dedo duro'!)\n");
		                total=0;
						system("pause");		              
					}
		            else if(pedido == 19){
		            	Comida();
					}					
		            else if(pedido == 20){
		            	Bebida();
		            }
		            else if(pedido == 21){
		            	Acompanhamento();
		            }
		            else if(pedido == 22){
						printf("\nSeus pedidos foram excluidos e seu total é R$0.00 novamente.\n");
						printf("\nEscolha como prosseguir\n");
						printf("[19] - Para mostrar o cardapio comida novamente\n");
						printf("[20] - Para mostrar o cardapio de bebidas\n");
						printf("[21] - Para mostrar o cardapio de acompanhamentos\n");
						printf("[23] - Para encerrar o pedido e ter o total a ser pago\n");
						printf("[24] - Para encerrar o pedido e participar do QUIZ\n");
						printf("[25] - Para encerrar o pedido e participar do nosso feedback e da promoção 'O dedo duro'!)\n");
		                total=0;
						total1 = total;
						contador = 0;
					}
		            else if(pedido == 23){
		                total1 += total;
		                printf("Seu total foi de R$ %.2f, com %d pedido(s)\n\n", total1, contador);
		                printf("Obrigado pela preferência, Volte sempre!!!\n");
					}
					else if(pedido == 24){
						if(total == 0.00){
							contador = 0;
						}else{
							contador +=1;
						}
					    total1 += total;
			            printf("Seu total foi de R$ %.2f, com %d pedido(s)\n\n", total1, contador);
						Quiz(quiz);
						exit(0);
					}
		            else if(pedido == 25){
						Feedback(feedback);	
						if(total == 0.00){
							contador = 0;
						}else{
							contador +=1;
						}
						printf("\nObrigado por participar! ...Seu dedo duro!!!.\n\n");    
					    total1 += total;
			            printf("Seu total foi de R$ %.2f, com %d pedido(s)\n\n", total1, contador);
			            printf("Obrigado pela preferência, Volte sempre!!!\n");
						exit(0);
					}	
					if(pedido != 18 && pedido != 22 && pedido != 23 && pedido != 24 && pedido != 25){
    					printf("valor até agora: R$ %.2f\n", total);
					}
				}
			case 3:
	        	Acompanhamento();
	        	pedido = 0;
            	while(1){
            	printf("\nOque gostaria? \n");
				scanf("%d", &pedido);
				printf("\n");
	          		if(pedido == 1){
						total += 4.00;            	
						printf("[1] - Arroz - R$ 4.00\n");	    
		            }
	          		else if(pedido == 2){
		                total += 4.00;
					    printf("[2] - Macarrão - R$ 4.00\n");
					}					
		            else if(pedido == 3){
		                total += 4.00;
		                printf("[3] - Feijão - R$ 4.00\n");
		            }
					else if(pedido == 4){
						total += 6.00;
						printf("[4] - Bife - R$ 6.00\n");         	
		            }
		            else if(pedido == 5){
		                total += 6.00;
			    	    printf("[5] - Frango - R$ 6.00\n");
		            }
		            else if(pedido == 6){
		                total += 6.00;
						printf("[6] - Peixe - R$ 6.00\n");
		            }
		            else if(pedido == 7){
						total += 3.00;            	
		        		printf("[7] - Alface, tomate, cebola - R$ 3.00\n");
				    }
					else if(pedido == 3){
		                total += 3.00;
						printf("[8] - Pepinos, cenouras, Brocolis - R$ 3.00\n");
					}
					else if(pedido ==  9){
		                total += 5.00;
		                printf("[9] - Suco de Laranja - R$ 5.00\n");
		        	}
					else if(pedido == 10){
						total += 5.00; 
						printf("[10] - Suco de Morango - R$ 5.00\n");
		            }
					else if(pedido == 11){	
						total += 5.00;
		                printf("[11] - Suco de Maracuja - R$ 5.00\n");	
		            }
					else if(pedido == 12){
						total += 6.00;
		        		printf("[12] - Cerveja - lata 350 ml - R$ 6.00\n");
					}
					else if(pedido == 13){
		                total += 60.00;
		        		printf("[13] - Vinho - garrafa 1 L - R$ 60.00\n");
				    }
					else if(pedido == 14){
		                total += 60.00;
		        		printf("[14] - Champagne - garrafa 1 L - R$ 60.00\n");
				    } 
				    else if(pedido == 15){
						total += 5.00;
						printf("[15] - Porção de Batatas - R$ 5.00\n");
					}
	          		else if(pedido == 16){
						total += 5.00;
				    	printf("[16] - Porção de Bacon - R$ 5.00\n");
					}
	          		else if(pedido == 17){
						total += 5.00;
						printf("[17] - Porção de Mandioca - R$ 5.00\n");	
					}
					else if(pedido == 18){
		                total1 += total;
		                contador +=1;
		                printf("Seu pedido atual custa: R$ %.2f, e seu total esta em: R$ %.2f e %d pedido(s)\n\n", total, total1, contador);
						printf("Escolha como prosseguir\n");
						printf("[19] - Para mostrar o cardapio comida novamente\n");
						printf("[20] - Para mostrar o cardapio de bebidas\n");
						printf("[21] - Para mostrar o cardapio de acompanhamentos\n");
						printf("[22] - Reiniciar pedido (Excluira totos os pedidos)\n");	
						printf("[23] - Para encerrar o pedido e ter o total a ser pago\n");
						printf("[24] - Para encerrar o pedido e participar do QUIZ\n");
						printf("[25] - Para encerrar o pedido e participar do nosso feedback e da promoção 'O dedo duro'!)\n");
		                total=0;
		                system("pause");
					}
		            else if(pedido == 19){
		            	Comida();
					}					
		            else if(pedido == 20){
		            	Bebida();
		            }
		            else if(pedido == 21){
		            	Acompanhamento();
		            }
		            else if(pedido == 22){
						printf("\nSeus pedidos foram excluidos e seu total é R$0.00 novamente.\n");
		            	printf("\nEscolha como prosseguir\n");
						printf("[19] - Para mostrar o cardapio comida novamente\n");
						printf("[20] - Para mostrar o cardapio de bebidas\n");
						printf("[21] - Para mostrar o cardapio de acompanhamentos\n");
						printf("[23] - Para encerrar o pedido e ter o total a ser pago\n");
						printf("[24] - Para encerrar o pedido e participar do QUIZ\n");
						printf("[25] - Para encerrar o pedido e participar do nosso feedback e da promoção 'O dedo duro'!)\n");
		                total=0;
						total1 = total;
						contador = 0;
					}
		            else if(pedido == 23){
		                total1 += total;
		                printf("Seu total foi de R$ %.2f, com %d pedido(s)\n\n", total1, contador);
		                printf("Obrigado pela preferência, Volte sempre!!!\n");
					}
					else if(pedido == 24){
						if(total <= 0){
							contador = 0;
						}else{
							contador +=1;
						}
					    total1 += total;
			            printf("Seu total foi de R$ %.2f, com %d pedido(s)\n\n", total1, contador);
						Quiz(quiz);
						exit(0);
					}
		            else if(pedido == 25){
						Feedback(feedback);	
						if(total == 0.00){
							contador = 0;
						}else{
							contador +=1;
						}
						printf("\nObrigado por participar! ...Seu dedo duro!!!.\n\n");    
					    total1 += total;
			            printf("Seu total foi de R$ %.2f, com %d pedido(s)\n\n", total1, contador);
			            printf("Obrigado pela preferência, Volte sempre!!!\n");
						exit(0);
					}	
					if(pedido != 18 && pedido != 22 && pedido != 23 && pedido != 24 && pedido != 25){
    					printf("valor até agora: R$ %.2f\n", total);
					}
					
				}
			case 4:
	        	Quiz(quiz);
	        	break;
	        case 5:
	        	Feedback(feedback);
	        	printf("Obrigado por participar do nosso FeedBack, ao finalizar seu pagamento, solicite seus brindes!\n");
	        	exit(0);
			case 0:
	        	Sair();
	        	exit(0);
		}
  
	
    }while(pedido != 18 && pedido != 19 && pedido != 20 && pedido != 21 && pedido != 22 && pedido != 23 && pedido != 24 && pedido != 25);
	return 0;
}


