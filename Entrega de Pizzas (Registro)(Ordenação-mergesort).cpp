#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct Cliente {
    string nome;
    double x, y;
    double valorPizza;
    double distancia;
};

void calcularDistancia(Cliente &cliente, double xPizzaria, double yPizzaria) {
    cliente.distancia = sqrt(pow(cliente.x - xPizzaria, 2) + pow(cliente.y - yPizzaria, 2));
}

void merge(Cliente arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    Cliente* L = new Cliente[n1];
    Cliente* R = new Cliente[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i].distancia <= R[j].distancia) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void mergeSort(Cliente arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int n, totalClientes;
    double xPizzaria, yPizzaria;

    cin >> n >> xPizzaria >> yPizzaria >> totalClientes;

    Cliente* clientes = new Cliente[totalClientes];

    for (int i = 0; i < totalClientes; i++) {
        cin >> clientes[i].nome >> clientes[i].x >> clientes[i].y >> clientes[i].valorPizza;
        calcularDistancia(clientes[i], xPizzaria, yPizzaria);
    }

    mergeSort(clientes, 0, totalClientes - 1);

    double somaValores = 0;
    for (int i = 0; i < n; i++) {
        somaValores += clientes[i].valorPizza;
    }

    cout << somaValores << endl;

    delete[] clientes;
    return 0;
}