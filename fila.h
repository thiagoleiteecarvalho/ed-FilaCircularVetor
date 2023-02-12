/*
 * fila.h
 * Header de definição da ED Fila Circular.
 * Author: Thiago Leite
 */

#pragma once

#define TAMANHO 8
int fila[TAMANHO];

void iniciar();
void enqueue(char caractere);
int size();
char head();
char dequeue();
int empty();
int full();
void exibir();
