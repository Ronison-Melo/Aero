#include "lista.h"
aviao* criar_aviao(char codigo[7],int num,char cap[20]){
	aviao *aux;
	aux=(aviao*)malloc(sizeof(aviao));
	strcpy(aux->codigo,codigo);
	strcpy(aux->capitao,cap);
	aux->numero_p=num;
	aux->prox=NULL;
}
void insere(aviao **inicio,char codigo[7],int nump,char cap[20]){
	aviao *aux=criar_aviao(codigo,nump,cap);
	if((*inicio)==NULL){
		(*inicio)=aux;
	}else{
		aux->prox=(*inicio);
		(*inicio)=aux;
	}
}
