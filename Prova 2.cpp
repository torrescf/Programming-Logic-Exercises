#include <iostream>
#include <fstream>
using namespace std;

struct jogo {
    float preco;
    string nome;
};

void swap(float &a, float &b) {
    float aux = a;
    a = b;
    b = aux;
}

void selection_sort(int tamanho, jogo* mercado) {
    for (int i = 0; i < tamanho; i++) {
        int menor = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (mercado[j].preco < mercado[menor].preco) {
                menor = j;
            }
        }
        swap(mercado[i].preco, mercado[menor].preco);
    }
}

void redimensionamento(int &tamanho, jogo* &mercado) {
    int novo_tamanho = tamanho * 2;
    jogo* novovetor = new jogo[novo_tamanho];
    for (int i = 0; i < tamanho; i++) {
        novovetor[i] = mercado[i];
    }
    delete[] mercado;
    mercado = novovetor;
    tamanho = novo_tamanho;
}

void busca_sequencial(int &tamanho, jogo* mercado, float busca) {
    bool achou = false;
    for (int i = 0; i < tamanho; i++) {
        if (mercado[i].preco == busca) {
            cout << "valor encontrado em: " << endl;
            cout << mercado[i].nome << "  " << mercado[i].preco << endl;
            achou = true;
            return;
        }
    }
    if (!achou) cout << "Jogo nao encontrado" << endl;
}

int main() {
    int tamanho = 5;
    int capacidade = tamanho;
    jogo* mercado = new jogo[capacidade];
    ifstream entrada("precos.txt");
    int i = 0;
    while (entrada >> mercado[i].nome >> mercado[i].preco) {
        i++;
        if (i == capacidade) {
            redimensionamento(capacidade, mercado);
        }
    }
    tamanho = i;
    selection_sort(tamanho, mercado);
    for (int i = 0; i < tamanho; i++) {
        cout << mercado[i].nome << "  " << mercado[i].preco << endl;
    }
    float busca;
    cin >> busca;
    busca_sequencial(tamanho, mercado, busca);
    delete[] mercado;
    return 0;
}