#ifndef ROTA_H
#define ROTA_H

#include <string>

struct Node {
    std::string nome;
    Node* prox;
};

struct Lista {
    Node* inicio;
    int tamanho;
};

Lista* criarLista();

void inserirInicio(Lista* l, std::string nome);
void inserirFim(Lista* l, std::string nome);
void inserirPosicao(Lista* l, std::string nome, int pos);

void removerInicio(Lista* l);
void removerFim(Lista* l);

void buscar(Lista* l, std::string nome);

void listar(Lista* l);
void listarReverso(Node* n);

int contar(Lista* l);

#endif