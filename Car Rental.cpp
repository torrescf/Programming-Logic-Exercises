#include <iostream>
#include <string> 

using namespace std;

int main() {
    string classe;
    int dias;
    double kmrodados, valordiaria, valorkm;

    cout << "Digite a classe do carro, numero de dias e km rodados: ";
    cin >> classe >> dias >> kmrodados;

    if (classe == "ECONOMICO" or "economico") {
        valordiaria = 88.00;
        valorkm = 1.15;
        cout << "R$ " << (valordiaria * dias) + (valorkm * kmrodados) << endl;
        cout << "Carros a disposição: Fiat Uno 1.0, Fiat Mobi 1.0, Renault Kwid 1.0, VW Gol 1.0, Ford Ka 1.0, Renault Sandero 1.0, Onix Joy 1.0";
    }
    else if (classe == "INTERMEDIARIO" or "intermediario") {
        valordiaria = 197.00;
        valorkm = 1.56;
        cout << "R$ " << (valordiaria * dias) + (valorkm * kmrodados) << endl;
        cout << "Carros a disposição: HB20 1.6, VW Gol 1.6, Renault Sandero 1.0, Fiat Cronos 1.3, Onix 1.0 Turbo, Nissan Versa FAST";
    }
    else if (classe == "PRIME" or "prime") {
        valordiaria = 265.00;
        valorkm = 2.89;
        cout << "R$ " << (valordiaria * dias) + (valorkm * kmrodados) << endl;
        cout << "Carros a disposição: Ford Ecoesport 1.5, Renault Duster 1.6, Nissan Kicks 1.6, VW Nivus 1.6, Fiat Pulse 1.6, Chery Tiggo 3X Turbo";
    }
    else if (classe == "ESPECIAIS" or "especiais") {
        valordiaria = 335.00;
        valorkm = 3.40;
        cout << "R$ " << (valordiaria * dias) + (valorkm * kmrodados) << endl;
        cout << "Carros a disposição: Jeep Compass 4x4 Diesel, Mitsubishi Pajero 2.4 Diesel, Mercedes C180, Toyota Corolla Cross, VW Taos Highline, Mitsubishi Eclipse Cross";
    }
    else {
        cout << "Classe de carro invalida." << endl;
    }

    return 0;
}
