#ifndef LISTA_H
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{
	char codigo[7];
	char destino[7];
	int numero_p;
	char capitao[20];
	struct Node *prox;
}aviao;

void insere(aviao **inicio,char codigo[7],int numero_p, char capitao[20]);//CESAR
aviao* criar_aviao(char codigo[7],int numero_p, char capitao[20]);//JOAO
aviao* check_list(aviao **inicio,char codigo[7]);// JOAO C
aviao* remove_vooLista(aviao **inicio,char codigo[7]);//EMANUEL
aviao* Total_passageiros(aviao **inicio);// Artur
aviao* Total_passageiros_lista(aviao **inicio);//Orlando

void cabecario();//cabecario de cada tela;
void op();
#endif
