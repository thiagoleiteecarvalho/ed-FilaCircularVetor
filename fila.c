/*
 * fila.c
 * Classe de implemantação da ED Fila Circular.
 * Author: Thiago Leite
 */

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int quantidade, cabeca, fim;

void iniciar() {
	quantidade = 0;
	cabeca = 0;
	fim = 0;
}

void enqueue(char caractere) {

	if (!full()) {

		fila[fim] = caractere;
		fim++;
		quantidade++;

		if (fim == TAMANHO) {
			fim = 0;
		}
	} else {
		printf("Fila cheia.\n");
	}
}

int size() {
	return quantidade;
}

char head() {

	if (quantidade != 0) {
		return fila[cabeca];
	} else {
		printf("Fila vazia.\n");
		return '\0';
	}
}

char dequeue() {

	char caractere;

	if (!empty()) {

		caractere = fila[cabeca];
		fila[cabeca] = '\0';
		cabeca++;
		quantidade--;

		if (cabeca == TAMANHO) {
			cabeca = 0;
		}

		return caractere;
	} else {
		printf("Fila vazia.\n");
		return '\0';
	}
}

int empty() {
	return quantidade == 0;
}

int full() {
	return quantidade == TAMANHO;
}

void exibir() {

	if (empty()) {

		printf("Fila vazia!\n");
		return;
	}

	printf("Fila:\n");

	int i;
	for (i = 0; i < TAMANHO; i++) {
		printf(" %c ", fila[i]);
	}

	printf("\n");
}
