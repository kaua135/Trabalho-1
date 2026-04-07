#include <iostream>
#include "rota.h"

using namespace std;

int main() {

    Lista* rota = criarLista();
    int op, pos;
    string nome;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1 Inserir inicio\n";
        cout << "2 Inserir fim\n";
        cout << "3 Inserir posicao\n";
        cout << "4 Remover inicio\n";
        cout << "5 Remover fim\n";
        cout << "6 Buscar\n";
        cout << "7 Listar\n";
        cout << "8 Listar inverso\n";
        cout << "9 Contar\n";
        cout << "0 Sair\n";
        cin >> op;
        cin.ignore();

        switch(op) {
        case 1:
            getline(cin, nome);
            inserirInicio(rota, nome);
            break;

        case 2:
            getline(cin, nome);
            inserirFim(rota, nome);
            break;

        case 3:
            getline(cin, nome);
            cin >> pos;
            inserirPosicao(rota, nome, pos);
            break;

        case 4:
            removerInicio(rota);
            break;

        case 5:
            removerFim(rota);
            break;

        case 6:
            getline(cin, nome);
            buscar(rota, nome);
            break;

        case 7:
            listar(rota);
            break;

        case 8:
            listarReverso(rota->inicio);
            cout << "NULL\n";
            break;

        case 9:
            cout << contar(rota) << endl;
            break;
        }

    } while (op != 0);

    return 0;
}