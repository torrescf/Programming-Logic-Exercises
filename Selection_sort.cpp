#include <iostream>

using namespace std;

void selection_sort(float vet[], int tam) {
    int menor;
    float aux; 
    for (int i = 0; i < tam - 1; i++) {
        menor = i;
        for (int j = i + 1; j < tam; j++) {  
            if (vet[j] < vet[menor]) { 
                menor = j;
            }
        }
        
        aux = vet[i];
        vet[i] = vet[menor];
        vet[menor] = aux;

        for (int k = 0; k < tam; k++) {
            cout << vet[k] << " ";
        }
        cout << endl;
    }
    for (int k = 0; k < tam; k++) {
            cout << vet[k] << " ";
        }
}

int main() {
    int tam;
    cin >> tam;

    float *vet = new float[tam];

    for (int i = 0; i < tam; i++) {
        cin >> vet[i];
    }

    selection_sort(vet, tam);

    delete[] vet; 
    return 0;
}
