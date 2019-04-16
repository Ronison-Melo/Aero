#include "fila.h"
#include "lista.h"

aviao *inserirFila(aviao **inicio, aviao **fim, aviao *novo){
	aviao *p;
	
	p = criar_aviao_fila(&novo);
	
	if((*inicio)==NULL){
		(*inicio)=(*fim)= p; 
	}else{
		(*fim)->prox = p;
		(*fim)=p;
	}
	printf("\nAviao pronto na pista de decolagem!\n\n");
}


void *imprimir(aviao **inicio, aviao **fim){
    int i=1;
    aviao *aux;
    aux = *inicio;

    do{
      printf("Aviao N%d\n",i);
      printf("codigo - %s \n",(aux)->codigo);
      printf("capitao - %s \n",(aux)->capitao);
    //	printf("Destino - %s \n",(aux)->destino);
      printf("numero de passageiros - %d \n\n\n",(aux)->numero_p);
      (aux)=(aux)->prox;
      i++;
    }while(aux != NULL);
}//matheus

void *consultar_cabeca(aviao **inicio){
	if(inicio!=NULL){
		printf("Proximo voo a decolar:\n");
		printf("\n\nVoo: %d",inicio->nvoo);
		printf("\nCompanhia: %s",inicio->cia);
		printf("\nOrigem: %s",inicio->origem);
		printf("\nDestino: %s",inicio->destino);
		printf("\nHorario: %s",inicio->horario);
		printf("\n********************************");
	}else{
		printf("Sem avioes disponiveis \n\n");
	}
}

void *quantidadeDePessoas(aviao **inicio, aviao **fim){
    int cont=0;
    aviao *aux,*prox;
    aux=prox=(*inicio);

    do{
        prox=(*inicio)->proximo;
        (*inicio)->proximo=NULL;
        cont+=(*inicio)->conta_p;
        (*fim)->proximo=(*inicio);
        (*fim)=(*inicio);
        (*inicio)=prox;

    }while((*inicio)!=aux);

    return cont;

}//ARTHUR

void imprime_dado_voo(aviao **inicio, aviao **fim){
	int i=1,cod;
        aviao *aux;
        aux = *inicio;
        printf("Qual o codigo do voo?");
        scanf("%d",&cod);
    do{
        if((aux)->codigo==cod){
            printf("Aviao N%d\n",i);
            printf("capitao - %s \n",(aux)->capitao);
            printf("Destino - %s \n",(aux)->destino);
            printf("numero de passageiros - %d \n",(aux)->numero_p);
        }
        (aux)=(aux)->prox;
        i++;
    }while(aux != NULL);

} //HENRIQUE
