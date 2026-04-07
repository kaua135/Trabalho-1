#include "../include/rota.h"
#include <iostream>

int main() {
    Lista* l = criarLista();

    inserirFim(l, "Centro");
    inserirFim(l, "UFSC");
    inserirFim(l, "Aeroporto");

    listar(l);

    return 0;
}