#include "../include/rota.h"
#include <iostream>

using namespace std;

Lista* criarLista() {
    Lista* l = new Lista;
    l->inicio = NULL;
    l->tamanho = 0;
    return l;
}

void inserirInicio(Lista* l, string nome) {
    Node* novo = new Node{nome, l->inicio};
    l->inicio = novo;
    l->tamanho++;
}

void inserirFim(Lista* l, string nome) {
    Node* novo = new Node{nome, NULL};

    if (!l->inicio) {
        l->inicio = novo;
    } else {
        Node* aux = l->inicio;
        while (aux->prox) aux = aux->prox;
        aux->prox = novo;
    }
    l->tamanho++;
}

void inserirPosicao(Lista* l, string nome, int pos) {
    if (pos < 0 || pos > l->tamanho) return;

    if (pos == 0) {
        inserirInicio(l, nome);
        return;
    }

    Node* aux = l->inicio;
    for (int i = 0; i < pos - 1; i++)
        aux = aux->prox;

    Node* novo = new Node{nome, aux->prox};
    aux->prox = novo;
    l->tamanho++;
}

void removerInicio(Lista* l) {
    if (!l->inicio) return;

    Node* temp = l->inicio;
    l->inicio = temp->prox;
    delete temp;
    l->tamanho--;
}

void removerFim(Lista* l) {
    if (!l->inicio) return;

    if (!l->inicio->prox) {
        delete l->inicio;
        l->inicio = NULL;
    } else {
        Node* aux = l->inicio;
        while (aux->prox->prox)
            aux = aux->prox;

        delete aux->prox;
        aux->prox = NULL;
    }
    l->tamanho--;
}

void buscar(Lista* l, string nome) {
    Node* aux = l->inicio;

    while (aux) {
        if (aux->nome.find(nome) != string::npos)
            cout << "Encontrado: " << aux->nome << endl;

        aux = aux->prox;
    }
}

void listar(Lista* l) {
    Node* aux = l->inicio;

    while (aux) {
        cout << aux->nome << " -> ";
        aux = aux->prox;
    }
    cout << "NULL\n";
}

void listarReverso(Node* n) {
    if (!n) return;
    listarReverso(n->prox);
    cout << n->nome << " -> ";
}

int contar(Lista* l) {
    return l->tamanho;
}