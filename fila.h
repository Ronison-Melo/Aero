#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

aviao *inserir(aviao **inicio, aviao **fim, aviao *novo);
void *remover(aviao **inicio);
void *contar(aviao **inicio, aviao **fim);
void *imprimir(aviao **inicio, aviao **fim);
void *consultar_cabeca(aviao **inicio);
void *quantidadeDePessoas(aviao **inicio, aviao **fim);
void *imprime_dado_voo(aviao **inicio, aviao **fim); //HENRIQUE

#endif // FILA_H_INCLUDED
