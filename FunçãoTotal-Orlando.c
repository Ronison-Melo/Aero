#include"lista.h"
void contartermos(aviao *lista, int numero_p){
	int p = 0;
	aviao *inicio;
	inicio = lista;
	if(lista == NULL){
		printf("A lista esta vazia!\n");
	}else{
		do{
		p+= lista->numero_p;
		lista= lista->prox;
		}while(lista != NULL);
		printf("Numero de passageiros: %d", p);
	}
	getch();
}


