#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void selection_sort(long clientes[], long tam){
    long menor = 0, aux = 0;
    for(long i = 0; i < tam; i++) {
        menor = i;
        for(long j = i + 1; j < tam; j++) {
            if(clientes[j] < clientes[menor]) {
                menor = j;
            }
        }
        aux = clientes[i];
        clientes[i] = clientes[menor];
        clientes[menor] = aux;
    }
    for(long i = 0; i < tam; i++) {
        cout << clientes[i] << " ";
    }
}

struct hospedes {
    string nome;
    long long cpf; 
    string tipodoquarto;
};

int main() {
    long tam = 10;
    hospedes* clientes = new hospedes[tam];
    ifstream leitura("clientes.txt");

    if (!leitura.is_open()) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }


    for (long i = 0; i < tam; i++) {
        leitura >> clientes[i].nome;
        leitura >> clientes[i].cpf;
        leitura >> clientes[i].tipodoquarto;
    }


    for (long i = 0; i < tam; i++) {
        cout << clientes[i].nome << " " << clientes[i].cpf << " " << clientes[i].tipodoquarto << endl;
    }


     long* cpfs = new  long[tam];
    for ( long i = 0; i < tam; i++) {
        cpfs[i] = clientes[i].cpf;
    }


    selection_sort(cpfs, tam);


    delete[] clientes;
    delete[] cpfs;

    return 0;
}
