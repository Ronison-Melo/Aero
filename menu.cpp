#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<fila.h>
#include<lista.h>
#include<fila.c>
#include<lista.c>


void menu(){
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=* MENU DE OPCOES: *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n\n");
	printf("\t  (1) - Inserir entrada de um novo aviao no aeroporto\n\n");
	printf("\t  (2)- Listar todos avioes no aeroporto\n\n" );
	printf("\t  (3)- Check List\n\n");
	printf("\t  (4) - Remover aviao da pista de decolagem\n\n");
	printf("\t  (5) - Verificar quantidade de avioes na pista\n\n");
	printf("\t  (6) - Imprimir informacoes dos avioes na pista\n\n");
	printf("\t  (7) - Consultar proxima decolagem\n\n");
	printf("\t  (8) - Total de passageiros na pista de decolagem\n\n");
	printf("\t  (9) - Procurar dados de um voo\n\n");
	printf("\t  (10) - Sair\n\n");
}


 int main(){
 aviao *inicio, *fim,*lista,*aux;
 inicio=fim=aux=NULL;
 
 int op,n_pessoas,total;
 char codigo[7],destino[11],capitao[11];
 
 
 	menu();
 	printf("Escolha uma opcao:\n");
 	scanf("%d",&op);
 do{
 
 	switch(op){
 		case 1:
 			fflush(stdin);
   			printf("\n\nDigite o codigo do aviao: ");
   			gets(codigo);
   			printf("\n\nDigite o nome capitao: ");
   			gets(capitao);
   			printf("\n\nDigite o numero de passageiros: ");
   			scanf("%d",&n_pessoas);
   			inserir(&lista,codigo,capitao,n_pessoas);
   			
   			
			 printf("\n\n");	
 		break;
 		case 2:
 			imprimir(&lista); 
 			printf("\n\n");
 		break;
 		case 3:
 			fflush(stdin);
 				printf("Digite o Codigo do aviao : ");
				gets(codigo);
				
 			aux = check_list(&lista,codigo);
				    if(aux!=NULL)
						inserirFila(&fila,&fim,aux);
				    	total++;
					system("pause");
				}else{
					printf("Lista Vazia\n");
					system("pause");
				}
 			printf("\n\n");
 		break;
 
 		case 4:
 			fila=remove_vooLista(&inicio);
 			printf("Aviao %s decolou",fila->codigo);
 			printf("\n\n");
 		break;
 		case 5:
 			printf("%d avioes na pista",total);
 			printf("\n\n");
 		break;
 		case 6:
 			imprimir_Fila(&inicio,&fim); 
 			printf("\n\n");
 		break;
 		case 7:
 			consultar_cabeca(inicio);
 			printf("\n\n");
 		break;
 		 	case 8:
 			contartermos(&lista,numero_p);
 			printf("\n\n");
 		break;
 			case 9:
 				imprime_dado_voo(&inicio,&fim);
 			printf("\n\n");
 		break;			
 	}
 	menu();
 	printf("Escolha uma opcao:\n");
 	scanf("%d",&op);
 
}while(op!=10);
 }



